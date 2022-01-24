#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        ll n, k;
        cin>>n>>k;
        ll a[n];

        for(ll i = 0; i < n; i++)cin>>a[i];

        ll s[n];
        for(ll i = 0; i < n; i++)s[i] = a[i];

        sort(s, s + n, greater<ll>());
        
        ll med_idx = k%2==0 ? (k+1)/2 : k/2;
        ll median = s[med_idx];

        ll rem = k-1;

        ll lc = rem%2==0 ? rem/2 : rem/2+1;

        ll sc = rem-lc;
        ll ans[k];
        int t = 0;
        for(int i = 0; i < n; i++){
            
            if(a[i] == median){
                ans[t++] = a[i];
            }

            if(lc && a[i]>median){
                ans[t++] = a[i];
                lc--;
            }

            if(sc && a[i]<median){
                ans[t++] = a[i];
                sc--;
            }
        }

        for(int i = 0; i < k; i++)cout<<ans[i]<<" ";

        cout<<"\n";

    }
 
    return 0;
}