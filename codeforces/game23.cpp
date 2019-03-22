#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (ll i=(l);i<(r);i++)
#define repd(i, l, r) for (ll i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define pb push_back
#define en end()
//memset(dp,1000000,sizeof(ll)*1000001);
#define le length()
#define mp make_pair
#define pi pair<ll,ll>
#define pii pair<ll,pii>
#define maxN 1000000005
using namespace std;

ll main(){
    fastIO
    ll n,m;
    cin >> n >> m;
    if(m%n!=0){cout << -1;return 0;}
    ll rem=m/n;
    ll count=0;
    while(rem%2==0){rem/=2;count++;}
    while(rem%3==0){rem/=3;count++;}
    if(rem!=1) {cout << -1;}
    else cout<<count;
    return 0;
}