#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solution(){
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--){
        ll l,r;
        cin>>l>>r;
        --l,--r;
        bool bad = true;
        for(ll i=0;i <l and bad;++i)
            if(s[i] == s[l])
                bad = false;
        for(ll i= r+1;i<n and bad;++i)
            if(s[i] == s[r])
                bad = false;
        if(bad)
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';
    }
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