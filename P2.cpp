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

        ll n;
        cin>>n;

        vll a(n);
        vll b(n);

        for(ll i=0;i<n;i++)cin>>a[i];
        for(ll i=0;i<n;i++)cin>>b[i];

        map<pair<ll, ll>, ll> mp;
        ll res = 0;

        for(ll i=0; i<n;i++){

            res += mp[make_pair(a[i], b[i])];
            mp[make_pair(b[i], a[i])]++;
        }
        cout<<res<<"\n";
    }
 
    return 0;
}