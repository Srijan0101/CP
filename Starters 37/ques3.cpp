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
        int c0 = 0, c1 = 0;
        for(ll i = 0; i < n; i++){

            cin>>a[i];
            if(a[i]==0) c0++;
            else c1++;
        }

        if(c0>c1) cout<<0<<"\n";
        else if(c0==c1) cout<<1<<"\n";
        else cout<<1<<"\n";

    }
 
    return 0;
}