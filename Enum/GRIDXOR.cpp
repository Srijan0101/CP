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
        for(int i = 0; i < n; i++)a[i]=i+1;

        int t;

        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){
                cout<<"1 ";
            }
            cout<<"\n";
        }

    }
 
    return 0;
}