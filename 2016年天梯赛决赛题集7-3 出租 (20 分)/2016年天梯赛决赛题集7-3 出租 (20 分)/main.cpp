//
//  main.cpp
//  2016年天梯赛决赛题集7-3 出租 (20 分)
//
//  Created by 张亮 on 2021/2/4.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char * argv[]) {
    string a;
    cin>>a;
    int num[10]={0};
    int code[10]={0};
    for(int i=0;i<=9;i++)
    {
        num[a[i]-'0']++;
    }
    cout<<"int[] arr = new int[]{";
    bool first=true;
    int ii=0;
    for(int i=9;i>=0;i--)
    {
        if(num[i])
        {
            if (!first)
                cout<<",";
            else
                first=false;
            code[i]=ii++;
            cout<<i;
        }
    }
    cout<<"};"<<endl<<"int[] index = new int[]{";
    first=true;
    for(int i=0;i<11;i++)
    {
            if (!first)
                cout<<",";
            else
                first=false;
            cout<<code[a[i]-'0'];
    }
    cout<<"};"<<endl;
    return 0;
}
