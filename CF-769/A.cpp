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

        int n;
        cin>>n;
        string s;
        cin>>s;

        int c1 = 0, c0 = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')c0++;
            else c1++;
        }

        if(c1<=1 && c0<=1)cout<<"YES\n";
        else cout<<"NO\n";
    }
 
    return 0;
}