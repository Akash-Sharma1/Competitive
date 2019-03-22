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
int dist[10000000]={0};
int bfs(vector<int> v[]){
    queue<int> que;
    que.push(1);
    que.push(-1);
    int level=0;
    while(!que.empty()){
        int n=que.front();
        que.pop();
        if(n==-1){if(que.empty())break;else{level++;que.push(-1);continue;}}
        rep(i,0,v[n].size()){
            dist[level]++;
            que.push(v[n][i]);
        }
    }
    ll sum=0;
    rep(i,0,level+1){sum+=dist[i]%2;}
    return sum+1;
}
int main(){
    fastIO
    int n;
    cin >> n;
    vector<int> v[n+1]; 
    rep(i,2,n+1){
        int x;
        cin >>x;
        v[x].push_back(i);
    }
    cout << bfs(v);
}