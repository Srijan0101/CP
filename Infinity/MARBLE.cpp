#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
set<char> v = {'a', 'e', 'i', 'o', 'u'};
bool is_vowel(char c){
    return v.count(c);
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        string s, p;
        cin>>s>>p;

        int ans = INT_MAX;
        
        for(char c = 'a'; c<='z'; c++){
            int curr = 0;
            for(int i = 0; i < n; i++){
                char si = (s[i]=='?' ? c : s[i]);
                char pi = (p[i]=='?' ? c : p[i]);
                if(si==pi)continue;

                curr+=(is_vowel(si)!=is_vowel(pi) ? 1 : 2);
            }
            ans = min(ans, curr);
        }
        cout<<ans<<"\n";
    }
 
    return 0;
}