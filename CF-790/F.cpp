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

        vll a(n);
        map<ll, ll> m;
        for(ll i = 0; i < n; i++) cin>>a[i];
        for(ll i = 0; i < n; i++){
            
            m[a[i]]++;
        }

        vll v;
        for(auto it : m){ 

            if(it.second>=k) v.push_back(it.first);
        }

        if(v.size()<1) cout<<"-1\n";
        else if(v.size()==1) cout<<v[0]<<" "<<v[0]<<"\n";
        else{

            // for(auto it : v) cout<<it<<" ";
            // cout<<endl;

            ll l = v[0], r = -1;
            ll sz = v.size();

            ll c = 0, f = 0;
            vector<pair<int, int>> vp;
            for(ll i = 0; i < sz-1; i++){

                if(v[i+1]==v[i]+1){

                    f++;
                    c++;
                }
                else{

                    f++;
                    r = v[i];
                    // cout<<l<<" "<<r<<endl;
                    vp.push_back(make_pair(l, r));
                    l = v[i+1];
                    c = 0;
                }

                if(i==sz-2){

                    if(v[i+1]==v[i]+1){
                        r = v[i+1];
                    }

                    vp.push_back(make_pair(l, r));
                    // cout<<l<<" "<<r<<endl;
                }
            }

            // for(auto it : vp){
            //     cout<<it.second<<" "<<it.first<<endl;
            // }

            map<ll, ll> mm;
            if(f>=2){

                int res = INT_MIN;
                for(auto it : vp){

                    if(res<(it.second-it.first)){

                        res = it.second-it.first;
                        m[res] = it.first;
                    }
                }

                cout<<m[res]<<" "<<(m[res]+res)<<"\n";
            }
            else cout<<"-1\n";
        }


    }
 
    return 0;
}