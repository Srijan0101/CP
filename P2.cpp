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

        string s;
        cin>>s;

        char res[k];
        int f = 0;

        if(k%2!=0){
            for(ll i = k; i >= 1; i-=2)res[i-1] = s[f++];
            for(ll i = 2; i < k; i+=2)res[i-1] = s[f++];
        }
        else {
            for(ll i = k; i >= 2; i-=2)res[i-1] = s[f++];
            for(ll i = 1; i < k; i+=2)res[i-1] = s[f++];
        }
        for(ll i = 0; i < k; i++)cout<<res[i];
        for(ll i = k; i < n; i++)cout<<s[i];
        cout<<"\n";
    }
    
    return 0;
}