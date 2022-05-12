#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    ll cno = 1;
    while(t--){

        string s, p;
        cin>>s;
        cin>>p;

        int n = s.size(), m = p.size();

        int ans = m-n;

        int i = 0, j = 0;
        while(i<n && j<m){

            if(s[i]==p[j]){
                i++;
                j++;
            }
            else j++;
        }


        cout<<"Case #"<<cno<<": ";
        
        if(i!=n){

            cout<<"IMPOSSIBLE";
        }

        else cout<<ans;   

        cout<<"\n";
        cno++;
    }
 
    return 0;
}