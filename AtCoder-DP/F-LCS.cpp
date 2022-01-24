#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
string lcs(string &s, string &t, int n, int m){

    int dp[n+1][m+1];

    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < m+1; j++){
            if(i==0 || j==0)
                dp[i][j] = 0;

            else if(s[i-1]==t[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }  

    int len = dp[n][m];

    string res = "";
    int i = n, j = m;
    while(i>0 && j>0){

        if(s[i-1]==t[j-1]){
            res.push_back(s[i-1]);
            i--; j--;
        }
        else{
            if(dp[i][j-1]>dp[i-1][j])j--;
            else i--;            
        } 
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin>>s>>t;

    int n = s.size(), m = t.size();

    cout<<lcs(s, t, n, m);
 
    return 0;
}