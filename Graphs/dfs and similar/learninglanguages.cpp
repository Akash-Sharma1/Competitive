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

int root(int *dsu,int i){
    if(dsu[i]!=i){
        return dsu[i]=root(dsu,dsu[i]);
    }
    return i;
}

void unioni(int *dsu,int i,int j){
    int a,b;
    a=root(dsu,i);
    b=root(dsu,j);
    if(a<b){dsu[b]=dsu[a];}
    else{dsu[a]=dsu[b];}
}


int main(){
    fastIO
    int n,m;
    cin >> n >> m;
    vector<int> v[m+1];
    int count=0;
    rep(i,1,n+1){
        int k;
        cin >> k;
        if(k==0){count++;}
        rep(j,0,k){
            int x;
            cin >>x;
            v[x].push_back(i);
        }
    }
    if(count==n){cout << n; return 0;}
    int dsu[n+1];
    rep(i,1,n+1){dsu[i]=i;}
    rep(i,1,m+1){
        rep(j,0,v[i].size()){
            if(j+1 < v[i].size()){
                unioni(dsu,v[i][j],v[i][j+1]);
            }
        }
    }
    set<int> st;
    rep(i,1,n+1){st.insert(root(dsu,i));}
    cout<< st.size()-1;
}
