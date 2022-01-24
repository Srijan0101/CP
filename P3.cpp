#include<bits/stdc++.h>
#define vi vector<int> 
#define vvi vector<vi> 
#define vb vector<bool> 
#define vvb vector<vb> 
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n;
        cin>>n;

        vvi ra(n ,vi(2));
        vvb exists(n+1, vb(n+1, false));

        for(int i=0; i<n; i++){
            cin>>ra[i][0]>>ra[i][1];
            int l = ra[i][0];
            int r = ra[i][1];
            exists[l][r]=true;
        }

        for (int i = 0;i<n;i++){
            int l = ra[i][0];
            int r = ra[i][1];
            for (int d = l;d <= r;d++){
                int l1 = l;
                int r1 = d - 1;
                int l2 = d + 1;
                int r2 = r;
                if ((l1 > r1 or exists[l1][r1]) and (l2 > r2 or exists[l2][r2])){
                    cout<<l<<" "<<r<<" "<<d<<endl;
                    break;
                }
            }
        } 
        cout<<"\n";
    }
 
    return 0;
}