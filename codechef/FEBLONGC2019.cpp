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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int attack[n];
        int defense[n];
        rep(i,0,n){cin >>attack[i];}
        rep(i,0,n){cin >> defense[i];}
        int maxx=-1;
        rep(i,0,n){
            int left=i-1,right=i+1;
            if(left==-1){left=n-1;}
            if(right==n){right=0;}
            if(defense[i]>attack[left]+attack[right])
                maxx=max(defense[i],maxx);
        }
        cout << maxx<<endl;
    }
}