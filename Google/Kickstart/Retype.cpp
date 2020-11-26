#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll solution(){
	ll n,k,s;
	cin>>n>>k>>s;
	ll ans;
	ll a1 = k-1,a2= k-1;
	a1 += n+1;
	a2 +=(n-s+1)+(k-s);
	ans = min(a1,a2);
	return ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cerr.tie(0);
	ll t;
	cin>>t;
	for(ll i=1;i<=t;++i)
		cout<<"Case #"<<i<<": "<<solution()<<'\n';
	return 0;
}