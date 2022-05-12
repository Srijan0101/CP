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
        string s;
        cin>>s;

        char ch = s[0];
        ll c = 1;

        for(ll i=1;i<n; i++){

            if(ch!=s[i]){
                c++;
                ch = s[i];
            }
        }
        cout<<c<<"\n";
    }
 
    return 0;
}