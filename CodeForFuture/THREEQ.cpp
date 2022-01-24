#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int a1, a2, a3, b1, b2, b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;

        int ques = a1+a2+a3;
        int ans = b1+b2+b3;

        if(ques == ans)cout<<"Pass\n";

        else cout<<"Fail\n";
    }
 
    return 0;
}