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

        string s;
        cin>>s;

        int cl = 0, cr = 0, i = 0, j = 0, f = 0;

        while(i<n && j<n){
                
             if(s[i]=='L')cl++;
             if(s[j]=='R')cr++;

             if(abs(cl-cr)==2){
                     f++;
                     break;
             }
             else if(cl-cr>2 || )i++;
             else if(cr-cl>2)j++;                          
        }

        cout<<i<<"  "<<j<<endl;
        // cout<<cl<<"  "<<cr<<endl;

        // if(f)cout<<"YES\n";
        // else cout<<"NO\n";
    }
 
    return 0;
}