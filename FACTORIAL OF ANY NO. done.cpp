#include<stdio.h>
 main()
 {
    int fact,i,n;
    fact=1;
   char a;
   while(1)
   {
   printf("\n1.factorial of any number\n");
   printf("2.exit\n");
   printf("enter the following to perform factorial\n:");
   scanf("%s",&a);
   
       switch (a)
   {
   	case '1': 
   	         printf("Enter the number\n:");
             scanf("%d", &n);
              for(i=1; i<=n; ++i)
            {
             fact=fact*i;
             }
             printf("Factorial of %d is %d\n", n, fact); 
             break;
    case '2':
	        return 0;
			break;
    default:printf("please enter a valid input");
	        break;       
    
    }
  }
        return 0;
}

 
