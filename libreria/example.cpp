#include "example.h"

//namespace foobar
//{
//    int Example::getValue() const
//    {
//        return 99;
//    }
//}


int temperaturaspacientes(float temperaturas1, float temperaturas2)

{
   float temps[2]={temperaturas1,temperaturas2};

 
    int countfeber = 0;
    int countnormal = 0;
    int countweird = 0;
    for (int i = 0; i < 2; i++)
    {
        if (temps[i] > 35.5 && temps[i] <= 37.5)
        {
            countnormal = countnormal + 1;
        }
        else if (temps[i] > 37.5 && temps[i] < 41)
        {
            countfeber = countfeber + 1;
        }
        else
        {
            countweird = countweird + 1;
        }
    }
    if (countweird != 0)
        return -1;  //alguno de los datos ingresados son erroneos o improbables
    else if (countnormal == 2)
        return 1;   //ambos normal
    else if (countfeber == 2)
        return 0;   //ambos fiebre
    else 
        return 2;   //uno tiene fiebre y el otro no
}

int paroimpar(int num1, int num2)
{
    int resultado = 0;
    resultado = num1 + num2;
    if (resultado % 2 == 0)
        return 1;   //es par
    else
        return 0;   //no es par,?por lo que es impar
}