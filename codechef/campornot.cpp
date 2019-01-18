#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int D;
        cin >>D;
        int arr[32]={0};
        for(int i=0;i<D;i++){
            int d,p;
            cin >> d >> p;
            arr[d]=p;
        }
        int sum=0;
        for(int i=1;i<=31;i++){
            arr[i]+=sum;
        }
        int q;
        cin >> q;
        while(q--){
            int dl,req;
            cin >> dl >> req;
            if(arr[dl]>=req){
                cout <<"Go Camp"<<endl;
            }
            else{
                cout <<"Go Sleep"<<endl;
            }
        }
    }
}