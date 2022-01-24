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

        ll s = pow(2, n);

        unordered_set<ll> us;
        vll a(s);

        for(ll i = 0; i < s; i++){
            cin>>a[i];
            us.insert(a[i]);
        }

        ll f = 0;

        if(us.size()==1)f++;
        else if(us.size()==2){

            for(ll i = 0; i < s-1; i++){

                if(a[i]!=a[i+1]){

                    if(abs(a[i]-a[i+1])==1){
                        f++;
                        break;
                    }
                }
            }
        }
        if(f)cout<<"YES";
        else cout<<"NO";

        cout<<"\n";
    }
 
    return 0;
}