#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> pre(1e6+1,0);

void comp(){
    pre[1]=1;
    pre[2]=2;
    for(ll i=3;i<=1e6;i++){
        pre[i]=pre[i-1]+i-1;
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    comp();

    ll t;
    cin>>t;

    while(t--){
        ll k;
        cin>>k;
        ll pos=lower_bound(pre.begin(),pre.end(),k+1)-pre.begin()-1;

        cout<<2*pos<<"\n";
    }

    return 0;
}