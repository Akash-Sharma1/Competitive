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
int main(){
    fastIO
    string str;
    cin >> str;
    int n=str.length();
    int arr[n+1];
    for(int i=n-1;i>=0;i++){
        if((str[i]-48)%2=0){arr[i]=arr[i+1]+1;}
        else{arr[i]=arr[i+1];}
    }
    rep(i,0,n){cout << arr[i]<<" ";}
}