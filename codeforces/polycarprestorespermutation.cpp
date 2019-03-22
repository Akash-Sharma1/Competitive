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
    ll n;
    cin >> n;
    ll arr[n];
    rep(i,0,n-1){cin >>arr[i];}
    ll sum=0;
    ll minn=0;
    rep(i,0,n-1){
        sum+=arr[i];
        minn=min(minn,sum);
    }
    ll x=1-minn;
    ll y=x;
    ll freq[n+1]={0};
    if(x<=0 || x >n){cout <<  -1; return 0;}
    freq[x]=1;
    rep(i,0,n-1){
        x+=arr[i];
        if(x<=0 || x >n){cout <<  -1; return 0;}
        freq[x]=1;
    }
    rep(i,1,n+1){
        if(freq[i]!=1){cout <<  -1; return 0;}
    }
    cout <<y << " ";
    rep(i,0,n-1){
        y+=arr[i];
        cout << y << " ";
    }

}
