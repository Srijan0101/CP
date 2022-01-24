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
        deque<int> d;

        for(int i = 0; i < n; i++){
            int a; cin>>a;
            if(d.size()==0 || d.front()>a)
                d.push_front(a);
            else d.push_back(a);
        }

        for(auto x : d){
            cout<<x<<" ";
        }
        cout<<"\n";
    }
 
    return 0;
}