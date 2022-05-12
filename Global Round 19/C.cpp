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

        ll op = 0, c1=0;

        if(n==3 && a[1]%2!=0)cout<<"-1\n";
        else{

            for(ll i = 1; i < n-1; i++){

                op += (ll)(a[i])/2;
                if(a[i]%2!=0) op++;
                if(a[i]==1)c1++;
            }

            if(c1==n-2) cout<<"-1\n";
            else{

                cout<<op<<"\n";
            }
        }

    }
 
    return 0;
}