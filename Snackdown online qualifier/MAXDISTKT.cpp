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
        ll m = LLONG_MIN, c1 = 0;
        for(ll i = 0; i < n; i++){
            cin>>a[i];
            m = max(m, a[i]);
            if(a[i]==1)c1++;
        }
        
        vll b(n);

        if(c1 && m!=1)b[0] = a[0]+1;

        else b[0] = 0;

        ll j = 1;
        for(ll i = 1; i < n; i++){

            if(j<m){
                b[i] = a[i]+j;
                j++;   
            }
            else b[i] = 0;
        }

        for(ll i = 0; i < n; i++)cout<<b[i]<<" ";
        // for(ll i = 0; i < n; i++)cout<<b[i]%a[i]<<" ";

        cout<<"\n";
    }
 
    return 0;
}