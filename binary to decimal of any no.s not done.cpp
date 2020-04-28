#include<stdio.h>
int main()
{ int bnum,rem,bnum1,dec,j,flag;
dec=0;
j=1;
flag=0;
printf("enter any binary number:");
scanf("%d", &bnum);
bnum1=bnum;
while(bnum!=0)
{ rem=bnum%10;
if((rem==0)||(rem==1))
{
 flag=1;
dec=dec+rem*j;
j=j*2;
bnum=bnum/10;
}
else
{ flag=0;
   break;
}
if (flag==1)
{
printf("\n the decimal equivalent value if binary %d is:%d", bnum1, dec); 
}
else
{printf("\n enter the binary number!!!");
return 0;
}
}
}
