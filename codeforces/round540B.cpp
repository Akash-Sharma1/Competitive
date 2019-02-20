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

int main(){
    fastIO
    int n;
    cin >> n;
    int arr[n+2];
    arr[n+1]=0;
    arr[0]=0;
    rep(i,1,n+1){cin >>arr[i];}
    int feven[n+2]={0},fodd[n+2]={0},beven[n+2]={0},bodd[n+2]={0};
    fodd[1]=arr[1];
    feven[2]=arr[2];
    bodd[n]=arr[n];
    bodd[n-1]=arr[n-1];
    rep(i,3,n+2){
        if(i%2==0){feven[i]=feven[i-2]+arr[i];  fodd[i]=fodd[i-1];}
        else {fodd[i]=fodd[i-2]+arr[i];     feven[i]=feven[i-1];}
    }
    repd(i,n-2,1){
        if(i%2==0){beven[i]=beven[i+2]+arr[i];  bodd[i]=bodd[i-1];}
        else {bodd[i]=bodd[i+2]+arr[i]; bodd[i]=bodd[i-1];}
    }
    rep(i,1,n+1){
        int odd=0,even=0;
        if(i<=(n+1)/2){
            if(i%2!=0){
                odd=fodd[n+1]-fodd[i]+feven[i];
                even=feven[n+1]-feven[i]+fodd[i]-arr[i];
            }
            else{
                odd=fodd[n+1]-fodd[i]+feven[i]-arr[i];
                even=feven[n+1]-feven[i]+fodd[i];
            }
            cout << odd <<" "<<even<<endl;
        }
        else{
            if(i%2==0){
                odd=bodd[1]-bodd[i]+beven[i];
                even=beven[1]-beven[i]+bodd[i]-arr[i];
            }
            else{
                odd=bodd[1]-bodd[i]+beven[i]-arr[i];
                even=beven[1]-beven[i]+bodd[i];
            }
            cout << odd <<" "<<even<<endl;
        }
    }
}