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

        char a[n+1][n+1];

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){

                a[i][j]='Q';
                
                if(j==n+1-i){

                    if(n%2!=0){
                        if((j==(n+1)/2-1) || (j==(n+1)/2+1))a[i][j]='.';
                    }
                    else{
                        if((j==n/2+1) || (j==n/2-1))a[i][j]='.';
                    }
                    
                }

                else a[i][j] = '.';
            }
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){

                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }



    }
 
    return 0;
}