#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        int sum = 0, l = 0;

        for(int i = 1; i <= n; i++){
            
            sum += i;
            l++;
        }

        if(sum%2!=0)l--;
        cout<<l<<endl;

        // cout<<sum<<endl;

    }
 
    return 0;
}