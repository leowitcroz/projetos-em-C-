#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int razao(float a, float b, float &div)
{

    div = a / b;
}

int main()
{

    float a;
    float b;
    float c;

    cout << "Escreva 2 números quaisquer: " << endl;
    cin >> a;
    cin >> b;

    if (b != 0)
    {
        razao(a, b, c);
        cout << c;

        return 1;
    }
    else
    {

        cout << " nao foi possivel realizar a divisao";
        return 0;
    }
}
