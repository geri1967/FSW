#include <conio.h>
#include<stdlib.h>
#include <iostream>

void mistery(int x)
{
	if(x%15==0)
	  printf("fizzbuzz");
	else if(x%3==0)  
	  printf("fizz");
	    else if(x%5==0)  
	           printf("buzz");
	          else printf(" ");
}

int main()
{
   int jwb=0,x;
   while (jwb==0)
   {
   	  system("cls");
      printf("Masukkan nilai X= ");scanf("%d",&x);
      mistery(x);
      printf("\n\nMau Ulang Lagi(0))= ");scanf("%d",&jwb);
	  //scanf("%c",&jwb)mmmmmm;
   }
}
