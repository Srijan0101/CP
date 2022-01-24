#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    // while(t--){

        ll n, p, k, d = 0;
        cin>>n>>p>>k;

        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            ll f = i%k;
                
                m[f]++;

            
        }   

        for(auto &i : m)                       // O(nlogn)
        cout<<i.first<<" "<<i.second<<endl;

        for(auto &i : m){

            d += i.second;

            if(i.second<=-1)break;
        }                       
        
        cout<<d<<endl;
    // }
 
    return 0;
}   