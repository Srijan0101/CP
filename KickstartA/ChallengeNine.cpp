#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    ll cno = 1;
    while(t--){

        string s;
        cin>>s;

        ll n = s.size();
        ll sum = 0;
        
        for(ll i=0;i<n;i++) sum += (s[i]-'0');

        ll dig = 9-sum%9;
        // cout<<dig<<endl;


        // OUTPUT
        cout<<"Case #"<<cno<<": ";
        ll f = 0;

        if(sum%9==0){

            cout<<s[0]<<0;
            for(ll i=1;i<n;i++) cout<<s[i];
        }

        else{
            for(ll i = 0; i < n; i++){

                if(dig<(s[i]-'0') && f==0){
                    cout<<dig;
                    f = 1;
                }

                cout<<s[i];
            }
            if(f==0) cout<<dig;
        }
        cout<<"\n";
        cno++;
    }
 
    return 0;
}