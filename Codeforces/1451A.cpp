#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solution(){
    ll n;
    cin>>n;
    ll ans = 0;
    if(n == 1)
        ans = 0;
    else{
        if(n%2 == 1)
            ans = 1,n--;
        if(n > 2)
            ans += 2;
        else
            ans += 1;
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