#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (ll i=(l);i<(r);i++)
#define repd(i, l, r) for (ll i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define en end()
#define mp make_pair
#define le length()
#define pi pair<ll,ll>
#define pii pair<ll,pii>
#define maxN 1000000005
using namespace std;

int main(){
    fastIO
    ll n,m,k;
    cin >> n >> m >> k;
    ll arr[n];
    rep(i,0,n){cin >>arr[i];}
    ll pre[n]={0};
    priority_queue<pi> pq;
    pq.push(mp(0,0));
    rep(i,1,n){
        pq.push(mp(arr[i]-arr[i-1],i));
    }
    k--;
    while(k--){
        pre[pq.top().second]=1;
        pq.pop();
    }
    ll sum=0;
    ll i=0;
    while(i<n){
        ll start=0,final=0;
        start=arr[i];
        i++;
        while(pre[i]==0){
            i++;
        }
        final=arr[i-1];
        sum+=(final-start+1);
    }
    cout << sum;
}
