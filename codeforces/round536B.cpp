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
    ll n,m;
    cin >> n >> m;
    vector<pii> cost;
    ll arr[n],crr[n];
    rep(i,0,n){
        cin >> arr[i];
    }
    rep(i,0,n){
        cin >> crr[i];
    }
    rep(i,0,n){
        cost.pb(mp(crr[i],i));
    }
    sort(cost.begin(),cost.end());
    ll start=0;
    while(m--){
        ll sum=0;
        ll kind,q;
        cin >> kind >> q;
        kind--;
        ll quan=min(arr[kind],q);
        arr[kind]-=quan;
        sum+=quan*crr[kind];
        q-=quan;
        ll i=start;
        while(q>0 && i<n){
            ll rem=min(arr[cost[i].second],q);
            arr[cost[i].second]-=rem;
            if(arr[cost[i].second]==0){start++;}
            sum+=rem*cost[i].first;
            q-=rem;
            i++;
        }
        if(q>0 && i>=n){cout << "0"<<endl;continue;}
        cout << sum << endl;
    }
}
