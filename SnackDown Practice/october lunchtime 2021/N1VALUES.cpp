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
        ll i, s = 0;

        if(n==1)cout<<"1 1\n";

        else{

            for(i = 1; i <= n-1; i++){

                cout<<i<<" ";
                s+=i;
            }
            i--;

            s+=i;

            ll sum = pow(2,n);
            cout<<i<<" "<<sum-s;        

            // cout<<"  sum: "<<sc;

            cout<<"\n";
        }
    }
 
    return 0;
}