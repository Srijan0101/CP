#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n;cin>>n;
        vi a(n);
        for(int i = 0; i < n; i++)cin>>a[i];
        
        int f = 0;
        if(a[0]==1 && n%2!=0 && a[(n-1)/2]==(n+1)/2){

            for(int i = 0; i < (n-1)/2; i++){

                if(a[i]!=a[n-i-1]){
                    f++;
                    cout<<"no\n";
                    break;
                }
            }

            if(f==0)cout<<"yes\n";
        }
        else cout<<"no\n";
    }
 
    return 0;
}