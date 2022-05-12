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
        for(ll i = 0; i < n; i++) b[i] = a[i];

        sort(b.begin(), b.end());

        int f = 0;
        for(ll i = 0; i < n; i++){

            if(a[i]!=b[i]){
                f++;
                break;
            }
        }

        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
 
    return 0;
}