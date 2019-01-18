#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        string str;
        cin >> str;
        int n=str.length();    
        string newstr;
        if(k==2){
            if(n>2 && n%2==1){cout<<"NO"<<endl;}
            else{
                string test1,test2;
               for(int i=0;i<n;i++){
                   test1+=i%2+48;
                   test2+=(i+1)%2+48;
                }
                int flag1=1,flag2=1;
                for(int i=0;i<n;i++){
                   if(str[i]=='?'){continue;}
                   if(test1[i]!=str[i]){flag1=0;}
                   if(test2[i]!=str[i]){flag2=0;}
                   if(flag1==0 && flag2==0){break;}
                }
                if(flag1==0 && flag2==0){cout <<"NO"<<endl;}
                else if(flag1==1){cout <<test1<<endl;}
                else {cout << test2<<endl;}
                }
                continue;
        }
        for(int i=0;i<n;i++){
            int left=i-1;
            if(left==-1){left=n-1;}
            int right=(i+1)%n;
            int val1=-1,val2=-1;
            if(str[left]!='?'){val1=(int)str[left]-48;}
            if(str[right]!='?'){val2=(int)str[right]-48;}
            if(str[i]!='?'){
                if((val1==str[i]-48&& left!=i) || (val2==str[i]-48&& right!=i)){
                    newstr="NO";
                    break;}
                newstr+=str[i];
                continue;}
            for(int j=0;j<k;j++){
                if(j!=val1 && j!=val2){
                    str[i]=(j+48);
                    newstr+=(j+48);
                    break;
                }
            }
        }
        cout << newstr<<endl;
    }
}
