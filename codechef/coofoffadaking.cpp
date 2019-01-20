#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
	int R ,C , k;
    cin >> R >> C >> k;
    int up,down,left,right;
    
    if(R-k>=1){up=R-k;}
    else{up=1;}

    if(R+k <=8){down=R+k;}
    else{down=8;}

    if(C-k>=1){left=C-k;}
    else{left=1;}

    if(C+k <=8){right=C+k;}
    else{right=8;}
    int area=(down-up)*(right-left);
    cout <<area<<endl;
}
}