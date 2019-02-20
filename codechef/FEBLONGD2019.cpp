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
#define pi pair<int,int>
#define pii pair<int,pii>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n];
        rep(i,0,n){cin >>arr[i];}
        ll sum=0;
        rep(i,0,n){
            sum+=arr[i]-1;
        }
        cout <<sum+1<<endl;
    }
}