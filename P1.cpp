#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
#define f(i,n) for(int i = 0; i < n; i++){cin>>a[i];}
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        ll n;
        cin>>n;

        vll a(n);
        f(i,n);

        vll bit(32, 0);

        for(int i = 0; i < n; i++){
            ll curr = a[i];
            for(int j=0; j<=31; j++){

                if(curr&(1<<j))      // 1<<j == 1*(2^j)
                    bit[j]++;
            }
        }
        ll ans=0;
        for(int p=31; p>=0; p--){
            if(bit[p]>=2)
                ans += (1<<p);        // ans+= 1*(2^p)
        }
        cout<<ans<<"\n";
    }
 
    return 0;
}