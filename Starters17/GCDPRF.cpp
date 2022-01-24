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

        vll b(n);
        vll a(n);
        ll f = 0;
        for(ll i = 0; i < n; i++)cin>>b[i];
        for(ll i = 1; i < n; i++){

            if((b[i-1]<b[i]) || (b[i-1]%b[i]!=0)){
                f++;
                break;
            }
        }

        if(f)cout<<"-1";
        else{

            for(ll i = 0; i < n; i++){

                a[i] = b[i];               
            }

            for(ll i = 0; i < n; i++){
                cout<<a[i]<<" ";
            }            
        }
        cout<<"\n";        
    }
 
    return 0;
}