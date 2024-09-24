#include <stdio.h>
   int main() {

int number1 = 30;  float number2 = 40.5;   
 if (30 && 40.5 >= 60){      
    printf("valores maiores que 60");
 }
 else{
     printf(" valores menores que 60");
   }


int algoritmo = 4;    
printf("\n digite o numero do dia:");
    scanf("%d", &algoritmo);
switch (algoritmo){

case 1: printf("segunda-feira \n");
      break;
case 2: printf("terca-feira \n");
      break;
case 3: printf("quarta-feira \n");
      break;
case 4: printf("quinta-feira \n"); 
      break;
case 5: printf("sexta-feira \n");
      break;
case 6: printf("sabado \n" );
      break;
case 7: printf("Domingo \n");
      break;
default: printf(" valor do dia invalido");
      break;
    }

int numero;
printf("\n digite o numero do mes:");
scanf("%d", &numero);

switch (numero){
case 1: printf("janeiro");
    break;
case 2: printf("fevereiro");
    break;
case 3: printf("Marco");
    break;
case 4: printf("Abril");
    break;
case 5: printf("Maio");
    break;
case 6: printf("Junho");
    break;
case 7: printf("Julho");
    break;
default: printf("mes invalido");
    break;
    }

  int cont;     
       for ( cont = 0; cont < 10; cont++){
       printf(" %d", cont);
       }
    }
   
