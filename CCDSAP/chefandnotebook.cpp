#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,left,money,n;
        cin >> x >> left >>money >> n;
        x-=left;
        int flag=0;
        if(x<=0){flag=1;}
        for(int i=0;i<n;i++){
            int pages,cost;
            cin >> pages >>cost;
            if(x<=pages && cost<=money){
                flag=1;}
        }
        if(flag==0){cout <<"UnluckyChef\n";}
        else{cout <<"LuckyChef\n";}
    }
}