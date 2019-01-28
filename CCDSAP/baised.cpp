#include<bits/stdc++.h>
using namespace std;
    int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >>n;
        long long num[n];
        for(long long i=0;i<n;i++){
            string name;
            cin >> name;
            cin >> num[i];
        }
        sort(num,num+n);
        long long sum=0;
        for(long long i=0;i<n;i++){
            sum+=abs(num[i]-(i+1));
        }
        cout<<sum<<endl;
    }
}