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
        for(ll i=0;i<n;i++)cin>>a[i];

        ll c=0;
        for(ll i=1; i<n-1;i++){

            if((a[i]<a[i-1]) && (a[i]<a[i+1])) c++;
        }

        cout<<c<<"\n";
    }
 
    return 0;
}