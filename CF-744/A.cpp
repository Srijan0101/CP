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

        string s;
        cin>>s;
        int ca = 0, cb = 0, cc = 0;
        for(int i = 0; i < s.size(); i++){

            if(s[i]=='A')ca++;
            else if(s[i]=='B')cb++;
            else cc++;
        }

        if(cb==ca+cc)cout<<"YES\n";
        else cout<<"NO\n";

    }
 
    return 0;
}