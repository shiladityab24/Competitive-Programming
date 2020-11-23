#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution(){
    string a,b;
    cin>>a;
    cin>>b;
    ll ans = 0;
    ll n = a.size();
    for(ll i=0;i <n;i+=2){
        if(a[i] == b[i])
            continue;
        while(i < n && a[i] != b[i])
            i+=2;
        ans++;
    }
    for(ll i=1;i <n;i+=2){
        if(a[i] == b[i])
            continue;
        while(i < n && a[i] != b[i])
            i+=2;
        ans++;
    }
    cout<<ans<<'\n';
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