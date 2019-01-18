#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long n,a,b;
        cin >> n >> a >> b;
        long arr[n];
        for(long i=0;i<n;i++){cin >> arr[i];}
        long bob=0,alice=0,same=0;
        for(long i=0;i<n;i++){
            if(arr[i]%a==0 && arr[i]%b==0){same++;}
            else if(arr[i]%a==0){bob++;}
            else if(arr[i]%b==0){alice++;}
        }
        if(same!=0){b0b++;}
        if(bob > alice){cout<<"BOB"<<endl;}
        else{cout<<"ALICE"<<endl;}
    }
    return 0;
}