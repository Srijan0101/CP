#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int n, t;
    cin>>n>>t;

    int a[n];
    for(int i = 0; i < n; i++)cin>>a[i];

    int l = 0, r = 1, maxE, c = 0;
        int p;

    // cout<<a[0]<<endl;
    while(l<r && r<n){

        
        maxE = -10000;
    
        
        for(r=l+1; r < n; r++){

            // cout<<r<<endl;

            // cout<<a[0]<<" ";
            if(a[r]>maxE){
                maxE = a[r];
                p = r;
                
            }
        }

        if(a[p]>a[l]){
            swap(a[l], a[p]);
            c++;
        }

            l++;
        if(c == t)break;
    }

    for (int i = 0; i < n; i++)cout<<a[i]<<" ";
    
    
 
    return 0;
}