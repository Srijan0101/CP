#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    int cnt = 1;
    while(t--){

        int r,c;
        cin>>r>>c;

        char a[2*r+1][2*c+1];


        for(int i=0;i<2*r+1;i++){

            for(int j = 0; j < 2*c+1; j++){

                if(i%2==0){
                    if(j%2==0){
                        a[i][j] = '+';
                    }
                    else a[i][j] = '-';
                }
                else{
                    if(j%2==0){
                        a[i][j] = '|';
                    }
                    else a[i][j] = '.';
                }
            }
        }

        a[0][0] = '.';
        a[0][1] = '.';
        a[1][0] = '.';
        a[1][1] = '.';

        cout<<"Case #"<<cnt<<": \n";

        for(int i = 0; i < 2*r+1; i++){
            for(int j = 0; j < 2*c+1; j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }

        cnt++;
    }
 
    return 0;
}