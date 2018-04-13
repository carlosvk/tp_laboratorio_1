/**< TP NUMERO 1
Autor : Carlos Vieyra Keller.
Materia : Programacion / Laboratorio 1
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{

    int numeroUno=0,numeroDos=0,total,opcion=0;
    float totaldiv;
    char seguir='s';

    printf("******CALCULADORA******\n");
        while(seguir=='s')
        {
        printf("\n1- Ingrese o modifique el primer operando\n");
        printf("2- Ingrese o modifique el segundo operando\n");
        printf("3- Calcular suma (%d+%d)\n",numeroUno,numeroDos);
        printf("4- Calcular la resta  (%d-%d)\n",numeroUno,numeroDos);
        printf("5- Calcular la multiplicacion (%d*%d)\n",numeroUno,numeroDos);
        printf("6- Calcular la division (%d/%d)\n",numeroUno,numeroDos);
        printf("7- Calcular el factorial (%d)\n"),numeroUno;
        printf("8- Calcular todas las operaciones \n");
        printf("9- Salir\n\n");
        printf("PRIMER OPERANDO UTILIZADO : %d\n",numeroUno);
        printf("SEGUNDO OPERANDO UTILIZADO : %d\n",numeroDos);
        printf("\nOpcion :");
        scanf("%d", &opcion);


            switch(opcion)
            {
                case 1:
                    {
                printf("Primer operando : ");
                scanf("%d",&numeroUno);
                break;
        }
                case 2:
                    {
                printf("Segundo operando : ");
                scanf("%d",&numeroDos);
                break;
            }
                case 3:
                    {
                    if (sumar(numeroUno, numeroDos,&total)==0)
                    {
                    printf("\nEl resultado de la suma es %d\n", total);
                    }
                    else
                    {
                    printf("\nError Overflow\n");
                    }
                    break;
                }
                case 4:
                    {
                    if(restar(numeroUno,numeroDos,&total)==0)
                    {
                    printf("\nEl resultado de la resta es de %d\n", total);
                    }
                    else
                    {
                    printf("\nError Overflow\n");
                    }
                     break;
                }
                case 5:
                    {
                    if (multiplicar(numeroUno, numeroDos, &total)==0)
                {
                printf("\nEl resultado de la multiplicacion es %d\n", total);
                }
                else
                {
                printf("\nError Overflow\n");
                }
                 break;
                }
                case 6:
                    {
                if (dividir(numeroUno, numeroDos, &totaldiv)==0)
                {
                printf("\nEl resultado de la division es de %.2f\n", totaldiv);

                }
                else
                {
                printf("\nError Overflow\n");
                }
                     break;
                }
                case 7:
                    {
                    factor(numeroUno,&total);
                    printf("El resultado de la factorizacion es :%d\n", total);
                    break;
                }
                case 8:
                    {
                        if (sumar(numeroUno, numeroDos,&total)==0)
                        {
                            printf("\nEl resultado de la suma es %d\n", total);
                        }
                        else
                        {
                        printf("\nError Overflow\n");
                        }

                        if(restar(numeroUno,numeroDos,&total)==0)
                        {
                        printf("\nEl resultado de la resta es de %d\n", total);
                        }
                        else
                        {
                        printf("\nError Overflow\n");
                        }

                        if (multiplicar(numeroUno, numeroDos, &total)==0)
                        {
                        printf("\nEl resultado de la multiplicacion es %d\n", total);
                        }
                        else
                        {
                        printf("\nError Overflow\n");
                        }

                        if (dividir(numeroUno, numeroDos, &totaldiv)==0)
                        {
                        printf("\nEl resultado de la division es de %.2f\n", totaldiv);

                        }
                        else
                        {
                        printf("\nError Overflow\n");
                        }

                        factor(numeroUno,&total);
                        printf("\nEl resultado de la factorizacion es :%d\n", total);
                        break;

                }
                case 9:
                    {
                    seguir='n';
                     break;
                }
                default:
                    {
                        printf("\nSe equivoco de opcion de menu\n");
                    }
    }//fin del switch

} //fin While
return 0;
}
