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

        ll n, s;
        cin>>n>>s;

        ll l = 0, r = n;
        vll a(n+1);

        for(int i = 0; i < n+1; i++)a[i] = i;
        while(l<=r){

            if(a[l]+a[r]==s){
                cout<<r-l<<"\n";
                break;
            }
            else if(a[l]+a[r]>s)r--;

            else l++;
        }

    }
 
    return 0;
}   