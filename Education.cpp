#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){

        int n, c;
        cin>>n>>c;
        int a[n];
        int b[n-1];

        for(int i = 0; i < n; i++)cin>>a[i];
        for(int i = 0; i < n-1; i++)cin>>b[i];

        int d = 0, t = 0;

        int i = 0;
        while(1){
            
            t +=a[i];
            
            if(t >= b[i]){
                
                t -= b[i];
                i++;
                d++;
            }

            if(i == n-1){
                t-=b[n-2];
            }
            
            if(t >= c){
                
                break;
            }

            
            d++;
        }

        cout<<d<<endl;

    }
 
    

    return 0;
}