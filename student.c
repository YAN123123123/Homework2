#include <iostream>
#include<math.h>
using namespace std;
int main()
{
char c;
 while (1)
 {
 cout<<endl;
 cout<<"输入0可以退出！输入1则继续！"<<endl;
 cin>>c;
 if (c == '0')
  {
   return 0;
  }
 cout << "请输入一个0-255之间的数：" << endl;
  unsigned char a;
  scanf("%d", &a);
  int ch[8], i, s = 0;
  for (i = 0; i < 8; i++)
  {
   ch[i] = a % 2;
   a /= 2;
  }
  cout << "其二进制数为：" << endl;
  for (i = 7; i >= 0; i--)
   cout << ch[i];
  cout << endl;
  if (ch[7] == 1)
   cout << "性别为女！" << endl;
  else
   cout << "性别为男！" << endl;
  for (i = 0; i < 7; i++)
  {
   s = s + ch[i] * pow(2, i);
  }
  cout << "该学生的学号为：" << s << endl;
 }
return 0;

}
