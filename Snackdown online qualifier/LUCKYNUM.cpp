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

        vi a(5);
        int r0 = 0, r1 = 0, r2 = 0;
        for(int i = 0; i < 5; i++){
            cin>>a[i];
            if(a[i]==0)r0++;
            else if(a[i] == 1)r1++;
            else r2++;
        }

        if(r1==r2)cout<<"DRAW\n";
        else if(r1>r2)cout<<"INDIA\n";
        else cout<<"ENGLAND\n";
        
    }
 
    return 0;
}