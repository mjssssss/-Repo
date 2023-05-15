//输入，按某种顺序输出
#include<stdio.h>
int main()
{
   int n,i;
   scanf("%d",&n);//scanf在读取数值中会跳过空格制表符以及换行符
   //scanf把\n当字符读取时值为10，就是LF的ASCll码
   int a[50]={0};
   char ch[10][30]={0};
   //这里的输入方式需要注意，这里肯定用%s整体输入比较简单因为有很多字符串
   //但是我们又要对每一个字符串进行处理，所以我们把字符串之间横着放入二维数组的一维数组里
   for(i=0;i<n;i++)
   {
    scanf("%s",&ch[i]);//.ch[i]作为i行的首元素，代表该行的地址
   }
   for(i=0;i<n;i++)
   {
    scanf("%d ",&a[i]);
   }
   for(int k=0;k<n;k++)
   {
    printf("%s\n",ch[a[k]]);
   }
   return 0;
}