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

        string s, p;
        cin>>s>>p;

        int cnt = count(p.begin(), p.end(), '1');

        int f = 0;
        if(cnt==n || cnt==0){

            if(s==p)cout<<"YES\n";
            else{

                cout<<"NO\n";            
            }                 
        }

        else cout<<"YES\n";
    }
 
    return 0;
}