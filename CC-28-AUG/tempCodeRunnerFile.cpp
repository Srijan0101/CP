#include<bits/stdc++.h>
#define ll long long 
#define int long long 
#define vi vector<int> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n, wi, wj;
        cin>>n;

        set<int> s;
        for(int i = 1; i <= n; i++){

            cin>>wi;
            s.insert(wi-i);
        }

        if(s.size()==1)cout<<n<<endl;
        else cout<<1<<endl;

    }
 
    return 0;
}