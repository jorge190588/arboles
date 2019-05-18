#include <iostream>
#include<conio.h>
#include<stdio.h>
#include <stdlib.h>

int suma(int inicio, int maximo, int totalSuma=0){
	inicio=inicio+1;
   totalSuma=totalSuma+inicio;
   cout << "suma: " << totalSuma<< endl;
   if (inicio<maximo){
   	suma(inicio,maximo,totalSuma);
   }
   return totalSuma;
}

int main(){
	suma(0,5);
   system("pause");
}