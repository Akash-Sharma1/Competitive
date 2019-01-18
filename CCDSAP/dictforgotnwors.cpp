#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n,k;
        cin >> n>> k;
        int arr[n]={0};
        string dict;
        getline(cin, dict); 
        while (dict.length()==0 ) {
            getline(cin, dict); }
        map<string,int> m;
        stringstream ss(dict);
        int y=n;
        int a=1;
        while(y--){
            string temp;
            ss>>temp;
            m[temp]=a++;
        }
        while(k--){
            string phrase;
            getline(cin, phrase); 
        while (phrase.length()==0 ){ 
            getline(cin, phrase); }
            string str;
            stringstream ss1(phrase);
            int i=-1;
            while(ss1>>str){
                if(m[str]>0){arr[m[str]-1]++;}
                i++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){cout <<"YES ";}
            else{cout <<"NO ";}
        }
        cout<<endl;
    }
}