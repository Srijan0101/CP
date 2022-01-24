#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i < n; i++)cin>>arr[i];

        int l = arr[0];
        for(int i = 1; i < n; i++){

            if(l != arr[1] && l!= arr[2]){
                cout<<"1"<<endl;
                break;
            }

            if(l != arr[i]){
                cout<<i+1<<endl;
                break;
            }
        }

    }
 
    return 0;
}