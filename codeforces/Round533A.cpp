#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>  n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    int mincost=INT_MAX,ans=-1;
    for(int t=1;t<=100;t++){
        int cost=0;
        for(int i=0;i<n;i++){
            int x=arr[i]-t;
            if(x<0){x=-x;}
            if(x>1){cost=cost+x-1;}
        }
        if(mincost > cost){
            mincost=cost;
            ans=t;
        }
    }
    cout << ans<<" "<< mincost;

}
