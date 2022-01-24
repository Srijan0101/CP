#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

int solve(string s, string t){
    
    int n = s.size();
    int dp[n+1][n+1];

    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < n+1; j++){

            if(i==0 || j==0) dp[i][j] = 0;
            else if(s[i-1]==t[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[n][n];
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    string t = s;
    reverse(t.begin(), t.end());

    cout<<solve(s, t);
 
    return 0;
}