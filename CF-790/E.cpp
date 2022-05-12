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

        ll n, q;
        cin>>n>>q;

        vll a(n);
        for(ll i = 0; i < n; i++) cin>>a[i];

        sort(a.begin(), a.end());

        vll v;
        ll sum = 0;
        for(ll i = n-1; i >= 0; i--){

            sum += a[i];
            v.push_back(sum);
        }
        for(ll i = 0; i < q; i++){

            ll que;
            cin>>que;

            ll f = 0;
            ll l = 0, h = n-1, mid;
            ll idx;
            while(l<=h){

                mid = l + (h-l)/2;

                if(v[mid]==que){
                    
                    idx = mid;
                    f++;
                    break;
                }    
                else if(v[mid]>que){
                    
                    idx = mid;
                    h = mid-1;
                    f++;

                }
                else l = mid+1;
            }

            if(f) cout<<idx+1<<"\n";
            else cout<<"-1\n";

        }
    }
 
    return 0;
}