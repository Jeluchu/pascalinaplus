#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <complex.h>
#include <unistd.h>
#include <ctype.h>
#include <cctype>

#include "interfaz.h"
#include "opbasic.h"
#include "raiz.h"
#include "porcentajes.h"
#include "potencias.h"
#include "escritura.h"
#include "lecturas.h"

/*
//ERRORES
int leerNumero()
{
   int numero = -1;
   __fpurge(stdin);
   scanf("%i", &numero );
   return numero;
}
*/

void pausa() {
  system("setterm -cursor off");
  __fpurge(stdin);
  printf(
    "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
    "┃\t  Pulsa" VERDE " 'ENTER' " NORMAL "para para continuar\t      ┃\n"
    "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
  while(getchar()!='\n');
}

int main(){

  int OpcionM, Opcion1, Opcion2, Opcion3, Opcion4, Opcion5, Opcion6, Opcion7, Opcion8, Opcion9, Opcion10;

    //inicio();

  crear_archivo();

  do{
    system("setterm -cursor on");
    menu();
    printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
    OpcionM = leerNumero();

    switch (OpcionM) {

      /* OPERACIONES BÁSICO */
      case 1:
        menu_basico();
        printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
        fflush(stdout);
        Opcion1 = leerNumero();

        switch (Opcion1) {
          case 1:
            suma();
            pausa();
          break;

          case 2:
            resta();
            pausa();
          break;

          case 3:
            multiplicacion();
            pausa();
          break;

          case 4:
            division();
            pausa();
          break;

          case 5:
            restodivision();
            pausa();
          break;

          case 6:
            mediaritmetica();
            pausa();
          break;

          case 7:
            digitalizadornumerico();
            pausa();
          break;

          case 8:
            sumafracciones();
            pausa();
          break;

          default: printf(ROJO "\t  Por favor seleccione una opción correcta\n\n" NORMAL);
          pausa();
        }

    break;


    case 2: /* RAÍCES */

	   menu_raiz();
     printf(AZUL "\t  Escoge la opción deseada: " NORMAL);
     fflush(stdout);
     Opcion2 = leerNumero();

     switch(Opcion2){
    	 case 1:
      	  raiz_cuadrada();
      	  pausa();
    	 break;

    	 case 2:
      	  raiz_cubica();
      	  pausa();
    	 break;

       default:
           printf("\n\n");
           printf(ROJO
                  "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
                  "┃\t  INTRODUCE UNA OPCIÓN CORRECTA\t\t      ┃\n"
                  "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" NORMAL);
           pausa();
      	}

      break;


      /* PORCENTAJES */
      case 3:
      	porcentaje();
      	pausa();
      break;


      /* POTENCIAS */
      case 4:
      	potencia();
      	sleep(5);
      break;


      /* GEOMETRÍA */
      case 5:

      break;

      /* TROGONOMETRÍA */
      case 6:

      break;

      /* SALIDA DEL PROGRAMA */
      case 0:
        return EXIT_SUCCESS;
      break;

    default:
    printf(ROJO
           "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
           "┃\t  INTRODUCE UNA OPCIÓN CORRECTA\t\t      ┃\n"
           "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n" NORMAL);
        pausa();
    }

  }while(OpcionM!=0);
}
