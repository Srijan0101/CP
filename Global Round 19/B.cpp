#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

void func(vector<ll> &arr, int start, int end, int &c0, int &c1)
{      
    if (end == arr.size()) return;
       
    else if (start > end)
        func(arr, 0, end + 1, c0, c1);
           
    else
    {
        for (int i = start; i < end; i++){
            if(arr[i]==0) c0++;
            else c1++;
        }
         
        if(arr[end]==0) c0++;
        else c1++;
        func(arr, start + 1, end, c0, c1);
    }
     
    return;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        ll n;
        cin>>n;

        vll a(n);
        for(ll i = 0; i < n; i++)cin>>a[i];

        int c0 = 0, c1 = 0;
        func(a, 0, 0, c0, c1);

        cout<<(c1 + 2*c0)<<endl;
    }
 
    return 0;
}