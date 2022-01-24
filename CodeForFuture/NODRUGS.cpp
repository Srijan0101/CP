#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n, k, l;
        vector<int> v;

        for(int i = 0; i < n; i++)cin>>v[i];
        a[n] += k*(l-1);

        int flag = 0;

        for(int i = 0; i < n-1; i++){

            if(a[i] >= a[n])flag++;
        }

        if(flag)cout<<"No\n";
        else cout<<"Yes\n";

    }
 
    return 0;
}