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

int root(int *arr,int i){
    if(arr[i]!=i){
        arr[i]=root(arr,arr[i]);
        return arr[i];
    }
    return i;
}

bool find(int * arr,int i,int j){
    if(root(arr,i)==root(arr,j))return  true;
    return false;
}

void unioni(int *arr,int i,int j){
    arr[root(arr,i)]=arr[root(arr,j)];
}

int main(){
    fastIO
    int n;
    cin >> n;
    int disj[n];
    rep(i,0,n){disj[i]=i;}
    int arr[n][2];
    rep(i,0,n){
        cin >> arr[i][1] >> arr[i][2];
    }
    rep(i,0,n){
        rep(j,0,n){
            if(arr[i][1]==arr[j][1] || arr[i][2]==arr[j][2]){
                unioni(disj,i,j);
            }
        }
    }
    unordered_map<int,int> mp;
    int count=0; 
    rep(i,0,n){
        cout <<disj[i]<<" "<<arr[i][1]<< " "<<arr[i][2]<<endl;
        if(mp[disj[i]]==0){mp[disj[i]]++;count++;}
    }
    cout << count-1;
}