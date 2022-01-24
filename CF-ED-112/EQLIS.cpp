#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

void solve(vector<int> a, int n){

    int t = n/2;
    int k = n/2;
    for(int i = n-1;; i--){

        cout<<a[i]<<" ";
        k--;
        if(k<=0)break;
    }

    // cout<<n-t<<endl;
    for(int i = 0; i<n-t; i++){

        cout<<a[i]<<" ";
    }
}

int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){

        int n;
        cin>>n;

        if(n==2)cout<<"NO\n";

        else{

            cout<<"YES\n";

            if(n%2!=0){
                vi a(n);
                for(int i = 0; i < n; i++)a[i]=i+1;
                solve(a, n);
            }
            else{

                int s = n/2;
                vi a(s);
                vi b(s);

                for(int i = 0; i < s; i++)a[i]=i+1;
                for(int i = 0; i < s; i++)b[i]=i+s+1;
                solve(a,s);
                solve(b,s);                
            }

            cout<<"\n";
        }

    }
 
    return 0;
}