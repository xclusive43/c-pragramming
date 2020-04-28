//switch  case using do-whileloop.c//
#include<stdio.h>
int main()
{ int number;
char all;
int i;
printf("enter all to see the data of all the students of BCA 1ST SEM:\n");
scanf("%s", &all);
 switch(all)
        {case 'all':
         case 'ALL':
   case 'all':printf("NAME:AJAY PRAJAPATI\nSL/NO,:01\nBLOCK: BCA 1st SEM\nATTENDENCE: 98%");
  printf("NAME:AFSANA RHAMAN\nSL/NO,:02\nBLOCK: BCA 1st SEM\nATTENDENCE: 99%");
  printf("NAME:BISHAL SAHA\nSL/NO,:03\nBLOCK: BCA 1st SEM\nATTENDENCE: 79%");
  printf("NAME:DOI LOLLEN\nSL/NO,:04\nBLOCK: BCA 1st SEM\nATTENDENCE: 76%");
  printf("NAME:PERTIN\nSL/NO,:05\nBLOCK: BCA 1st SEM\nATTENDENCE: 77%");
  printf("NAME:AJOY DEBNATH\nSL/NO,:06\nBLOCK: BCA 1st SEM\nATTENDENCE: 80%");
  printf("NAME:RAJIB DAS\nSL/NO,:07\nBLOCK: BCA 1st SEM\nATTENDENCE: 77%");
  printf("NAME:PAGGE NYROEE\nSL/NO,:08\nBLOCK: BCA 1st SEM\nATTENDENCE: 88%");
  printf("NAME:TABA NUNU\nSL/NO,:09\nBLOCK: BCA 1st SEM\nATTENDENCE: 79%");
  printf("NAME:TAKAM PYEING\nSL/NO,10\nBLOCK: BCA 1st SEM\nATTENDENCE: 75%");
  printf("NAME:RISHI RAJ PILLA\nSL/NO,:11\tBLOCK: BCA 1st SEM\nATTENDENCE:87%");
  printf("NAME:KALPO KOLLITA\nSL/NO,:12\nBLOCK: BCA 1st SEM\nATTENDENCE: 78%");
  printf("NAME:CHINBING HUBEY\nSL/NO,:13\nBLOCK: BCA 1st SEM\nATTENDENCE: 54%");
  printf("NAME:VIKAS SHINGHAL\nSL/NO,:14\nBLOCK: BCA 1st SEM\nATTENDENCE: 76%");
  printf("NAME:SOBIK BHATACHAGREE\nSL/NO,:15\nBLOCK: BCA 1st SEM\nATTENDENCE: 45%");
                                                                           break;
  default:  printf("number save here only upto 15");
                                                                           break;
		}
        
i=0;
do
  { printf("enter the numbers that you want to display:\t");
scanf("%s",&number);
       switch(number)
     {

       case '2':printf("NAME:AJAY PRAJAPATI\nSL/NO,:01\nBLOCK: BCA 1st SEM\nATTENDENCE: 98%\n");
                                                                                  break;
 
 case '1':printf("NAME:AFSANA RHAMAN\nSL/NO,:02\nBLOCK: BCA 1st SEM\nATTENDENCE: 99%\n");
 break;
  
 case '3':printf("NAME:BISHAL SAHA\nSL/NO,:03\nBLOCK: BCA 1st SEM\nATTENDENCE: 79%\n");
 break;
  
 case '4':printf("NAME:DOI LOLLEN\nSL/NO,:04\nBLOCK: BCA 1st SEM\nATTENDENCE: 76%\n");
 break;
  
 case '5':printf("NAME:PERTIN\nSL/NO,:05\nBLOCK: BCA 1st SEM\nATTENDENCE: 77%\n");
 break;
  
 case '6':printf("NAME:AJOY DEBNATH\nSL/NO,:06\nBLOCK: BCA 1st SEM\nATTENDENCE: 80%\n");
 break;

 case '7':printf("NAME:RAJIB DAS\nSL/NO,:07\nBLOCK: BCA 1st SEM\nATTENDENCE: 77%\n");
 break;
  
 case '8':printf("NAME:PAGGE NYROEE\nSL/NO,:08\nBLOCK: BCA 1st SEM\nATTENDENCE: 88%\n");
 break;
  
 case '9':printf("NAME:TABA NUNU\nSL/NO,:09\nBLOCK: BCA 1st SEM\nATTENDENCE: 79%\n");
 break;
  
 case '10':printf("NAME:TAKAM PYEING\nSL/NO,10\nBLOCK: BCA 1st SEM\nATTENDENCE: 75%\n");
 break;
 
 case '11':printf("NAME:RISHI RAJ PILLA\nSL/NO,:11\tBLOCK: BCA 1st SEM\nATTENDENCE:87%\n");
 break;
  
 case '12':printf("NAME:KALPO KOLLITA\nSL/NO,:12\nBLOCK: BCA 1st SEM\nATTENDENCE: 78%\n");
 break;
  
 case '13':printf("NAME:CHINBING HUBEY\nSL/NO,:13\nBLOCK: BCA 1st SEM\nATTENDENCE: 54%\n");
 break;
  
 case '14':printf("NAME:VIKAS SHINGHAL\nSL/NO,:14\nBLOCK: BCA 1st SEM\nATTENDENCE: 76%\n");
 break;
  
 case '15':printf("NAME:SOBIK BHATACHAGREE\nSL/NO,:15\nBLOCK: BCA 1st SEM\nATTENDENCE: 45%\n");
 break;
	default:printf("number save here only upto 15");
	               break;			
        }
       
    i++;
    } while(i<15);
return 0;
}

