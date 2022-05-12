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

        ll n, m;
        cin>>n>>m;

        vector<string> vs;

        for(ll i = 0; i < n; i++){

            string s;
            cin>>s;

            vs.push_back(s);
        }

        vll a;
        for(ll i = 0; i < n-1; i++){

            ll mine = INT_MAX;
            for(ll j = i+1; j < n; j++){

                ll sum = 0;
                for(ll k = 0; k < m; k++){

                    sum += abs(vs[i][k]-vs[j][k]);
                }
            //     cout<<sum<<endl; 
            // cout<<mine<<endl;
                mine = min(sum, mine);
            }
            a.push_back(mine);
        }

        // for(auto it : a) cout<<it<<" ";

        sort(a.begin(), a.end());
        cout<<a[0]<<"\n";
    }
 
    return 0;
}