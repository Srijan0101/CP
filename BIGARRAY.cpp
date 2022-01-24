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

        unsigned ll n, s;
        cin>>n>>s;

        unsigned ll sum = (n*(n+1))/2;

        if(sum<=s || sum-s>n)cout<<"-1\n";
        else cout<<sum-s<<"\n";

    }
 
    return 0;
}