#include <stdio.h>
#include<string.h>
#include <math.h>


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
    char hex[11] = "F";
    unsigned char hexb[11] = "F";
    printf("%x \n",  hextodc(&s));
    //66  01100110 
    //99  10011001
    //printf ("%x\n", s);
    //printf("%x\n", s = ~s);
    //printf("%x\n", s= s << 4);  1111 1111 1111 1111
    //printf("%c\n", s= s >> 4);  1110 0000
    //printf("%x\n", s= s >> 8);  0000 0000 0000 1111  
    int i;
    unsigned int a,b;

    for(i =0  ; i < strlen(hex) - 1 ; ++i){
        hexb[0] = hex[i];
        a=  hextodc(hexb);
        //b = b << 4;
        //b = a|b;


    }
    
    printf("%x\n", b); 
    return 0; 
}


/*
 * C program to Convert Decimal to Hexadecimal
#include <stdio.h>
 
int main()
{
    long decimalnum, quotient, remainder;
    int i, j = 0;
    char hexadecimalnum[100];
 
    printf("Enter decimal number: ");
    scanf("%ld", &decimalnum);
 
    quotient = decimalnum;
 
    while (quotient != 0)
    {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalnum[j++] = 48 + remainder;
        else
             hexadecimalnum[j++] = 55 + remainder;
        quotient = quotient / 16;
    }
 
    // display integer into character
    for (i = j; i >= 0; i--)
            printf("%c", hexadecimalnum[i]);
    return 0;
}*/