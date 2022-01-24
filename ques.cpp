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
        map<ll, ll> m;
        vll a;
        for(ll i = 0; i < n; i++){
            ll x;
            cin>>x;
            m[x]++;
        }
        int f = 0;
        for(auto x : m){
            if(x.second==3){
                f++;
                break;
            }
            a.push_back(x.first);
        }

        if(f || m[a[a.size()-1]]==2)cout<<"-1";
        else{
            for(ll i = 0; i < a.size(); i++){
                if(m[a[i]]==2)cout<<a[i]<<" ";
            }

            for(ll i = a.size()-1; i >= 0; i--)cout<<a[i]<<" ";
        }

        cout<<"\n";
    }
 
    return 0;
}