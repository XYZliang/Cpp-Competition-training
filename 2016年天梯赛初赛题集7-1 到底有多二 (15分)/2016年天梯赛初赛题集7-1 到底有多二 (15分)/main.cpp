//
//  main.cpp
//  2016年天梯赛初赛题集7-1 到底有多二 (15分)
//
//  Created by 张亮 on 2021/1/24.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    long long int b;
    cin>>b;
    string a=to_string(b);
    long long int two=0;
    long long int sum=0;
    for(unsigned int i=0;i<a.length();i++)
    {
        if(a[i]=='2')
            two++;
        if(a[i]!='-')
            sum++;
    }
    double end=100.0*two/sum;
    if(a[0]=='-')
        end*=1.5;
    if(a[a.length()]%2==0)
        end*=2;
//    if(end>=100)
//        printf("100.00%%\n");
//    else
        printf("%.2lf%%\n",end);
    return 0;
}
