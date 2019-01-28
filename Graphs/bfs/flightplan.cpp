
#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
void bfs(int n,vector<int> arr[],int src,int dest){
    queue<int> que;
    int visit[n+1]={0};
    int path[n+1]={0};
    visit[src]=1;
    int run=1;
    que.push(src);
    while(!que.empty()){
        int x=que.front();
        que.pop();
        if(x==dest){break;}
        sort(arr[x].begin(),arr[x].end());
        for(auto itr=arr[x].begin();itr!=arr[x].end();itr++){
            if(!visit[*itr]){
                visit[*itr]=1;
                path[*itr]=x;
                que.push(*itr);
            }
        }
    }
    vector<int> v;
    int i=dest;
    while(i!=src){
        v.pb(i);
        i=path[i];
    }
    v.pb(i);
    cout << v.size()<<endl;
    for(int i=v.size()-1;i>=0;i--){cout << v[i]<<" ";}
}
int main(){
    //fastIO
    int n,m,t,c;
    cin >> n;
    cin >> m;
    cin >> t;
    cin >> c;
    vector<int> arr[n+1];
    int k=m;
    while(k--){
        int src,dest;
        cin >> src;
        cin >> dest;
        arr[src].pb(dest);
        arr[dest].pb(src);
        if(k==0){break;}
    }
    int start,endp;
    cin >> start >> endp;
    bfs(n+1,arr,start,endp);
}
