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

        ll n, v;
        cin>>n>>v;

        ll minc, maxc, mc;

        if(v==1){
            minc = (n*(n+1))/2;
            minc -= n;
            maxc = minc;

        }

        else{

            if(n<v){
                minc = n-1;
            }

            else{
                mc = 1*v;
                minc = mc;
            
                ll s = n-v;

                ll mc = s*(s+1)/2 -1;
                minc = mc+v;
            }

            maxc = (n*(n+1))/2;
            maxc-=n;

        }
            cout<<maxc<<" "<<minc<<"\n";

    }
 
    return 0;
}