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

        int n, a;
        cin>>n>>a;

        int e = 0, o = 0, i = 0;

        if(a%2!=0){
            if(n%2==0)e++;
            else o++;
        }
        else {

            if(n==1)e++;
            else i++;
        }

        if(e)cout<<"EVEN";
        else if(o)cout<<"ODD";
        else if(i)cout<<"IMPOSSIBLE";

        cout<<"\n";

    }
 
    return 0;
}