#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int> 
#define vll vector<long long> 
using namespace std;

int a[100005][4];       // a[day][task]
int dp[100005][4];
int n;

int func(int day, int flag){

    if(day==n)return 0;

    if(dp[day][flag]!=-1)return dp[day][flag];

    int maxi = 0;

    // Performed no task on curr day
    if(flag==0){
        maxi = max(maxi, a[day][1] + func(day+1, 1));
        maxi = max(maxi, a[day][2] + func(day+1, 2));
        maxi = max(maxi, a[day][3] + func(day+1, 3));
    }
    // Performed 1st task on curr day
    else if(flag==1){
        maxi = max(maxi, a[day][2] + func(day+1, 2));
        maxi = max(maxi, a[day][3] + func(day+1, 3));
    }
    // Performed 2nd task on curr day
    else if(flag==2){
        maxi = max(maxi, a[day][1] + func(day+1, 1));
        maxi = max(maxi, a[day][3] + func(day+1, 3));
    }
    // Performed 3rd task on curr day
    else{
        maxi = max(maxi, a[day][1] + func(day+1, 1));
        maxi = max(maxi, a[day][2] + func(day+1, 2));
    }

    return dp[day][flag] = maxi;
}
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp, -1, sizeof dp);

    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 1; j<=3; j++){
            cin>>a[i][j];
        }
    }

    cout<<func(0, 0);
 
    return 0;
}