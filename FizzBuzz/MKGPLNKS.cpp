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

        ll n;
        cin>>n;

        string s;
        cin>>s;

        int f = 0;
        char w = 'W', b = 'B';
        for(int i = 1; i < n; i++){
            if(s[0]=='W'){
                
                if(s[i]!=w){
                    f++;
                    w = s[i];
                }
            }

            else if(s[0]=='B'){
                
                if(s[i]!=b){
                    f++;
                    b = s[i];
                }
            }
        }

        if(f==0)cout<<"0\n";
        else{
            if(f%2==0)cout<<f/2;
            else cout<<f/2+1;
            cout<<"\n";
        }

    }
 
    return 0;
}