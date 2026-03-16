#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if (b==2){
        if ((c%4==0&&c%100!=0)||c%400==0){/*Xem thử có phải năm nhuận hay không*/
            if (a==29) cout<<"1/3/"<<c;
            else cout<<a+1<<"/"<<b<<"/"<<c;
        }
        else{
            if (a==28) cout<<"1/3/"<<c;
            else cout<<a+1<<"/"<<b<<"/"<<c;
        }
    }
    else{
        if (a==31 && (b==1||b==3||b==5||b==7||b==8||b==10||b==12)){/*Kiểm tra tháng có 31 ngày*/
            if (b==12) cout<<"1/1/"<<c+1;/*Kiểm tra phải tháng 12 hay không có thì qua năm mới không thì qua tháng mới*/
            else cout<<"1/"<<b+1<<"/"<<c;
        }
        else if (a==30){
            if (b==4 || b==6 || b==9 || b==11)/*Kiểm tra những phải chỉ có 30 ngày có thì qua tháng mới không thì cộng thêm 1 ngày*/
                cout<<"1/"<<b+1<<"/"<<c;
            else
                cout<<a+1<<"/"<<b<<"/"<<c;
        }
        else cout<<a+1<<"/"<<b<<"/"<<c;/*Những ngày còn lại thì cộng thêm 1 ngày*/
    }

    return 0;
}
/*Input: a=31 b=3 c=2020
  Output: 1/4/2020
  Input: a=29 b=2 c=2020
  Output: 1/3/2020
  Hàm giúp cho người dùng biết ngày tiếp theo là ngày bao nhiêu*/
