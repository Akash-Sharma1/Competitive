#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    fastIO
    ll n,k;
    cin >>  n >> k;
    ll arr[n];
    for(ll i=0;i<n;i++){cin >> arr[i];}
    string str;
    cin >> str;
    ll sum=0;
    for(ll i=0;i<n;){
        priority_queue<ll> pq;
        char rep=str[i];
        while(str[i]==rep){pq.push(arr[i]);i++;}
        ll c=k;
        while(!pq.empty() && c--){sum+=pq.top();pq.pop();}
    }
    cout <<sum;
}