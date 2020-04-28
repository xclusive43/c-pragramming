//switch  case using do-whileloop.c//
#include<stdio.h>
int main()
{ int number;
int i;

i=0;
do
  { printf("enter the numbers that you want to display:\t");
scanf("%s",&number);
       switch(number)
     {

    case '1': printf("ONE\n");
                     break;
    case '2':printf("TWO\n");
                   break;
    case '3': printf("THREE\n");
                     break;
    case'4':printf("FOUR\n");
                   break;
     case '5': printf("FIVE\n");
                     break;
    case'6':printf("SIX\n");
                   break;
     case '7': printf("SEVEN\n");
                     break;
    case'8':printf("EIGHT");
                   break;
     case '9': printf("NINE");
                     break;
    case'10':printf("TEN");
                   break; 
	default:printf("number save here only upto 10");
	               break;			
        }
    i++;
    } while(i<6);
return 0;
}

