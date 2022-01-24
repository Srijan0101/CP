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

        int n, k;
        cin>>n>>k;

        char a[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = '.';
            }
            
        }
        
        if((n%2!=0 && k<=(n/2+1)) || (n%2==0 && k<(n/2+1))){

            int f = 1;
            int r = k;

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if(f%2!=0 && i==j && r>0){
                        a[i][j] = 'R';
                        // cout<<"r: "<<r<<endl;
                        r--;
                        break;
                    }
                }
                f++;                
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout<<a[i][j];
                }
                cout<<"\n";                              
            }

        }
        else cout<<"-1\n";

    }
 
    return 0;
}