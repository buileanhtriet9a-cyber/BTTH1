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
/*Input: HoTen=Nguyen Van A a=8.5 b=9.5
  Output: 9
  Hàm tính điểm trung bình môn toán, văn của một học sinh*/
