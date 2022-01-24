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

        ll x, y;
        cin>>x>>y;

        ll m = 0;

        if(x==y)cout<<"0";
        
        else if(x<y){

            if((y-x)%2!=0){

                x--;
                m++;
            }
            
            m+=(y-x)/2;

            
        }
        else{
            
            m+=x-y;

        }

        cout<<m;
        cout<<"\n";
    }
 
    return 0;
}