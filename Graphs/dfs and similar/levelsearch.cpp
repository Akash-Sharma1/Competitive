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

int dfs(vector<int> arr[],int node,int level){
    int lvl=level;
    for(auto itr=arr[node].begin();itr!=arr[node].end();itr++){
        lvl=max(lvl,dfs(arr,*itr,level+1));
    }
    return lvl;
}
int main(){
    fastIO
    int n;
    cin >> n;
    vector<int> arr[n+1];
    rep(i,1,n+1){
        int src;
        cin >>src;
        if(src==-1){src=0;}
        arr[src].pub(i);
    }
    cout << dfs(arr,0,0);
}