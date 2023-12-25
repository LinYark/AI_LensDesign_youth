#include<iostream>
#include"function_plus.h"
using namespace std;
int main()
{
    float a,b,result;
    cout<<"欢迎使用lzh智障加法器，请依次输入两个加数"<<endl;
    cin>>a>>b;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    result = function_add(a,b);
    cout<<"result="<<result<<endl;
    return 0;
}

