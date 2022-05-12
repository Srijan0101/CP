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

        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < 3; i++){

            sum1 += (s[i]-'0');
        }

        for(int i = 3; i < 6; i++){

            sum2 += (s[i]-'0');
        }

        if(sum1==sum2) cout<<"YES\n";
        else cout<<"NO\n";
    }
 
    return 0;
}