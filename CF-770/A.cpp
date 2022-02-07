#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

bool is_pal(string s){

    string t = s;
    reverse(t.begin(), t.end());

    if(t==s)return true;
    return false;
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        if(k==0) cout<<"1\n";
        else{

            if(is_pal(s)==true){
                cout<<"1\n";
            }
            else cout<<"2\n";
        }

    }
 
    return 0;
}