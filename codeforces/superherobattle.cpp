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

int main(){
    fastIO
    ll n,m;
    cin >>m >> n;
    ll arr[n];
    rep(i,0,n){ll x;cin >>x;arr[i]=-x;}
    double diff=0;
    rep(i,0,n){
        diff+=arr[i];
        if(diff>=m){cout <<i+1;return 0;}
    }
    ll pre[n];
    pre[0]=arr[0];
    rep(i,1,n){
        pre[i]=pre[i-1]+arr[i];
    }
    if(diff <=0){cout<<-1;return 0;}
    ll minn=LLONG_MAX;
    rep(i,0,n){
        ll x=(ll)ceil((m-pre[i])/diff);
        ll y=x*n+i+1;
        if(x>=0){
            if(minn > y){minn=y;}
        }
    }
    cout << minn;
}
