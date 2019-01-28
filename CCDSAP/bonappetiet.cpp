#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define maxN 1000000005
#define endl "\n"
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    fastIO
    long long t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<pair<long long,pair<long long,long long> > > arr;//finish,   pref,start
        for(long long i=0;i<n;i++){
            long long a,b,p;
            cin >> a >> b>> p;
            arr.pb(mp(b,mp(p,a)));
        }
        long long count=0;
        sort(arr.begin(),arr.end());
        map<long long,pair<long long,long long> > mape;//pref, start final
        for(long long i=0;i<n;i++){
            if(mape[arr[i].second.first].first==0&&mape[arr[i].second.first].second==0){
                count++;
                mape[arr[i].second.first]=mp(arr[i].second.second,arr[i].first);//start,end
            }
            else{
                pair<long long,long long> pp=mape[arr[i].second.first];
                //start1,end1    start2,end2
                if(pp.second<=arr[i].second.second){
                    count++;
                    mape[arr[i].second.first]=mp(arr[i].second.second,arr[i].first);
                }
            }
        }
        cout<< count <<endl;
    }
}































