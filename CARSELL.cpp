#include<bits/stdc++.h>
#define ll long long 
#define mod 1000000000+7
using namespace std;
 
static bool cmp(int a, int b){

    return a > b;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        vector<int> p(n);

        for(int i = 0; i < n; i++)
            cin>>p[i];

        sort(p.begin(), p.end(), cmp);

        int profit = 0;
        for(int i = 0; i < n; i++){

            profit += max(0, (p[i]-i));
            profit %= mod;
        }
        cout<<profit<<endl;
    }
 
    return 0;
}