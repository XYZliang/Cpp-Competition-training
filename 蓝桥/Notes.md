1. # 1004[递归]母牛的故事

   数组全部初始化：

   - 当数组位全局变量时，系统默认全部初始化为0.

   - 当局部变量时，只能初始化为0

     ```c++
     int sum0[100]={0};//全部为0
     int sum1[100]={1};//只有sum[0]被初始化为了1
     ```
     - 使用遍历复制：
       使用for循环或者

     ```c++
     #include <cstring>//必须引用
     memset(sum,0,sizeof(sum));
     //memset(头地址,初始化数字,长度);
     ```

     对于memset，主要用于字符串的替换，当用在数组上时，只能初始化为0或者-1。
     
     > （memset是以字节为单位进行赋值，每个都用 ASCII为1的字符去填充，转为二进制后，1就是00000001,占一个字节。而一个int类型是4字节，合一起就是 00000001000000010000000100000001，相当于(1<<24)+(1<<16)+(1<<8)+1 = 16843009）来自[memset另类初始化测试](https://blog.csdn.net/synapse7/article/details/9884135/)


2. # 1250: [蓝桥杯2015初赛]方程整数解

   求平方根

   ```c++
   #include <cmath>
   double sqrt(double);
   ```

   存在输入结束的，可以用这三种：
   
   ```c++
   while(scanf("%d",&a)!=EOF);//EOF在系统中认为是-1
   while(～scanf("%d",&a));//～按位取反。若为EOF（-1），～（-1）即为0
   while(cin>>a);//cin返回值为即为输入数据。若为EOF则返回0
   ```
   
3. # 1253: [蓝桥杯2015初赛]牌型种数
   
   对DFS、BFS接触比较少！！！！！！！！！！
   
   ```c++
   void dts(int num,int time)
   {
       //time++ X
       if(num>13||time>13)
           return;
       if(num==13&&time==13)
       {
           plan++;
           return;
       }
       time++;//注意time++的位置
       for(int i=0;i<=4;i++)
       {
           //dts(num+i,++time); X
           dts(num+i,time);
       }
   }
   ```
   
4. # 1254: [蓝桥杯 2015 初赛\] 手链样式

   ```c++
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
   ```

   

