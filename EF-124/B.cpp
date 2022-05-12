#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
#define d 1e9
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        ll n;
        cin>>n;

        ll x;

        
        int f = 0;

        vll res;
        int ai = 1;

        if(n>19) cout<<"NO\n";
        else{

            for(ll i = 0; i < n; i++){

                res.push_back(ai);
                x = 2*ai;

                ai = ai+x;
            }

            cout<<"YES\n";
            for(auto i : res)cout<<i<<" ";
            cout<<"\n";
        
        }

    }
 
    return 0;
}