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
        vector<vector<int>> v(n, vector<int>(n, 1));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i==j)v[i][j] = -1;
            }
        }

        if(n==2){

            cout<<"-1 -1\n-1 -1\n";

        }

        else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    }
 
    return 0;
}