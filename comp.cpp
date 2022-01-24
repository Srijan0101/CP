#include<bits/stdc++.h>
// #define ll long long int;
using namespace std;
 
int main(){
 
    int t;
    cin>>t;

    while(t--){

        long long n, calc = 1, r;
        cin>>n;

        for(int i = 0; i <= n; i++){

            calc &= n-i;

            if(calc == 0){

                r = n-i;    
                break;
            }
        }
        cout<<r<<endl;


    }
 
    return 0;
}