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

        vll odd;
        vll even;

        for(ll i = 0; i < n; i++){

            ll x;
            cin>>x;

            if(x%2==0) even.push_back(x);
            else odd.push_back(x);
        }

        ll p = 0;
        vector<int> v1;
        vector<int> v2;
        for(ll i = 0; i < n/2-1; i++){
            
            ll eve_diff = abs(even[i]-even[i+1]);
            ll odd_diff = abs(odd[i]-odd[i+1]);
            if(eve_diff!=0 && eve_diff%2==0){ 
                v1.push_back(eve_diff);
                p++;
            }
            if(odd_diff!=0 && odd_diff%2==0){
                v2.push_back(odd_diff);
                p++;
            } 
        }

        if(p==0) cout<<"YES\n";
        else{

            int n = v1.size();
            int m = v2.size();

            if(n!=m) cout<<"NO\n";
            else {

                int f = 0;
                for(int i = 0; i < n; i++){

                    if(v1[i]!=v2[i]){
                        f++;
                        break;
                    }
                }
                
                if(f) cout<<"NO\n";
                else cout<<"YES\n";
            }
        }
    }
 
    return 0;
}