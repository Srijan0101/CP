#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

int t[100002];

int alice(ll x, ll y, ll i, vll &a){

    if(x==y && i<0){

        return 1;
    } 
    else if(i<0 && x!=y){

        return 0;
    } 

    if(t[i]!=-1) return t[i];


    return t[i] = (alice(x+a[i], y, i-1, a) || alice(x^a[i], y, i-1, a));
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test; cin>>test;
    while(test--){

        ll n, x, y;
        cin>>n>>x>>y;

        vll a(n);
        for(ll i=0;i<n;i++) cin>>a[i];

        memset(t, -1, sizeof t);

        ll i=n-1;

        if(alice(x, y, i, a)) cout<<"Alice\n";
        else cout<<"Bob\n";
    }
 
    return 0;
}