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

        ll n;
        cin>>n;

        vll a(n);
        vll o;
        vll e;
        vll ans;
        for(int i = 0; i < n; i++)cin>>a[i];

        int oc = 0, ec = 0;
        for(int i = 0; i < n; i++){

            if(a[i]%2==0){

                e.push_back(a[i]);
                ec++;
            }
            else{

                o.push_back(a[i]);
                oc++;
            }
        }

        if(oc==0 || ec==0)cout<<"-1";

        else if(oc==ec){

            int j = 0, k = 0;
            for(int i = 0; i < n; i++){

                if(i%2==0)ans.push_back(o[j++]);
                else ans.push_back(e[k++]);
            }

        }
        else{

            int j = 0, k = 0;
            while(j<ec){
                ans.push_back(e[j++]);
            }

            while(k<oc){
                ans.push_back(o[k++]);
            }


        }

        if(oc!=0 && ec!=0){
        for(int i = 0; i < n; i++)cout<<ans[i]<<" ";

        }
        cout<<"\n";
    }
 
    return 0;
}