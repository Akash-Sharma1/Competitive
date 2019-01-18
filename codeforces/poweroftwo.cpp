#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void recurse(long long n,long long k){
    if(n==1 || k==1){
        cout<< n <<" ";
        return;}
    recurse(n/2,k/2);
    recurse(n/2,k-(k/2));
}
void calc(vector<long long> &d,long long k,long long i,long long size){
    if(i>=size || k<=0){return;}
    long long x=min(d[i],k);
    recurse(d[i],k);
    k-=x;
    calc(d,k,++i,size);
}
int main(){
    long n,k;
    cin >> n >> k;
    long long maxx=0;
    long long min=0;
    long long bin=0;
    long long c=0;
    vector<long long> digits;
    while (n > 0)
    {   
        bin = n % 2;
        if(bin==1){
            min++;
            long long temp=(long long)pow(2,c);
            digits.push_back(temp);
            maxx+=temp;
        }
        c++;
        n /= 2;
    }
    if(k >= min && k <=maxx ){cout <<"YES"<<endl;
    calc(digits,k,0,digits.size());}
    else{cout <<"NO";}
    return 0;
}
