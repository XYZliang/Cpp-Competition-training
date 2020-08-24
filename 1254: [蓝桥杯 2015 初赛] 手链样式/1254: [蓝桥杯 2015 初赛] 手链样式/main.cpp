//
//  main.cpp
//  1254: [蓝桥杯 2015 初赛] 手链样式
//
//  Created by 张亮 on 2020/8/22.
//  From CSDN

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    string s="aaabbbbccccc";
    vector<string> v1;//vector容器，能存放各种类型的对象，类似于一个存放任何类型的动态数组，无需考虑长度 （头文件#include<vector>）
    int ans=0;
    do {
            int i = 0;
            for (;i<v1.size();++i)
            {
                if(v1[i].find(s)!=string::npos)break;//find 在字符串里查找自串。比如aabbcc中查找abbc，存在。string::npos表示无法找到
            }
            if(i!=v1.size())continue;//说明重复了，跳过
            //不重复的话，将链子复制并拼接，确保转动不重复
            string s2=s+s;
            v1.push_back(s2);//放入容器
            reverse(s2.begin(),s2.end());//反转链子（反正翻转） (头文件#include<algorithm>) 无返回值
            v1.push_back(s2);
            ans++;
        }
    while(next_permutation(s.begin(),s.end()));
    //next_permutation 列出这个序列的全部排列顺序。从右往左开始调整顺序，每调用一次出下一个顺序
    cout<<ans<<endl;
    return 0;
}
