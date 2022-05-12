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

        int c0 = 0;
        map<int, int> m;
        for(int i = 0; i < 2*n; i++){

            int x;
            cin>>x;
            if(x==0) c0++;

            m[x]++;
        }

        if(!c0) cout<<"YES\n";
        else{

            int f = 0;
            for(auto it : m){

                if(it.second%2!=0){
                    f++;
                    break;
                }
            }
            if(f) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
 
    return 0;
}