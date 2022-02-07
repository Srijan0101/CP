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

        ll x, a, b;
        cin>>x>>a>>b;
        
        ll res = (x*b)/a;
        ll rem = (x*b)%a;

        if(x==1 && a==1 && b==1)cout<<"1\n";
        else{
            if(rem==0 && res<x) cout<<res<<"\n";
            else cout<<"-1\n";
        }
    }
 
    return 0;
}