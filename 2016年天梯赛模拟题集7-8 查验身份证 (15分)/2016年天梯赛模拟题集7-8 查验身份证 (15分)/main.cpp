//
//  main.cpp
//  2016年天梯赛模拟题集7-8 查验身份证 (15分)
//
//  Created by 张亮 on 2021/1/20.
//

#include <iostream>
using namespace std;
int quan[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char yan[]={'1','0','X','9','8','7','6','5','4','3','2'};
int main() {
    int pass=1;
    int n;
    cin>>n;
    string* a=new string[n];
    for(int i=0;i<n;i++)
    {
        int sum=0,heli=1;
        cin>>a[i];
        for(int ii=0;ii<17;ii++)
        {
            if(a[i][ii]>='0'&&a[i][ii]<='9')
                sum+=(a[i][ii]-'0')*(quan[ii]);
            else
            {
                heli=0;
                break;
            }
        }
        int mo=sum%11;
        if(yan[mo]!=a[i][17]||heli==0)
        {
            cout<<a[i]<<endl;
            pass=0;
        }
    }
    if(pass)
        cout<<"All passed"<<endl;
    return 0;
}
