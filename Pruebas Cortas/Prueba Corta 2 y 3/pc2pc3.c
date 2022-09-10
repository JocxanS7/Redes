#include <stdio.h>
#include<string.h>
#include <math.h>

//Codigo extraido de:
// https://www.tutorialspoint.com/conversion-of-hex-decimal-to-integer-value-using-c-language
int hextodc(char *hex){
   int y = 0;
   int dec = 0;
   int x, i;
   for(i = strlen(hex) - 1 ; i >= 0 ; --i){
      if(hex[i]>='0'&&hex[i]<='9'){
         x = hex[i] - '0';
      }
      else{
         x = hex[i] - 'A' + 10;
      }
      dec = dec + x * pow(16 , y);// converting hexadecimal to integer value ++y;
   }
   return dec;
}

int main() {

    char s= 'h'; 
    char hex[2] = "F";

    int n = hextodc(hex);
    printf("Con un numero convertido de Hexadecimal a Decimal %d \n", n );
    printf("Corrimiento de 16 on un numero convertido %d\n",n = n << 16);
    printf("Corrimiento de +16 on un numero convertido %d\n",n = n << 16); 

    //Pruebas con un numero decimal
    int i =1;
    printf ("Con un numero iniciado %d\n", i);
    printf("Corrimiento de 1 con un numero iniciado %d\n", i= i << 1); 

    //Mover 15 a la izquierda para que se vuelva 0
    printf("Corrimiento de 15+ con un numero iniciado %d\n", i= i << 15);

    //En caso de ser mayor a 16 bits muevo 32 
    //Por lo que seria mover otros 15
    printf("Corrimiento de 16+ con un numero iniciado %d\n", i= i << 16);
    
    
    
    return 0; 
}
