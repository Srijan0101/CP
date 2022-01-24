#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        string s;
        cin>>s;

        int c = 0, f = 0;

        for(int i = 0; i < n; i++){

            if(s[i]=='H')c++;

            else if(s[i]=='T'){
                c--;

                if(c!=0){
                    f++;
                    break;
                }
            }
        }

        if(c!=0 || f!=0)cout<<"Invalid\n";
        else cout<<"Valid\n";

    }
 
    return 0;
}