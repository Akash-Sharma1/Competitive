#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

void bfs(vector<int> arr[],int src,int n){
    queue<int> que;
    int visit[n+1]={0};
    que.push(src);
    visit[src]=1;
    que.push(-1);
    int count=0;
    while(!que.empty()){
        int x=que.front();
        que.pop();
        if(x==-1){count++;que.push(-1);continue;}
        if(x==n){cout<< count<<endl;break;}
        for(auto itr=arr[x].begin();itr!=arr[x].end();itr++){
            if(!visit[*itr]){
                visit[*itr]=1;
                que.push(*itr);
            }
        }
    }
}
int main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> arr[n+1];
        while(m--){
            int src,dest;
            cin >> src >> dest;
            arr[src].pb(dest);
            arr[dest].pb(src);
        }
        bfs(arr,1,n);
    }
}
