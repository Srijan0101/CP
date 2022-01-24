#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

int minf(vector<ll> &a){
    return *min_element(a.begin(), a.end());
}

int maxf(vector<ll> &a){
    return *max_element(a.begin(), a.end());
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        ll n, sum=0;
        cin>>n;

        vll a(n);
        for(int i = 0; i < n; i++){
            cin>>a[i];
            sum+=a[i];
        }

        cout<<ceil((double)sum/n)-(sum/n)<<"\n";
    }
 
    return 0;
}