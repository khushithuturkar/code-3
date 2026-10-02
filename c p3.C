
#include<stdio.h>
void main()
{

   float battery ;
   clrscr();
   printf("Enter battery value : ");
   scanf("%f" ,&battery);
   if(battery>=80){
      printf("Battery full.Robot is ready.");
  }
  else if (battery<=70){
   printf("Battery good.Robot can work.");
   }
   else if (battery>=20){
   printf("Battery low.Charge soon.");
   }
   else{
   printf("Critical battery!Robot stops.");
   }
   getch();
   }
