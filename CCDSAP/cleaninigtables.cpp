#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,count=0;
        cin >> n>> m;
        int arr[m];
        map<int,int> freq;
        for(int i=0;i<m;i++){cin >> arr[i];freq[arr[i]]++;}
        map<int,int> pos;
        int next[m];
        for(int i=m-1;i>=0;i--){
            if(pos[arr[i]]==0){
                next[i]=-1;
                pos[arr[i]]=i;
            }
            else{
                next[i]=pos[arr[i]];
                pos[i]=i;
            }
        }
        pos.clear();
        int k=0;
        int p[n];
        for(int i=0;i<n;i++){p[i]=-1;}
        for(int i=0;i<m;i++){
            if(k<n){
                if(pos[arr[i]]==0){
                    count++;
                    p[k]=arr[i];
                }
                pos[arr[i]]=1;
                freq[arr[i]]--;
            }
            else{
                if(pos[arr[i]]==1){
                    freq[arr[i]]--;
                    continue;
                }
                count++;
                int index=-1,minn=-1;
                for(int j=0;j<n;j++){
                    if(freq[p[j]]==0){index=j;break;}
                    if(minn < next[i]){
                        
                    }
                }
                pos[p[index]]=0;
                pos[arr[i]]=1;
                p[index]=arr[i];
                freq[arr[i]]--;
            }
        }
        cout << count << endl;
    }
}
