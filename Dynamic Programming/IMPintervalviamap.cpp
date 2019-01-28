#include<bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for (int i=(l);i<(r);i++)
#define repd(i, l, r) for (int i=(l);i>=(r);i--)
#define ll long long
#define maxN 1000000005
#define s second
#define f first
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main(){
    fastIO
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> mp;
        rep(i,0,n){
            int x,y;
            cin >> x >> y;
            mp[x]=mp[x]+1;
            mp[y]=m[y]-1;
        }
        int maxx=0,temp=0;
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            temp+=itr->second;
            maxx=max(maxx,temp);
        }
        cout <<maxx<<endl;
    }
}