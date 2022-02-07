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

        string s;
        cin>>s;

        int n = s.size();
        int c0 = 0, c1 = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')c0++;
            else c1++;
        }

        if(n<=2) cout<<"0\n";
        else if(c1==c0){
            
            cout<<c1-1<<"\n";
        }

        else{
            int ans = min(c0, c1);
            cout<<ans<<"\n"; 
        } 

    }
 
    return 0;
}