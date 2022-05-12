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

        ll n, k;
        cin>>n>>k;

        vll a(n);
        for(ll i=0;i<n;i++){

            cin>>a[i];
        }
        sort(a.begin(), a.end());

        ll sum = 0;
        ll items = 0;

        ll i=0;
        while(sum<=k && i<n){

            sum+=a[i];
            i++;
            items++;
        }
        // cout<<sum<<" : "<<i<<endl;

        ll end_item = a[i-1];
        // cout<<end_item<<endl;
        if(sum>k){
            sum -= end_item;
            ll last = end_item/2;
            if(end_item%2!=0) last++;
            // cout<<sum<<endl;
            if((sum + last)>k) items--;
            // cout<<i<<" : "<<(sum+last)<<endl;
        }
        cout<<items<<"\n";
    }
 
    return 0;
}