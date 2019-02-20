#include<bits/stdc++.h>
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (ll i=(l);i<(r);i++)
#define repd(i, l, r) for (ll i=(l);i>=(r);i--)
#define ll long long
#define maxN 1000000005
#define pub push_back
#define mp make_pair
#define s second
#define f first
#define pii pair<ll,ll>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void dfs(set<ll> arr[],ll curr,ll *visit){
    if(visit[curr]==1){return;}
    visit[curr]=1;
    cout << curr<<" ";
    priority_queue<ll,vector<ll> ,greater<ll> > pq;
    for(auto it=arr[curr].begin();it!=arr[curr].end();it++){
        pq.push(*it);
    }
    while(!pq.empty()){
        dfs(arr,pq.top(),visit);
        pq.pop();
    }
}
int main(){
    fastIO
    ll n,m;
    cin >> n >> m;
    set<ll> arr[n+1];
    rep(i,0,m){
        ll u,v;
        cin >> u >> v;
        arr[u].insert(v);
        arr[v].insert(u);
    }
    ll visit[n+1];
    memset(visit,0,n+1);
    dfs(arr,1,visit);
}
