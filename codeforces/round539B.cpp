#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define pb push_back
#define be begin()
#define en end()
#define le length()
#define mp make_pair
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;

int main(){
    fastIO
    int n,m,k;
    cin >> n>>m>>k;
    priority_queue<pi> pq;
    rep(i,0,n){
        int x;
        cin >>x;
        pq.push(mp(x,i+1));
    }
    int c=m*k;
    int sum=0;
    vector<int> v;
    while(c-- && !pq.empty()){
        sum+=pq.top().fi;
        v.pb(pq.top().se);
        pq.top();
    }
    sort(ALL(v));
    cout<<sum<<endl;
    for(int i=0;i<v.size();i+=m){
        cout << v[i]<<" ";
    }
}