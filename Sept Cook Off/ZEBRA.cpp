#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--){

        ll n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        ll cc = 0;
        for(int i = 0; i < n-1; i++){
            if(s[i]!=s[i+1])cc++;
        }

        if(cc<k)cout<<"-1\n";
        else{
            
            for(int i = n-1; i>0; i--){
                if(s[0]=='0'){
                    if(k%2==0){
                        if(s[i]=='0'){
                            cout<<i+1<<"\n";
                            break;
                        }
                        else continue;
                    }
                    else{
                        if(s[i]=='1'){
                            cout<<i+1<<"\n";
                            break;
                        }
                        else continue;
                    }
                }

                else if(s[0]=='1'){
                    if(k%2==0){
                        if(s[i]=='1'){
                            cout<<i+1<<"\n";
                            break;
                        }
                        else continue;
                    }
                    else{
                        if(s[i]=='0'){
                            cout<<i+1<<"\n";
                            break;
                        }
                        else continue;
                    }
                }
            }
        }


    }
 
    return 0;
}