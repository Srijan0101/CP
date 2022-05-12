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
        
        ll b, c;
        cin>>b>>c;
        ll a;        
        ll g = __gcd(b, c);
        a = c/g;

        cout<<a<<"\n";
    }
 
    return 0;
}