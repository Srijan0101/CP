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

        ll p = 1;
        for(ll i=0;i<n;i++){

            p *= 2;
        }

        cout<<p-1<<"\n";

    }
 
    return 0;
}