#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<a*d+c*b<<"/"<<b*d<<endl;
    cout<<a*d-c*b<<"/"<<b*d<<endl;
    cout<<a*c<<"/"<<b*d<<endl;
    cout<<a*d<<"/"<<b*c;
    return 0;
}
/*Input: a=2 b=3 c=4 d=5
  Output: 22/15
          -2/15
          8/15
          10/12
  Hàm tính toán các phép tính cộng trừ nhân chia giữa hai phân số*/
