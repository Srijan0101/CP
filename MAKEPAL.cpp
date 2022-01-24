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
        for(ll i = 0; i < n; i++)cin>>a[i];
        
        ll f = 0;
        if(n==1)cout<<"0\n";
        else{
            for(ll i = 0; i < n; i++){
                if(a[i]%2!=0)f++;
            }

            if(f==0)cout<<"0\n";
            else cout<<f/2<<"\n";
        }
    }
 
    return 0;
}