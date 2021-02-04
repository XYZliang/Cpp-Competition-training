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
   
4. # getline/cin.getline

   cin.getline()是输入流对象的成员函数
   getline()是string类的成员函数
   
   ```c++
   string str;
   getline(cin,str);
   
   char str[20];
   cin.getline(str,20);//读取20-1个字符
   cout << str;
   ```
   
   对于getline()来说，cin.getline()在使用的时候，必须传入字符数组，并且还需要指定字符数组的长度

5. # 字符串查找：

   ```c++
   size_type find (value_type _Chr, size_type _Off = 0) const;
   //find()函数的第1个参数是被搜索的字符、第2个参数是在源串中开始搜索的下标位置
   size_type find (const value_type* _Ptr , size_type _Off = 0) const;
   //find()函数的第1个参数是被搜索的字符串，第2个参数是在源串中开始搜索的下标位置
   size_type find (const value_type* _Ptr, size_type _Off = 0, size_type _Count) const;
   //第1个参数是被搜索的字符串，第2个参数是源串中开始搜索的下标，第3个参数是关于第1个参数的字符个数（第三个参数是目标字符串的前n个字符。需>1且小于第一个参数的长度。）
   	int pos2 = str.find("A", 1, 1); // 从str的1位置开始往后找“A”
   	int pos3 = str.find("A", 0, 2); // 这里由于2超出了“A”的长度，所以返回-1
   	int pos4 = str.find("88A", 0, 3); // 从str的3位置开始往后找“88A”
   	int pos5 = str.find("88A", 0, 2); // 从str的0位置开始往后找“88”
   	int pos6 = str.find("88A", 9, 2); // 从str的9位置开始往后找“88”
   	int pos7 = str.find("88A", 0, 1); // 从str的0位置开始往后找“8”
   size_type find (const basic_string& _Str, size_type _Off = 0) const;
   //第1个参数是被搜索的字符串，第2参数是在源串中开始搜索的下标位置
   //结果为 string::size_type类型数据，即无符号整数类型，需要强制转换为int
   rfind()//为逆序，从后往前查，也返回下标。
   //查找字符串时，rfind的字符串也会反过来。
   //查找不到返回npos-1
   
   find_first_of()//函数可实现在源串中搜索某字符串的功能，该函数的返回值是被搜索字符串的第 1 个字符第 1 次出现的下标（位置）。若查找失败，则返回 npos。
   find_last_of()//函数同样可实现在源串中搜索某字符串的功能。与 find_first_of() 函数所不同的是，该函数的返回值是被搜索字符串的最后 1 个字符的下标（位置）。若查找失败，则返回 npos。
   参数同find()
     
   find_first_not_of()//函数可实现在源字符串中搜索与指定字符（串）不相等的第 1 个字符；
   find_last_not_of()//函数可实现在源字符串中搜索与指定字符（串）不相等的最后 1 个字符。
   ```

   
