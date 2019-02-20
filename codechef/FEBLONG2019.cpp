#include<bits/stdc++.h>
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (ll i=(l);i<(r);i++)
#define repd(i, l, r) for (ll i=(l);i>=(r);i--)
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define s second
#define f first
#define pii pair<ll,ll>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    fastIO
    ll t;
    cin >> t;
    while(t--){
        ll n,a,b,k;
        cin >> n >> a >> b >> k;
        ll gcd=__gcd(a, b);
        ll lcm=(a*b)/gcd;
        ll ans=(n/a) + (n/b) - (2*(n/lcm));
        if(ans >= k)
        {cout << "Win"<<endl;}
        else{cout << "Lose"<<endl;}
    }
}