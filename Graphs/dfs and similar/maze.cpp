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
int c;
void dfs(string *str,int i,int j,int n,int m){
    if(str[i][j]=='#' || str[i][j]=='v' ||  c<=0){return;}
    int flag=0;
    str[i][j]='v';
    if(i+1 < n && str[i+1][j]=='.'){
        dfs(str,i+1,j,n,m);}
    if(j+1 < m && str[i][j+1]=='.'){
        dfs(str,i,j+1,n,m);}
    if(i-1 >=0 && str[i-1][j]=='.'){
        dfs(str,i-1,j,n,m);}
    if(j-1 >=0 && str[i][j-1]=='.'){
        dfs(str,i,j-1,n,m);}
    if(i+1 < n && str[i+1][j]=='.'){flag=1;}
    if(j+1 < m && str[i][j+1]=='.'){flag=1;}
    if(i-1 >=0 && str[i-1][j]=='.'){flag=1;}
    if(j-1 >=0 && str[i][j-1]=='.'){flag=1;}
    if(flag==0 && c>0){str[i][j]='X';c--;}

}

int main(){
    fastIO
    int n ,m,k;
    cin >> n >>m >> k;
    string str[n];
    rep(i,0,n){
        cin >>str[i];
    }
    c=k;
    rep(i,0,n)rep(j,0,m)dfs(str,i,j,n,m);
    //cout <<endl;
    rep(i,0,n){
       rep(j,0,m){
           if(str[i][j]=='v')cout<<'.';
           else cout << str[i][j];
       }
       cout << endl;
    }
}
