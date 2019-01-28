#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    for(long long m=0;m<t;m++){
        long long n,k,b,t;
        cin >> n >> k >> b >> t;
        long long arr[n],speed;
        for(long long i=0;i<n;i++){cin >> arr[i];}
        for(long long i=0;i<n;i++){cin >> speed;arr[i]=arr[i]+speed*t;}
        for(long long i=0;i<n;i++)(arr[i]>=b) ?arr[i]=1 :arr[i]=0;
        long long sum=0,cost=0,zero=0;
        for(long long i=n-1;i>=0 && sum<k;i--){
            if(arr[i]==1){
                sum++;
                cost+=zero;
            }
            else{
                zero++;
            }
        }
        if(sum<k){cout <<"Case #"<<m+1<< ": IMPOSSIBLE\n";}
        else{cout <<"Case #"<<m+1<<": "<<cost<<endl;}
    }
}