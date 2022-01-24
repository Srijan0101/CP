#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
int len, start;  // len: length of max subsequence, start= starting no. of the subsequence
map<int, int> dp;
vi ans;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  // size of array
    cin>>n;

    vi a(n);
    for(int i = 0; i < n; i++)cin>>a[i];

    for(int i = 0; i < n; i++){
        int x = a[i];

        // Base Case
        dp[x] = max(dp[x], 1);

        // Recursive Case
        dp[x] = max(dp[x], dp[x-1]+1);

        // If we have found a larger consecutive subsequence
        if(dp[x]>len){
            len=dp[x];
            start = x - dp[x]+1;
        }
    }

    for(int i = 0; i < n; i++){
        if(a[i]==start){
            ans.push_back(i+1);
            start++;
        }
    }

    cout<<len<<"\n";
    for(auto it: ans)cout<<it<<" ";
 
    return 0;
}