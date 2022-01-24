#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
ll solve(ll n, ll m){

    if(n==1)return 1;
    else return (solve(n-1, m)-1)%n;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        ll m, x;
        cin>>m>>x;

        for(ll i = 1; i <= x; i++){

            cout<<solve(i, m)<<" ";
        }
        cout<<"\n";
    }
 
    return 0;
}