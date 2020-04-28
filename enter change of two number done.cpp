#include<stdio.h>
 main()
{ int c,d,e;
printf("\n enter the number at location c: & atlocation d:");
scanf("%d", &c);
scanf("%d", &d);
e=c;
c=d;
d=e;
printf("\n enter the number at location c:%d \n enter the number at location d:%d", d, c);
return 0;
}
