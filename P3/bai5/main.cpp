#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
int main(){
    float a,b;
    char HoTen[MAXN];
    cin.getline(HoTen,MAXN);
    cin>>a>>b;
    float DTB=(a+b)/2;
    cout<<setprecision(3)<<DTB;
    return 0;
}
