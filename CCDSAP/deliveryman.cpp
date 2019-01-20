#include<bits/stdc++.h>
/*5 15 15
1 2 3 4 5
5 4 3 2 1
*/
using namespace std;
int main(){
    long long n,x,y;
    cin >> n >> x >> y;
    long long a[n];
    long long b[n];
    vector<pair<long,long> >arr;
    for(long long i=0;i<n;i++){cin >> a[i];}
    for(long long i=0;i<n;i++){cin >> b[i];}
    for(long long i=0;i<n;i++){
            arr.push_back(make_pair(a[i]-b[i],i));}
    sort(arr.begin(),arr.end());
    // - means brr is greater
    // + means arr is greater
    long long part=-1,part2=-1;
    for(long long i=0;i<n;i++){if(arr[i].first>=0){part=i;break;}}
    for(long long i=n-1;i>=0;i--){if(arr[i].first<=0){part2=i;break;}}
    long long sum=0,i=0;
    while(y>0 && i<part){
        sum+=b[arr[i].second];
        i++;
        y--;
    }
    long long j=n-1;
    while(x>0 && j>part2){
        sum+=a[arr[j].second];
        j--;
        x--;
    }
    if(x==0 && y>0){
        // y has to cover all
        while(j>=i){
            sum+=b[arr[j].second];
            j--;
        }
    }
    else if( x>0 && y==0){
        // y is empty and x has to cover remaining
        while(j>=i){
            sum+=a[arr[j].second];
            j--;
        }
    }
    else{
        // dono m kuch na kuch to bacha h
        for(int z=part;z<=part2;z++){sum+=b[arr[i].second];}
    }
    cout << sum;

}
