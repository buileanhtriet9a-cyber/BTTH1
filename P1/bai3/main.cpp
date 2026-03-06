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
