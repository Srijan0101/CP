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

        int m, x;
        cin>>m>>x;

        vi ans(x+1);
        ans[1] = 1;

        int temp;
        for(int i = 2; i <= x; i++){

            if(m%i!=0) temp = m%i;
            
            else temp = x;

            if(temp > ans[i-1])ans[i] = ans[i-1];

            else ans[i] = ans[i-1]+1;
        }

        for(int i = 1; i <= x; i++) cout<<ans[i]<<" ";
        
        cout<<"\n";
    }
 
    return 0;
}