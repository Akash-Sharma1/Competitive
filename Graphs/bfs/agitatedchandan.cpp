#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
pii bfs(vector<pii> arr[],int n,int src){
    int visited[n+1]={0};
    queue<int> que;
    int dist[n+1];
    que.push(src);
    visited[src]=1;
    dist[src]=0;
    int maxx=0;
    int index=src;
    while(!que.empty()){
        int x=que.front();
        que.pop();
        for(auto itr=arr[x].begin();itr!=arr[x].end();itr++){
            if(!visited[itr->first]){
                visited[itr->first]=1;
                dist[itr->first]=dist[x]+itr->second;
                que.push(itr->first);
                if(maxx < dist[itr->first]){
                    maxx=dist[itr->first];
                    index=itr->first;
                }
            }
        }
    }
    return mp(index,maxx);
}
int main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,int> > arr[n+1];
        for(int i=0;i<n-1;i++){
            int src,dest,w;
            cin >> src >> dest>> w;
            arr[src].pb(mp(dest,w));
            arr[dest].pb(mp(src,w));
        }
        pii node=bfs(arr,n,1);//node,dist
        pii x= bfs(arr,n,node.first);
            int ds=x.second;
        int cost;
if(ds<100)
cost=0;
else if(ds>100&&ds<=1000)
cost=100;
else if(ds>1000&&ds<=10000)
cost=1000;
else
cost=10000;
        cout <<cost <<" "<< x.second<<endl;

    }
}