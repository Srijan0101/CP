#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

int dig(int number) {
   return int(log10(number) + 1);
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n;
        cin>>n;

        if(n%7==0) cout<<n<<"\n";

        else{
            
            int p = 1, i=1;
            while(p<n){
 
                p=7*i;
                i++;
            }

            int res1 = p-7, res2 = p;

            int u1 = res1/10, u2 = res2/10;

            int u = n/10;

            if(u==u1) cout<<res1<<"\n";
            else if(u==u2) cout<<res2<<"\n";

        }       

    }
 
    return 0;
}