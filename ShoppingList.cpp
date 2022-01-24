#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, k;
    cin>>n;
    string s, s1;

    map<string, int> m;

    while(n--){

        cin>>s;
        m[s]++;
    }

    cin>>k;
    while(k--){

        cin>>s1;

        cout<<m[s1]<<endl;
    }
 
    return 0;
}