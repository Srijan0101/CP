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

        ll l, r, a;
        cin>>l>>r>>a;

        for(ll i = l; i <= r; i++){
            cout<<(i/a)+i%a<<endl;
        }

    }
 
    return 0;
}