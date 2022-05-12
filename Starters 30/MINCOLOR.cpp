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

        ll n, m, x1, y1, x2, y2;
        cin>>n>>m>>x1>>y1>>x2>>y2;

        ll c;
        ll dist = abs(x1-x2) + abs(y1-y2);

        ll ans[n][m];

        if(dist%2!=0) c = 2;
        else c = 3;

        ans[x1-1][y1-1] = 1;
        ans[x2-1][y2-1] = 2;
            
        int f = 0;
        if((x1%2==0&&y1%2==0) || (x1%2!=0&&y1%2!=0)) f++;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){

                if((i%2==0&&j%2==0) || (i%2!=0&&j%2!=0)){

                    if(f) ans[i][j] = 1;
                    else ans[i][j] = 2;
                }
                else{
                    if(f) ans[i][j] = 2;
                    else ans[i][j] = 1;
                }
            }
        }

        if(c==3){

            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(ans[i][j]==2){
                        ans[i][j]=3;
                    }
                }
            }  
            ans[x2-1][y2-1] = 2;          
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }        
    }
    return 0;
}