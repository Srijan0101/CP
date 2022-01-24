#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

int gcd(int a, int b){

    if (b == 0) return a;

    return gcd(b, a % b);
}
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        ll n;
        cin>>n;

        vll a(n);
        for(int i = 0; i < n; i++)cin>>a[i];
        
        bool is = false;
        int c = 0;

        ll x = ceil(n/2);  // size of gcd array
        vll v;

        for(int i = 0; i < n; i++){
            if(a[i]==2)is = true;

            if(a[i]%2==0){
                c++;
                v.push_back(a[i]);
            }
        }

        if(c >= x && is){
            sort(v.begin(), v.end());
            int g = v[0];

            for(int i = 1; i < x; i++){
                g = gcd(g, v[i]);
            }
            if(g==2) cout<<"YES\n";
            else cout<<"NO\n";            
        }
         else {


            if (c >= x) {
                sort(v.begin(), v.end());
                int g = v[0];

                for (int i = 1; i < x; i++) {
                    g = gcd(g, v[i]);
                }
                if (g == 2) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";

                }
            } else {
                cout << "NO\n";
            }


         
        }
    }
 
    return 0;
}