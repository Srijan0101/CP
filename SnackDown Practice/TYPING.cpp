#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin>>tc;
    while(tc--){

        int n;
        cin>>n;

        unordered_map<string, int> m;

        int t = 0;
        while(n--){

            string s;
            cin>>s;

            auto it = m.find(s);
            if(it!=m.end()){
                t += (it->second)/2;
            }
            else{
                int c = 0;

                c += 2;
                for(int i = 1; i < s.size(); i++){

                    if(s[i]=='d' || s[i]=='f'){
                        
                        if(s[i-1]=='j' || s[i-1]=='k')c+=2;
                        else c+=4;

                        // cout<<s[i]<<endl;
                    }
                    else if(s[i]=='k' || s[i]=='j'){

                        if(s[i-1]=='d' || s[i-1]=='f')c+=2;
                        else c+=4;

                    }

                }
                t += c;
                m.insert({s, c});
            }

        }
        cout<<t<<"\n";
    }
 
    return 0;
}