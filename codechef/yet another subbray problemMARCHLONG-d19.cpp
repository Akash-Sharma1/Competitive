#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;
#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define All(v) (v).begin(), (v).end()
#define rep(i, l, r) for (ll i=(l);i<(r);i++)
#define repd(i, l, r) for (ll i=(l);i>=(r);i--)
#define ll long long
#define fi first
#define se second
#define be begin()
#define pb push_back
#define en end()
//memset(dp,1000000,sizeof(ll)*1000001);
#define le length()
#define mp make_pair
#define pi pair<ll,ll>
#define pii pair<ll,pii>
#define maxN 1000000005

typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    data_set;


ll main(){
    fastIO
    ll t;
    cin >> t;
    while(t--){
        ll n;
        double k;
        cin >> n >> k;
        ll arr[n];
        rep(i,0,n){cin >>arr[i];}
        ll sum=0;
        rep(i,0,n){
            ll subarr[2001]={0};
            data_set p;
            rep(j,i,n){
                p.insert(arr[j]);
                subarr[arr[j]]++;
                if(i==j && arr[i]==1){
                    sum++;continue;
                }
                ll m=ceil(k/(j-i+1));
                ll index=ceil(k/m);
                ll element=*p.find_by_order(index-1);
                ll fac=subarr[element];
                if(subarr[fac]>0)sum++;
            }
        }
        cout <<sum<<endl;
    }
    return 0;
}
