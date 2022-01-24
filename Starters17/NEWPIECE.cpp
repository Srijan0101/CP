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

        int a, b, p, q;
        cin>>a>>b>>p>>q;

        int l = (a+b)%2;
        int t = (p+q)%2;

        if(a==p && b==q)cout<<"0";
        else if(l==t)cout<<"2";
        else cout<<"1";

        cout<<"\n";
    }
 
    return 0;
}