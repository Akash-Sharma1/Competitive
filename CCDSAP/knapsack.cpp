#include<bits/stdc++.h>
using namespace std;
int main(){
    long  n;
    cin >> n;
    vector<long> ones;
    vector<long> twos;
    long m=0;
    for(long  i=0;i<n;i++){
        double p,w;
        cin >>w;
        cin >>p;
        m+=w;
        if(w==1){ones.push_back(p);}
        else{twos.push_back(p);}
    }
    sort(ones.begin(),ones.end(),greater<long>());
    sort(twos.begin(),twos.end(),greater<long>());
    int arr[m+1];
    for(long  wt=m;wt>=m-1 && wt>0 ;wt--){
        long i=0,j=0;
        long sum=0;
        long price=0;
        if(wt%2==1 && ones.size()>0){price+=ones[0];i++;sum++;arr[sum]=price;}
        while(sum<wt){
            if(i<ones.size() && j<twos.size()){
                if(i+1 < ones.size() && ones[i]+ones[i+1]>twos[j]){
                    price+=ones[i]+ones[i+1];
                    i+=2;
                }
                else{
                    price+=twos[j];
                    j++;
                }
                sum+=2;
                arr[sum]=price;
            }
            else if(i>=ones.size() && j<twos.size()){
                while(sum <wt && j<twos.size()){
                    sum+=2;
                    price+=twos[j];
                    j++;
                    arr[sum]=price;
                }
            }
            else if(i<ones.size() && j>=twos.size()){
                while(sum <wt && i+1<ones.size()){
                    sum+=2;
                    price+=ones[i]+ones[i+1];
                    i+=2;
                    arr[sum]=price;
                }
            }
        }
    }
    for(int i=1;i<=m;i++){cout<< arr[i]<<" ";}
}

