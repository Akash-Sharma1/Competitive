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
    unordered_map<int,int> mp;
    rep(i,0,n){
        int x;
        cin >>x;
        mp[x]++;
    }
    double avg;
    int arr[3];
    int i=0;
    for(auto itr=mp.begin();itr!=mp.end() && i<3;itr++,i++){
        arr[i]=itr->first;
        avg+=itr->first*itr->second;
    }
    avg/=n;
    double newavg=0.00;
    double c=0;
    int brr[3]={0};
    int cost=0;
    while(c<n){
        c++;
        double minn=3.0;
        int idx=0;
        rep(i,0,3){
            double x=avg-(newavg+arr[i])/c;
            if(x<0)x=-x;
            if(x<minn){
                minn=x;
                idx=i;
            }
            if(idx==1){
                if(mp[arr[0]]==0 && mp[arr[2]]==0){continue;}
                else{
                    if(mp[arr[1]]>0)cost++;
                    mp[arr[1]]--;
                }
            }
            else{
                if(mp[arr[idx]]>0)cost++;
                brr[idx]++;
                mp[arr[idx]]--;
            }
        }
    }
    cout<<cost;

}