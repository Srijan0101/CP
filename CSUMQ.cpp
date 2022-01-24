#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;

    int arr[n];
    for(int i = 0; i < n; i++)cin>>arr[i];

    int p[n];
    
    int q; cin>>q;
    while(q--){

        int i, j;
        cin>>i>>j;

        p[i] = arr[i];
        for(int k = i+1; k <= j; k++)p[k] = p[k-1] + arr[k];

        cout<<p[j]<<endl;
    }    
 
    return 0;
}
