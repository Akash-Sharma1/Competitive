#include<bits/stdc++.h>
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define maxN 1000000005
#define pub push_back
#define mp make_pair
#define s second
#define f first
#define pii pair<int,int>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void dfs(set<int> arr[],int n,int curr,int *visit){
    visit[curr]=1;
    cout << curr<<" ";
    priority_queue<int,vector<int> ,greater<int> > pq;
    for(auto it=arr[curr].begin();it!=arr[curr].end();it++){
        pq.push(*it);
    }
    while(!pq.empty()){
        if(visit[pq.top()]==1){pq.pop();continue;}
        visit[pq.top()]=1;
        dfs(arr,n,pq.top(),visit);
        pq.top();
    }
}
int main(){
    fastIO
    int n,m;
    cin >> n >> m;
    set<int> arr[n+1];
    rep(i,0,m){
        int u,v;
        cin >> u >> v;
        arr[u].insert(v);
        arr[v].insert(u);
    }
    int visit[n+1];
    memset(visit,0,n+1);
    dfs(arr,n,1,visit);
}
