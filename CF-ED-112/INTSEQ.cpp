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

        if(n%2!=0) cout<<"0\n";
        else{

            int len = 0;
            int psum = n/2;

            // cout<<psum<<endl;
            while(psum%2==0){

                // cout<<psum<<endl;
                psum += (n-psum)/2;
                len++;
            }
            cout<<len+1<<"\n";
        }
    }
 
    return 0;
}