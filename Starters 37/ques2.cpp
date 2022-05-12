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

        ll n, m, x;
        cin>>n>>m>>x;

        if(m<=x) cout<<0<<"\n";
        else{

            ll sum = 0;
            ll num = x+1;
            ll c = (x*n)/num;

            cout<<c<<"\n";
        }

    }
 
    return 0;
}