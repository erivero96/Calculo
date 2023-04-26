#include <iostream>
#include <cmath>
using namespace std;

float funcion(float x)
{
    return 1 + (x*x);
}

float R(float n, float a, float b)
{
    float deltax = (b - a) / n;
    float suma = 0;
    for (int i = 1; i <= n; i++) 
    {
        suma += funcion(a + i*deltax) * deltax;
    }
    return suma;
}

float M(float n, float a, float b)
{
    float deltax = (b - a) / n;
    float suma = 0;
    for (int i = 0; i < n; i++) 
    {
        suma += funcion(a + i*deltax + deltax/2) * deltax;
    }
    return suma;
}

float L(float n, float a, float b)
{
    float deltax = (b - a) / n;
    float suma = 0;
    for (int i = 0; i < n; i++) 
    {
        suma += funcion(a + i*deltax) * deltax;
    }
    return suma;
}


int main()
{   
    float n = 3;   // Número de rectángulos
    float a = -1;     // Límite inferior del intervalo de integración
    float b = 2;      // Límite superior del intervalo de integración

    float sumaR = R(n, a, b);
    float sumaL = L(n, a, b);
    float sumaM = M(n, a, b);

    cout << "Suma de Riemann por derecha: " << sumaR << endl;
    cout << "Suma de Riemann por izquierda: " << sumaL << endl;
    cout << "Suma de Riemann por medio: "<<sumaM << endl;

    return 0;
}
