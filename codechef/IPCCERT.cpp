#include <bits/stdc++.h>
using namespace std;

#define ll long long


void solution(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> arr(k+1);
    ll c= 0;
    for(ll i=0;i<n;++i){
        for(auto &x: arr)
            cin>>x;
        ll sum = 0;
        for(ll i=0;i<k;++i)
            sum += arr[i];
        if(sum >= m && arr[k] <= 10)
            c++;
    }
    cout<<c<<'\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cerr.tie(0);
    solution();
    return 0;
}