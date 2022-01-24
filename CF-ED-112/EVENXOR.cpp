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

        int n;
        cin>>n;

        vi a(n);

        int add = 0, num=1;
        while(add!=n){

            int i = num;
            int c = 0;
            while(i!=0){
                if(i&1==1)c++;
                i = i>>1;
            }
            if(c%2==0){
                a[add]=num;
                add++;
            }
            num++;
        }

        for(int i = 0; i < n; i++)cout<<a[i]<<" ";
        cout<<"\n";
    }
 
    return 0;
}