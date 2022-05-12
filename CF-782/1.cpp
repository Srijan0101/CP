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

        ll n, r, b;
        cin>>n>>r>>b;

        ll par = n/(b+1);
        if(n%(b+1)!=0) par++;

        string s = "";

        for(ll i = 0; i < n; i++){

            s+='R';
        }
        ll c = 1;
        for(ll i = 0; i < n; i++){

            if(c==par && b){
                s[i] = 'B';
                b--;
                c = 1;                
            }       
            else c++;  
        }



        cout<<s<<"\n";
    }
 
    return 0;
}