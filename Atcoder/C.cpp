#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned ll n, q;
    cin>>n>>q;
    vector<unsigned ll> m[n];
    vector<unsigned ll> a(n);

    unordered_map<unsigned ll, unsigned ll> um;


    for(unsigned ll i = 0; i < n; i++){
        cin>>a[i];
        m[a[i]].push_back(i+1);
        um[a[i]]++;
    }

    unsigned ll f = 0;
    while(q--){

        f = 0;
        unsigned ll x, k;
        cin>>x>>k;

        if(um.find(x)==um.end())f++;
        if(um[x]<k)f++;

        if(f) cout<<"-1\n";
        else cout<<m[x][k-1]<<"\n";
    }  
    
    return 0;
}