#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solution(){
    ll n,k;
    string a,b;
    cin>>n>>k;
    cin>>a>>b;
    vector<ll> from(27,0),to(27,0);
    for(auto & x: a)
        from[x - 'a']++;
    for(auto & x: b)
        to[x - 'a']++;

    bool bad = false;
    for(ll i=0;i< 26;++i){
        if(from[i] < to[i] || (from[i] -= to[i])% k)
            bad = true;
        from[i+1] += from[i];
    }
    if(bad)
        cout<<"No"<<'\n';
    else
        cout<<"Yes"<<'\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cerr.tie(0);
    ll t;
    cin>>t;
    while(t--)
        solution();
    return 0;
}