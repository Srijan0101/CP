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

        int n;
        cin>>n;
        string s; cin>>s;

        int fs = 0;
        for(int i = 0; i < n-1; i++)fs += abs(s[i+1]-s[i]);

        int rem = n-1 - fs;

        if(rem%3==0)cout<<"UTTU";
        else cout<<"JJ";
        cout<<"\n";

    }
 
    return 0;
}