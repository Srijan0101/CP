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

		ll n;
		cin>>n;

		vll a(n);
		vll b(n);

		for(ll i = 0; i < n; i++) cin>>a[i];
		for(ll i = 0; i < n; i++) cin>>b[i];

		map<ll, ll> m;
		map<ll, ll> m1;

		ll p = 0, p1 = 0;
		for(ll i = 0; i < n; i++){

			m1[a[i]]++;
		}
		for(ll i = n-1; i >= 0; i--){

			p+=min(m[a[i]], m1[a[i]]);
			m1[a[i]]--;
			m[b[i]]++;

		}
		cout<<p<<"\n";
	}
 
	return 0;
}