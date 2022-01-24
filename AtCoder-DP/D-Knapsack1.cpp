#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

ll dp[102][100006];

ll frac(vll &wt, vll &v, ll n, ll w){

    if(n==0 || w==0)return 0;

    if(dp[n][w]!=-1)return dp[n][w];

    if(wt[n-1]<=w){
        return dp[n][w] = max(v[n-1]+frac(wt, v, n-1, w-wt[n-1]), frac(wt, v, n-1, w));
    }
    else return dp[n][w] = frac(wt, v, n-1, w);
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, w;
    cin>>n>>w;

    memset(dp, -1, sizeof dp);

    vll wt(n), v(n);
    ll j = 0, k = 0;

    for(ll i = 0; i < 2*n; i++){
        if(i%2==0)cin>>wt[j++];
        else cin>>v[k++];
    }

    cout<<frac(wt, v, n, w);
 
    return 0;
}