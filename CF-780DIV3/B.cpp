#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    ll cnt = 1;
    while(t--){

        vll c;
        vll m;
        vll y;
        vll k;

        for(ll i=0; i<3; i++){

            for(ll j = 0; j<4; j++){
                
                ll x;
                cin>>x;

                if(j==0) c.push_back(x); 
                if(j==1) m.push_back(x); 
                if(j==2) y.push_back(x); 
                if(j==3) k.push_back(x); 
            }
        }
        
        ll c1 = *min_element(c.begin(), c.end());
        ll c2 = *min_element(m.begin(), m.end());
        ll c3 = *min_element(y.begin(), y.end());
        ll c4 = *min_element(k.begin(), k.end());

        cout<<"Case #"<<cnt<<": ";

        if(c1+c2+c3+c4<1e6) cout<<"IMPOSSIBLE\n";
        else{

            vll res;
            res.push_back(c1);
            res.push_back(c2);
            res.push_back(c3);
            res.push_back(c4);

            ll sum = 0, i;

            for(i=0;i<4;i++){
                
                if(sum+res[i]>1e6) break;

                else cout<<res[i]<<" ";
                sum += res[i];
            }

            // cout<<i<<endl;

            if(sum<1e6){

                cout<<1e6-sum<<" ";
                i++;
            }

            while(i<4){
                cout<<0<<" ";
                i++;
            } 

            cout<<"\n";

        }

        cnt++;
    }
 
    return 0;
}