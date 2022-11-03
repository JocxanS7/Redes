// #include <stdio.h>


// int main()
// {
//     char buffer[1024];
//     char str[80] = "This is - www.tutorialspoint.com - website";
//     const char s[2] = " ";
//     char *token;
   
// //    /* get the first token */
//     token = strtok(str, s);

//     //char *token = strtok(espacio_cadena, " ");
//     int n = 1;

//     while( token != NULL ) {
//         n+=1;
//         printf( " %s\n", token );
//         token = strtok(NULL, " ");
//     }

//     // char *token2 = strtok(espacio_cadena, " ");
//     // char* argv[n];
//     // while( token2 != NULL ) {
//     //     printf( " %s\n", token2 );
//     //     argv[n] = token2;
//     //     n+=1;
//     //     token2 = strtok(NULL, " ");
//     // }
    
    
//     // printf( "%s", argv[0]);

//     // while( token != NULL ) {
//     //     printf( " %s\n", token ); //printing each token
//     //     token = strtok(NULL, " ");
//     // }

//     // char argv[] = "Hola Mundo";
//     // printf( "Hola mundo." );

//     // getch(); /* Pausa */

//     return 0;
// }


#include <string.h>
#include <stdio.h>

int main () {
   char str2[1024]; 
   char str[1024] = "x";
   const char s[2] = " ";
   char *token;
   char *token2;

   if (strcmp(str,"x")==0){	
	    printf("Server prueba x: %s\n", str);
    }
   
  
   return(0);
}