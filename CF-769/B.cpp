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
        for(ll i = 0; i < n; i++){

            a[i]=i;
        }
        // for(ll i = 0; i < n; i++)cout<<a[i]<<" ";
        ll p = 1;
        while(p<n) p*=2;
        while(p>=n) p/=2;

        // if(p==n) p/=2;

        ll idx;
        if((1^a[p])>(1^a[p-1])) idx = p-1;
        else idx = p;
        swap(a[0], a[idx]);


        // cout<<p<<endl;

        for(ll i = 0; i < n; i++)cout<<a[i]<<" ";
        cout<<"\n";
    }

 
    return 0;
}