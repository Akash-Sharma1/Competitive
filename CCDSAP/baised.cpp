#include<bits/stdc++.h>
using namespace std;
    int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int num[n];
        for(int i=0;i<n;i++){
            string name;
            cin >> name;
            cin >> num[i];
        }
        map<int,int> rank;
        int sum=0;
        for(int i=0;i<n;i++){
            if(rank[num[i]]==0){
                rank[num[i]]=1;
            }
            else{
                int k=num[i]-1;
                if(k==0){k=1;}
                int j=num[i]+1;
                if(j==n+1){j=n;}
                while(rank[j]!=0||rank[k]!=0){
                    j++;
                    k--;
                    if(k==0){k=1;}
                    if(j==n+1){j=n;}
                }
                if(rank[j]==0){
                    rank[j]=1;
                     sum+=abs(j-num[i]);
                }
                else if(rank[k]==0){
                    rank[k]=1;
                     sum+=abs(k-num[i]);
                }
            }
        }
        cout<<sum;
    }
}