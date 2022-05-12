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

        vector<vector<ll>> v(n, vector<ll>(m, 0));
        for(ll i = 0; i < n; i++){

            for(ll j = 0; j < m; j++){

                ll x;
                cin>>x;

                v[i][j] = x;
            }
        }

        for(ll i = 0; i < n; i++)

    }
 
    return 0;
}