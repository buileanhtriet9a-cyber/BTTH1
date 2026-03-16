#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int u=__gcd(a,b);
    cout<<a/u<<"/"<<b/u;
    return 0;
}
/*Input: a=2 b=6
  Output: 1/3
  Input: a=5 b=10
  Output: 1/2
  Hàm dùng để rút gọn phân số về tối giản.*/
