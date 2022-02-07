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

        vector<vi> a(n*k);

        if(k==1){

            cout<<"YES\n";
            for(int i = 0; i < n; i++){
                cout<<i+1<<"\n";
            }

        }
        else{

            if(n%2!=0) cout<<"NO\n";
            else{

                cout<<"YES\n";
                int e = 2, o = 1;
                for(int i = 0; i < n; i++){
                    for(int j = 0; j < k; j++){

                        if(i%2==0){
                            cout<<o<<" ";
                            o+=2;
                        }
                        else{
                            cout<<e<<" ";
                            e+=2;
                        }
                    }
                    cout<<"\n";
                }
            }
        }

    }
 
    return 0;
}