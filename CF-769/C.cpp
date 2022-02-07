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

        int a, b;
        cin>>a>>b;

        int ans = b-a;
        for(int i=0; i<(b-a); i++){

            if(((a+i)|b) == b){
                ans = min(ans, i+1);
                break;
            }
        }

        for(int i=0;;i++){

            if((a|(b+i)) == b+i){
                ans = min(ans, i+1);
                break;
            }
        }
        cout<<ans<<"\n";
    }
 
    return 0;
}