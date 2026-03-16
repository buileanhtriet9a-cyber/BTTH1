#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a*d>c*b)/*Kiểm tra xem phân số nào lớn hơn*/
        cout<<a<<"/"<<b;
    else cout<<c<<"/"<<d;
    return 0;
}
/*Input: a=2 b=3 c=4 d=5
  Output: 4/5
  Hàm so sánh hai phân số xem số nào lớn nhất*/
