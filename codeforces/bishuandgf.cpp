#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define pb push_back
#define en end()
//memset(dp,1000000,sizeof(int)*1000001);
#define le length()
#define mp make_pair
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;

void dfs(vector<int> g[],int *dist,int i,int d){
    for(auto itr=g[i].begin();itr!=g[i].end();itr++){
        dist[*itr]=d;
        dfs(g,dist,*itr,d+1);
    }
}

int main(){
    fastIO
    int n;
    cin >> n;
    vector<int> g[n+1];
    rep(i,0,n-1){
        int src,dest;
        cin >> src >>dest;
        g[src].pb(dest);
    }
    int dist[n+1]={0};
    dist[1]=0;
    dfs(g,dist,1,1);
    int q;
    cin >>q;
    int arr[q];
    rep(i,0,q){cin >> arr[i];}
    int mindist=INT_MAX,node=1;
    rep(i,0,q){
        if(dist[arr[i]] < mindist){mindist=dist[arr[i]];node=arr[i];}
        else if(dist[arr[i]] == mindist && node>arr[i]){mindist=dist[arr[i]];node=arr[i];}
    }
    cout << node;
}