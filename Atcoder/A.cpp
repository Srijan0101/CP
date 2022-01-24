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

        int n, k;
        cin>>n>>k;

        vi a(n), b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];

        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++){

            v[i].first = a[i];
            v[i].second = b[i];
        }
        sort(v.begin(), v.end());

        int res = k;
        for(int i = 0; i < n; i++){

            if(v[i].first<=res) res+= v[i].second;
            else break;
        }
        cout<<res<<"\n";
    }
 
    return 0;
}