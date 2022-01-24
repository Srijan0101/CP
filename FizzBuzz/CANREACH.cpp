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

        ll x, y, k;
        cin>>x>>y>>k;

        if((x%k==0) && (y%k==0))cout<<"YES";
        else cout<<"NO";

        cout<<"\n";

    }
 
    return 0;
}