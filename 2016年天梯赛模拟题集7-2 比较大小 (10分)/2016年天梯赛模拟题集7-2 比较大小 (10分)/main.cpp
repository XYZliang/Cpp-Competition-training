//
//  main.cpp
//  2016年天梯赛模拟题集7-2 比较大小 (10分)
//
//  Created by 张亮 on 2021/1/19.
//
#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a, a+3);
    cout<<a[0]<<"->"<<a[1]<<"->"<<a[2]<<endl;
    return 0;
}
