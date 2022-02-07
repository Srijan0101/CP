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

        if(n%2!=0) cout<<"NO\n";

        else{
            map<char, ll> m;

            for(ll i = 0; i < n; i++){

                m[s[i]]++;
            }
            int f = 0;
            for(auto it : m){

                if(it.second>(n/2)){
                    f++;
                    break;
                }
            }

            if(f) cout<<"NO\n";
            else{
                cout<<"YES\n";
                sort(s.begin(), s.end());

                reverse(s.begin()+n/2, s.end());
                cout<<s<<"\n";
            }
        }


    }
 
    return 0;
}