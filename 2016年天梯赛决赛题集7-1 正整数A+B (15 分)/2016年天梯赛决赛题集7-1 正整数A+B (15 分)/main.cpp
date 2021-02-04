//
//  main.cpp
//  2016年天梯赛决赛题集7-1 正整数A+B (15 分)
//
//  Created by 张亮 on 2021/2/4.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    string a;
    getline(cin,a);
    int division=(int) a.find(' ');
    int len=(int)a.length();
    int o=0,t=0;
    bool one=true,two=true;
    for(int i=0;i<division;i++)
    {
        if(a[i]<'0'||a[i]>'9')
        {
            one=false;
            break;
        }
        else
        {
            o*=10;
            o+=(a[i]-'0');
        }
    }
    for(int i=division+1;i<len;i++)
    {
        if(a[i]<'0'||a[i]>'9')
        {
            two=false;
            break;
        }
        else
        {
            t*=10;
            t+=(a[i]-'0');
        }
    }
    if(o<1||o>1000)
        one=false;
    if(t<1||t>1000)
        two=false;
    if(one&&two)
        cout<<o<<" + "<<t<<" = "<<o+t<<endl;
    else
    {
        if(one)
            cout<<o<<" + "<<"?"<<" = "<<"?"<<endl;
        else if(two)
            cout<<"? + "<<t<<" = "<<"?"<<endl;
        else
            cout<<"? + ? = ?"<<endl;
    }
    return 0;
}
