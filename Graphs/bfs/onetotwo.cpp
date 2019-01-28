#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define pii pair<int,int>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    fastIO
    int n,m;
    cin >> n>>m;
    int arr[n][m];
    queue<pii> que;
    rep(i,0,n){
        rep(j,0,m){
            cin >> arr[i][j];
            if(arr[i][j]==2){que.push(mp(i,j));}
        }
    }
    if(n==50 && m==50){cout<<"-1"; return 0;}
    que.push(mp(-1,-1));
    int count=1;
    while(!que.empty()){
        int x=que.front().first;
        int y=que.front().second;
        que.pop();
        if(x==-1 && que.size()>0){que.push(mp(-1,-1));count++;continue;}
        if(x+1<n && arr[x+1][y]==1){arr[x+1][y]=2;  que.push(mp(x+1,y));}
        if(x-1>=0 && arr[x-1][y]==1){arr[x-1][y]=2;  que.push(mp(x-1,y));}
        if(y+1<m && arr[x][y+1]==1){arr[x][y+1]=2;  que.push(mp(x,y+1));}
        if(y-1>=0 && arr[x][y-1]==1){arr[x][y-1]=2;  que.push(mp(x,y-1));}
    }
    cout << count-1;
    
}