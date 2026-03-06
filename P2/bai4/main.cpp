#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if (b==2){
        if ((c%4==0&&c%100!=0)||c%400==0){
            if (a==29) cout<<"1/3/"<<c;
            else cout<<a+1<<"/"<<b<<"/"<<c;
        }
        else{
            if (a==28) cout<<"1/3/"<<c;
            else cout<<a+1<<"/"<<b<<"/"<<c;
        }
    }
    else{
        if (a==31 && (b==1||b==3||b==5||b==7||b==8||b==10||b==12)){
            if (b==12) cout<<"1/1/"<<c+1;
            else cout<<"1/"<<b+1<<"/"<<c;
        }
        else if (a==30){
            if (b==4 || b==6 || b==9 || b==11)
                cout<<"1/"<<b+1<<"/"<<c;
            else
                cout<<a+1<<"/"<<b<<"/"<<c;
        }
        else cout<<a+1<<"/"<<b<<"/"<<c;
    }

    return 0;
}
