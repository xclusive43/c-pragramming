#include<stdio.h>
 main()
 { 
 char a;
 printf("enter the value of character variable:");
 scanf("%c", &a);
  switch(a)
   { case 'a':
   	case 'A':printf("A");
             break;
	case 'e':
	case 'E':printf("E");
             break;
	case 'i':
	case 'I':printf("I");
	         break;
	case 'o':
	case'O':printf("O");
	        break;
			
	case'u':
	case'U':printf("U");
	        break;
	default:printf("wrong input by lapsang tamang");        
					    }
 }
