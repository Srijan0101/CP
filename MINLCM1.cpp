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

        ll x, k;
        cin>>x>>k;

        ll l = x;
        ll r = x*k;

        cout<<l*2<<" "<<(r-1)*r;

        cout<<"\n";
    }
 
    return 0;
}