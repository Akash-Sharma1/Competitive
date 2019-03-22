#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (ll i=(l);i<(r);i++)
#define repd(i, l, r) for (ll i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define pub push_back
#define en end()
//memset(dp,1000000,sizeof(ll)*1000001);
#define le length()
#define mp make_pair
#define pi pair<ll,ll>
#define pii pair<ll,pii>
#define maxN 1000000005
using namespace std;

int bfs(int arr[],int i,int n,vector<int> visit){
    visit[i]=1;
    int sum=0;
    if(arr[i]==1){
        if(i-1>=0 && visit[i-1]==0){sum+=bfs(arr,i-1,n,visit);}
        if(i+1<n && visit[i+1]==0){sum+=bfs(arr,i+1,n,visit);}
    }
    else{
        if(i-2>=0 && visit[i-2]==0){sum+=bfs(arr,i-2,n,visit);}
        if(i-1>=0 && visit[i-1]==0){sum+=bfs(arr,i-1,n,visit);}
        if(i+1<n && visit[i+1]==0){sum+=bfs(arr,i+1,n,visit);}
        if(i+2<n && visit[i+2]==0){sum+=bfs(arr,i+2,n,visit);}
    }
    return (sum+1)%(1000000007);
}

int main(){
    fastIO
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int arr[n];
        rep(i,0,n){cin >>arr[i];}
        vector<int> visited;
        rep(i,0,n){visited.pub(0);}
        ll x=bfs(arr,0,n,visited);
        cout <<x%(1000000000+7)<<endl;
    }
}
