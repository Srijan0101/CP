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

        ll n, m;
        cin>>n>>m;

        ll c1 = m;
        ll c0 = n-m;

        ll p = c1+1;

        ll g = c0/p;
        ll r = c0%p;

        ll gd = p-r;
        ll ans = 0;

        ans += ((g*(g+1))/2)*gd;

        ans += (((g+1)*(g+2))/2)*r;

        cout<<ans<<"\n";

    }
 
    return 0;
}