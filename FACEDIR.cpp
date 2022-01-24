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

        int x; cin>>x;

        int e = 0, w = 0, n = 0, s = 0;
        for(int i = 1; i <= x; i+=4){
            if(i%x==0){
                e++;
                break;
            }}

        for(int i = 2; i <= x; i+=4){
            if(i%x==0){
                s++;
                break;
            }}

        for(int i = 3; i <= x; i+=4){
            if(i%x==0){
                w++;
                break;
            }}

        for(int i = 4; i <= x; i+=4){
            if(i%x==0){
                n++;
                break;
            }}
        
        if(n)cout<<"North\n";
        else if(s)cout<<"South\n";
        else if(w)cout<<"West\n";
        else if(e)cout<<"East\n";

    }
 
    return 0;
}