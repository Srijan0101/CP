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

        string s;
        cin>>s;

        int d; cin>>d;

        string t = s;
        reverse(t.begin(), t.end());

        int n = t.size();
        int num = stoi(t);

        for(int i = n-1; i > 0; i++){

            if(t[i]==d){

            }
        }

    }
 
    return 0;
}