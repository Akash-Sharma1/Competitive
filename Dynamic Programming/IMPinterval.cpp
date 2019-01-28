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
        vector<pii> arr;
        rep(i,0,n){
            int x,y;
            cin >> x >> y;
            arr.pb(mp(x,--y));
        }
        sort(all(arr));
        priority_queue <int,vector<int>,greater<int> > pq;
        int temp=0,maxx=0;
        rep(i,0,n){
            while(!pq.empty() && arr[i].f > pq.top()){
                temp--;
                pq.pop();
            }
            pq.push(arr[i].s);
            temp++;
            maxx=max(maxx,temp);
        }
        cout <<maxx<<endl;
    }
}