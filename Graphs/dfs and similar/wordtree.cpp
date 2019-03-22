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

string dfs(vector<int> g[],string *str,int i,int *visit){
    string s="";
    for(auto itr=g[i].begin();itr!=g[i].end();itr++){
        if(!visit[*itr]){
            visit[*itr]=1;
             s=s+dfs(g,str,*itr,visit);
        }
    }
    str[i]=str[i]+s;
    return str[i];
}

int main(){
    //fastIO
    int n,q;
    cin >> n >> q;
    string str[n+1];
    rep(i,1,n+1){cin >> str[i];}
    vector<int> g[n+1];
    rep(i,0,n-1){
        int src,dest;
        cin >>src >>dest;
        g[src].pb(dest);
        g[dest].pb(src);
    }
    int visit[n+1]={0};
    visit[1]=1;
    str[1]=dfs(g,str,1,visit);
    while(q--){
        int x;
        cin >>x;
        string s;
        cin >> s;
        cout <<str[x]<<endl;
        map<int,int> alpha,comp;
        rep(i,0,str[x].length()){
            alpha[((int)str[x][i]-97)]=1;
        }
        rep(i,0,s.length()){
            comp[(int)s[i]-97]++;
        }
        int count=0;
        rep(i,0,26){ if(comp[i]>alpha[i]) count+=comp[i]-alpha[i];}
        cout <<count<<endl;
    }
}
