// Program ce izracunat oplosje kugle.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14

//Funkcija za izracunavanje oplosja kugle.
float oplosje(int radijus){
	
	float oplosje;
	oplosje=4*PI*radijus*radijus;
	return oplosje;
}

int main(){
   int radijus;
   printf("Unesi radijus kugle:\n");
   scanf("%d",&radijus);
   float O=oplosje(radijus);
   printf("Oplosje kugle je %f\n",O);
   return 0;
}
