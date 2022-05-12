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

        set<int> sx;
        set<int> sy;

        for(int i = 0; i < n; i++){
            int x, y;
            cin>>x>>y;

            sx.insert(x);
            sy.insert(y);
        }

        cout<<sx.size()+sy.size()<<"\n";
    }
 
    return 0;
}