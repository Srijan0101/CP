#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        ll n, k;
        cin>>n>>k;

        vll v(n);
        
        for(ll i = 0; i < n; i++)cin>>v[i];

        sort(v.begin(), v.end(), greater<ll>());

        ll ans = 0;
        for(ll i = 0; i < n; i++){

            if(v[i]>=v[k-1])ans++;
        }

        cout<<ans<<"\n";
    }
 
    return 0;
}