#include<bits/stdc++.h>
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int fun(int n,int a,int b,int c,int *F){
    if(n==0){return 1;}
    if(n<a){return -1;}
    if(F[n]!=0){return F[n];}
    F[n]=max(max(1+fun(n-a,a,b,c,F),1+fun(n-b,a,b,c,F)),1+fun(n-c,a,b,c,F));
    return F[n];
}

int main(){
    fastIO
    int n,arr[3];
    cin >> n >> arr[0] >> arr[1] >> arr[2];
    sort(arr,arr+3);
    int F[n]={0};
    cout << fun(n,arr[0],arr[1],arr[2],F)-1;
}