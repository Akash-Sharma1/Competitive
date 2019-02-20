#include<bits/stdc++.h>
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define s second
#define f first
#define pii pair<int,int>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    fastIO
    int n;
    cin >> n;
    char arr[n][n];
    rep(i,0,n){
        rep(j,0,n){
            cin >> arr[i][j];
        }
    }
    int count=0;
    rep(i,1,n-1){
        rep(j,1,n-1){
            if(arr[i][j]=='X' && arr[i-1][j-1] =='X' && arr[i-1][j+1] =='X'  && arr[i+1][j-1] =='X'  && arr[i+1][j+1] =='X' ){
                count++;
            }
        }
    }
    cout <<count;
}