#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

int dp[100005];
vector<int> adj[100005];
bool visited[100005];

void visit(int vertex){

    visited[vertex] = 1;
    dp[vertex] = 0;
    for(int child : adj[vertex]){

        if(!visited[child]) visit(child);

        dp[vertex] = max(dp[vertex], 1+dp[child]);
    }
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin>>n>>m;

    for(int i = 1; i <= m; i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
    }

    for(int i = 1; i <= n; i++){
        if(!visited[i]) visit(i);
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        ans = max(ans, dp[i]);
    }

    cout<<ans;
 
    return 0;
}