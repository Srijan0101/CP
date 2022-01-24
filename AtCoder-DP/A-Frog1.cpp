#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

int n; 
int h[100005];
int dp[100005];

int func(int idx){

    if(idx==n-1)return 0;
    if(idx>=n)return INT_MAX;
    if(dp[idx]!=-1)return dp[idx];

    int left = abs(h[idx+1]-h[idx])+func(idx+1);

    int right = INT_MAX;
    if(idx+2<n){
        right = abs(h[idx+2]-h[idx])+func(idx+2);
    }

    return dp[idx] = min(left, right);
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;

    memset(dp, -1, sizeof dp);

    for(int i = 0; i < n; i++)cin>>h[i];
    
    cout<<func(0);

    return 0;
}