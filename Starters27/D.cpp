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

        string s;
        cin>>s;

        int n = s.size();
        string t = s;
        reverse(t.begin(), t.end());

        int len=0;
        int i=0, j=0;
        while(i<n && j<n){

            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{

                while(i<n && s[i]!=t[j]){
                    i++;
                    len++;
                }
            }
        }
        cout<<len<<"\n";
    }
 
    return 0;
}