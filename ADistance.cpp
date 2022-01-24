#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--){

        ll x, y;
        cin>>x>>y;

        ll d = x+y;
        ll c1=0, c2=0, f = 0;
        ll n = 1e6;
        for(ll i = 0; i <= n; i++){

            for(ll j = 0; j <= n; j++){

                if((i+j==d/2) && (abs(i-x)+abs(j-y)==d/2)){
                    f++;
                    c1 = i, c2 = j;
                    break;
                }
                else continue;
            }
        }
        if(!f)cout<<"-1 -1";
        else cout<<c1<<" "<<c2;
        cout<<"\n";
    }
 
    return 0;
}