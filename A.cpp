#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
ll f(ll n)
{
    return (n == 1 || n == 0) ? 1 : n *f(n - 1);
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        ll n;
        cin>>n;

        ll sum = (n*(n+1))/2;
        ll p = pow(sum, 2);
        ll q = f(n);

        ll ans = ((n-1)*p)/q;

        if(n==1)cout<<"1\n";
        else
        cout<<ans%998244353<<"\n";

    }
 
    return 0;
}