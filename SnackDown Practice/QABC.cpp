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
      
        vll b(n);
        for(ll i = 0; i < n; i++)cin>>b[i];

        int f = 0;
        for(ll j = 0; j < n-2; j++){

            if(a[j]>b[j]){
                f++;
                break;
            }

            ll diff = b[j]-a[j];

            a[j]+=diff;
            a[j+1] += 2*diff;
            a[j+2] += 3*diff;
        }

        for(ll j = 0; j < n; j++){

            if(a[j]!=b[j]){
                f++;
                break;
            }
        }

        if(f)cout<<"NIE\n";
        else cout<<"TAK\n";
    }
 
    return 0;
}