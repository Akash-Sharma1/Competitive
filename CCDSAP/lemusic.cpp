#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<pair<long long,long long> > arr;
        for(long long i=0;i<n;i++){
            long long b,l;
            cin >> b;
            cin >> l;
            arr.push_back(make_pair(l,b));
        }
        map<long long,long long> mape;// band, smallest lements i+1
        //to find the disclong long first
        for(long long i=0;i<n;i++){
            if(mape[arr[i].second]==0){mape[arr[i].second]=i+1;}
            else if(arr[i].second == arr[mape[arr[i].second]-1].second && arr[mape[arr[i].second]-1].first > arr[i].first){
                mape[arr[i].second]=i+1;
            }
        }
        vector<long long> dist;
        for(auto itr=mape.begin();itr!=mape.end();itr++){
            dist.push_back(arr[itr->second-1].first);
            arr[itr->second-1].first=0;
            arr[itr->second-1].second=0;
        }
        sort(arr.begin(),arr.end());
        sort(dist.begin(),dist.end());
        long long ans=0,all=dist.size();
        for(long long i=0;i<dist.size();i++){
            ans+=(i+1)*dist[i];
        }
        for(long long i=all;i<arr.size();i++){
            ans+=all*arr[i].first;
        }
        cout << ans<<endl;
    }
}
