#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)cin>>a[i];
    
    sort(a, a+n);
    
    int l = 0, r = n-1, c=1, sum = 0;
    while(l<r){

        sum += a[r]-a[l];

        if(c%2==0)r--;
        else l++;

        c++;
    }
    sum += a[l]-a[0];
    cout<<sum;
    return 0;
}