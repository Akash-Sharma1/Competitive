#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define pub push_back
#define en end()
//memset(dp,1000000,sizeof(int)*1000001);
#define le length()
#define mp make_pair
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;
int dfs(vector<pi> v[],int *visit,int node){
    if(visit[node]==1){return 0;}
    ll sum=0;
    for(auto itr=v[node].begin();itr!=v[node].end();itr++){
        sum+=dfs(v,visit,itr->first);
    }
    return sum+1;
}
int power(int x, unsigned int y, int p) 
{ 
    int res = 1; 
    x = x % p; 
    while (y > 0) 
    {  if ((y&1)) {
        res = (res*x) % p; }
        y = (y>>1);
        x = (x*x) % p;   
    } 
    return res; 
}
int main(){
    fastIO
    int n,k;
    cin >> n >> k;
    vector<pi> v[n+1];
    queue<int> que;
    rep(i,0,n-1){
        int u,vv,colour;
        cin >> u >>vv >> colour;
        if(colour==1){que.push(u);que.push(vv);}
        v[u].pub(mp(vv,colour));
        v[vv].pub(mp(u,colour));
    }
    ll sum=0;
    int visited[n+1]={0};
    while(!que.empty()){
        int vt=que.front();
        visited[vt]=1;
        que.pop();
        vector<int> degree;
        ll count=0;
        for(auto itr=v[vt].begin();itr!=v[vt].end();itr++){
            int x=dfs(v,visited,itr->first);
            if(itr->se==1){
                degree.pub(x);
            }
            count+=x;
        }
        sum+=(1+count+power(n,k-2,(1000000000+7)))*k%(1000000000+7);
        int s=degree.size();
        rep(i,0,s){
            sum+=(count+power(n,k-2,(1000000000+7)))*k%(1000000000+7);
            count-=degree[i];
        }
    }
    cout <<sum;

}