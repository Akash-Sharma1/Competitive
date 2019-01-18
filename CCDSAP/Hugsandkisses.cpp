#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long  expo(long long  x,long long  n){
    long long res=1;
    while(true){
        if(n%2==1){
            res=res*x%mod;
        }
        n=n/2;
        x=x*x%mod;
        if(n==0){break;}
    }
    return res;
}
int  main(){
    long long  t;
    cin >> t;
    while(t--){
        long long  n;
        cin >> n;
        long long sum=0;
        n++;
        long long n1 = n/2;
        long long n2 = n - n1;
        long long res = expo(2,n1) + expo(2,n2) - 2;
        cout << res<<endl;
    }
}
