#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    
    int p; cin>>p;
    vector<int> x(p);
    for(int i = 0; i < p; i++)cin>>x[i];

    int q; cin>>q;
    vector<int> y(q);
    for(int i = 0; i < q; i++)cin>>y[i];

    map<int, int> m;

    for(int i = 0; i < p; i++)m[x[i]]++;
    for(int i = 0; i < q; i++)m[y[i]]++;

    int level = 0;
    for(auto it : m){

        // cout<<level<<" "<<it.first<<endl;
        level++;
        if(it.first != level){
            level--;
            break;
        }

                
    }

    if(level == n)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
 
    return 0;
}