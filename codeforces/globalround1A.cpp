#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ALL(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define en end()
#define le length()
#define pi pair<int,int>
#define pii pair<int,pii>
#define maxN 1000000005
using namespace std;

int main(){
    fastIO
    int b,k;
    cin >> b >> k;
    int arr[k];
    rep(i,0,k){cin >>arr[i];}
    if(b%2==0 && arr[k-1]%2==0){cout << "even";}
    else if(b%2==0 && arr[k-1]%2!=0){cout << "odd";}
    else{
        int count=0;
        rep(i,0,k){if(arr[i]%2!=0)count++;}
        if(count%2==0){cout <<"even";}
        else{cout << "odd";}
    }
}