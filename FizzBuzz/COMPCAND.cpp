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

        ll n, k;
        cin>>n>>k;

        if(n==0)cout<<"0";
        else if(n%k==0)cout<<n/k;
        else cout<<"-1";

        cout<<"\n";
    }
 
    return 0;
}