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
pi pos[1000000];

vector<int> str;
int c;
void dfs(int idx,vector<int> v[]){
    c++;
    pos[idx].first=c;
    sort(v[idx].begin(),v[idx].end());
    str.pb(idx);
    rep(i,0,v[idx].size()){
        dfs(v[idx][i],v);
    }
    pos[idx].second=c;
}
int main(){
    //fastIO
    int n,q;
    cin >> n>>q;
    vector<int> v[n+1];
    rep(i,2,n+1){
        int par;
        cin >> par;
        v[par].push_back(i);
    }
    c=-1;
    dfs(1,v);
    while(q--){
        int node,k;
        cin >> node >> k;
        if(pos[node].second-pos[node].first+1 < k)cout<<-1<<endl;
        else cout << str[pos[node].first+k-1]<<endl;
    }
}
