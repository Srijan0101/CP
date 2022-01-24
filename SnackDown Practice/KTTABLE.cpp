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
        
        vll b(n);
        for(int i = 0; i < n; i++)cin>>b[i];

        int c = 0;
        if(b[0]<=a[0])c++;

        for(int i=1; i<n; i++){

            if(b[i]<=a[i]-a[i-1])c++;
        }

        cout<<c<<"\n";
    }
 
    return 0;
}