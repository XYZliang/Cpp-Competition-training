//
//  main.cpp
//  2016年天梯赛模拟题集 7-3 A-B (20分)
//
//  Created by 张亮 on 2021/1/19.
//

#include <iostream>
using namespace std;
bool con(char c,string d)
{
    for(int i=0;i<d.length();i++)
    {
        if(c==d[i])
            return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int* can=new int[a.length()];
    for(int i=0;i<a.length();i++)
    {
        if(con(a[i],b))
            can[i]=0;
        else
            can[i]=1;
    }
    for(int i=0;i<a.length();i++)
    {
        if(can[i])
            cout<<a[i];
    }
    cout<<endl;
    return 0;
}
