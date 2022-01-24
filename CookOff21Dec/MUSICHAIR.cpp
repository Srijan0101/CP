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

        ll n, c=0;
        cin>>n;

        for(int i = 1; i < n; i++){
            if((n-1)%i==0)c++;
        }

        cout<<c<<"\n";
    }
 
    return 0;
}