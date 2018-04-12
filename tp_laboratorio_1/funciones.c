#include <stdio.h>
#include <stdlib.h>
#define MAXINT 32767
#define MAXINTRESTA -32767


/** \brief Funcion para sumar 2 numeros de tipo Entero.
 *
 * \param num1 int Primer numero entero a ser sumado
 * \param num2 int Segundo numero entero a ser sumado
 * \param resultadoAuxiliar long Resultado de la suma, tipo long.
 * \return int retorno. -1 error overflow, 0 todo ok
 * En esta funcion, utilizamos al IF para determinar que, si el resultado es menor o igual al maximo de enteros.
 */
int sumar(int num1, int num2, int *resultado)
{
    long resultadoAuxiliar;
    int retorno=-1;
    resultadoAuxiliar=num1+num2;
    if(resultadoAuxiliar<=MAXINT)
    {
        *resultado=resultadoAuxiliar;
        return 0;
    }
    return retorno;

}

/** \brief Funcion para restar 2 numeros de tipo Entero.
 *
 * \param num1 int Primer numero entero
 * \param num2 int Segundo numero entero que se restara al primero.
 * \param resultadoAuxiliar long Resultado de la resta, tipo long.
 * \return int retorno. -1 error overflow, 0 todo ok
 * En esta funcion, utilizaremos al IF para determinar que, si el resultado es mayor o igual al numero MAXIMO de enteros negativos.
 */
int restar(int num1, int num2, int *resultado)
{
    long resultadoAuxiliar;
    int retorno=-1;
    resultadoAuxiliar=num1-num2;
    if(resultadoAuxiliar>=MAXINTRESTA)
    {
        *resultado=resultadoAuxiliar;
        return 0;
    }
    return retorno;
}

int multiplicar(int num1, int num2, int *resultado)
{
    long resultadoAuxiliar;
    int retorno=-1;
    resultadoAuxiliar=num1*num2;
    if(resultadoAuxiliar<=MAXINT)
    {
        *resultado=resultadoAuxiliar;
        return 0;
    }
    return retorno;
}

float dividir(float num1, float num2, float *resultado)
{
    float resultadoAuxiliar;
    int retorno=-1;
    if(num2=='0')
    {
        printf("ERROR, NO SE PUEDE DIVIDIR POR 0");
        return retorno;
    }
    resultadoAuxiliar=num1/num2;
    if(resultadoAuxiliar>=MAXINTRESTA)
    {
        *resultado=resultadoAuxiliar;
        return 0;
    }
    return retorno;
}

int factor(int num1,  int *resultado)
{
    int b,fact=1,retorno =-1;
    if(num1=='0')
    {
        printf("Error");
        return retorno;
    }
    for(b=num1;b>1;b--)
    {
        fact=fact*b;
    }
    *resultado=fact;

    return 0;
}

