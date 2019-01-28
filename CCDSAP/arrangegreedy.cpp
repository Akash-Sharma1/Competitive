#include<bits/stdc++.h>
#define ll long long
#define maxN 1000000005
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    fastIO
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<long long> arr;
        long long one=0;
        for(long long i=0;i<n;i++){
            long long x;
            cin >>x;
            if(x==1){one++;}
            else{arr.pb(x);}
        }
        sort(arr.begin(),arr.end());
        while(one--){cout << 1<<" ";}
        if(arr.size()==2 && arr[0]==2 && arr[1]==3){cout << "2 3"<<endl;continue;}
        for(long long i=arr.size()-1;i>=0;i--){
                cout <<arr[i]<<" ";
        }
        cout <<endl;
    }
}