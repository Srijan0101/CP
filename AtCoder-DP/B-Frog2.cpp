#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

int n, k; 
int h[100005];
int dp[100005];

int func(int idx){

    if(idx==n)return 0;
    if(dp[idx]!=-1)return dp[idx];

    int mini = 1e10;
    for(int i = idx+1; i <= min(n, idx+k); i++){
        mini = min(mini, abs(h[i]-h[idx])+func(i));
    }

    return dp[idx] = mini;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>k;

    memset(dp, -1, sizeof dp);

    for(int i = 1; i <= n; i++){
        cin>>h[i];
        dp[i]=-1;
    }
    
    cout<<func(1);

    return 0;
}