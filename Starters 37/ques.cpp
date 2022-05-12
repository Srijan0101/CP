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

        ll n, x;
        cin>>n>>x;

        vll h(n);
        for(ll i = 0; i < n; i++) cin>>h[i];

        ll ans1 = 0;
        for(ll i = 0; i < n; i++){

            ans1 += h[i]/x;
            if(h[i]%x!=0) ans1++;
        }

        ll ans2 = *max_element(h.begin(), h.end());

        ll res = min(ans1, ans2);
        cout<<res<<"\n";
    }
 
    return 0;
}