#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
int n = 1e5;
int mod = 1e9+7;
using namespace std;

vi f(n+1), p(n+1);
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, k; 
    cin>>t>>k;
    
    // Base cases
    for(int i = 1; i < k; i++)f[i]=1;
    f[k]=2;

    // DP formula 
    for(int i = k+1; i <= n; i++)f[i] = (f[i-k]+f[i-1])%mod;

    // Prefix sum
    for(int i = 1; i <= n; i++)p[i] = (p[i-1]+f[i])%mod;

    while(t--){

        int a, b;
        cin>>a>>b;

        int ans = (p[b]-p[a-1])%mod;

        if(ans<0)ans+=mod;
        cout<<ans<<"\n";
    }
 
    return 0;
}