#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int u=__gcd(a,b);
    cout<<a/u<<"/"<<b/u;
    return 0;
}
