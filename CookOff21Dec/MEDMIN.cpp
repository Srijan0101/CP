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

        vll a(n);
        for(int i = 0; i < n; i++)cin>>a[i];

        sort(a.begin(), a.end());
        cout<<a[n/2]-a[n/2-1]<<"\n";
    }
 
    return 0;
}