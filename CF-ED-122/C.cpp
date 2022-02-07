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

        ll hc, dc, hm, dm, k, w, a;
        cin>>hc>>dc>>hm>>dm>>k>>w>>a;

        ll f = 0;
        for(int i = 0; i<=k; i++){

            ll heM = hm;
            ll newhc = hc + a*i;
            ll newdc = dc + w*(k-i);

            ll mc = (heM/newdc), mm = (newhc/dm);
            if(heM%newdc!=0)mc++; 
            if(newhc%dm!=0)mm++; 
            
            // cout<<i<<endl;
            // cout<<mc<<" "<<mm;

            if(mc<=mm){
                f++;
                break;
            }
        }

        if(f) cout<<"YES\n";
        else cout<<"NO\n";

    }
 
    return 0;
}