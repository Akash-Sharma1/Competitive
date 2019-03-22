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
bool isprime(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    fastIO
    ll n;
    cin >> n;
    if(isprime(n)){cout<<1;return 0;}
    if(n%2==0){cout << n/2;return 0;}
    for(ll i=2;i*i<=n;i++){
            if(n%i==0 && isprime(i)){
                n-=i;
                break;
            }
    }
    cout << 1+n/2;
}