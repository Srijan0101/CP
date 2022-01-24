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

        int n, k; cin>>n>>k;
        vi arr(n);
        vi time(n);

        for(int i = 0; i<n; i++)cin>>arr[i];

        for(int i=0; i<n; i++)time[i] = 0;

        ll left = -1;

        // finding the leftmost arr[i]>0
        for(int i = 0; i<n; i++){
            if(arr[i]>0){
                left = i;
                break;
            }
        }

        // finding the rightmost arr[i]>0
        ll right = -1;
        for(int i = n-1; i>=0; i--){
            if(arr[i]>0){
                right = i;
                break;
            }
        }

        // edge case: ALL 0
        if(left==-1){
            cout<<"0\n";
            continue;
        }

        int curr = 1;
        for(int i = (left+1)%n; i!=left; i=(i+1)%n){
            if(arr[i]>0)curr = 0;
            else time[i] = curr;
            curr++;
        }

        curr = 1;

        for(int i = (right-1+n)%n; i!=right; i=(i-1+n)%n){
            if(arr[i]>0)curr = 0;
            else time[i] = min(time[i], curr);
            curr++;
        }

        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            sum += max(0, k-time[i])*2;
        }

        cout<<sum<<"\n";
    }
 
    return 0;
}




