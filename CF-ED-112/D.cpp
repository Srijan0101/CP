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

        vector<int> v[10];

        int n, m;
        cin>>n>>m;

        for(int i = 0; i < n; i++){

            string s;
            cin>>s;

            for(int j = 0; j < m; j++){

                if(s[j]=='0')v[0].push_back(j);
                else if(s[j]=='1')v[1].push_back(j);
                else if(s[j]=='2')v[2].push_back(j);
                else if(s[j]=='3')v[3].push_back(j);
                else if(s[j]=='4')v[4].push_back(j);
                else if(s[j]=='5')v[5].push_back(j);
                else if(s[j]=='6')v[6].push_back(j);
                else if(s[j]=='7')v[7].push_back(j);
                else if(s[j]=='8')v[8].push_back(j);
                else v[9].push_back(j);
            }
        }

        string res;
        cin>>res;

        

}
 
    return 0;
}