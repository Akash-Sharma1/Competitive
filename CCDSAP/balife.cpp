#include<bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        int n;
        cin >> n;
        if(n==-1){break;}
        int arr[n];
        for(int i=0;i<n;i++){cin >> arr[i];}
        int want[n];
        want[0]=arr[0];
        for(int i=1;i<n;i++){want[i]=arr[i]+want[i-1];}
        if(want[n-1]%n!=0){cout<<-1<<endl;continue;}
        int avg=want[n-1]/n;
        int maxx=0;
        for(int i=0;i<n;i++){
            maxx=max(abs(want[i]-(i+1)*avg),maxx);
        }
        cout <<maxx <<endl;
    }
}
