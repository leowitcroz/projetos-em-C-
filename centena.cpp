#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int centena(int , int );


int main()
{
    int N;
    int cent;

    cout << "digite um numero: "<<endl;
    cin >> N;

    if (N != 0)
    {
        centena(N , cent);
    
    }
    else
    {
        return 0;
    }

    
}

int centena ( int N , int cent){


    cent = N/100;

    cout<< "O valor da sua centena: "<<endl;
    cout<< cent<<endl;


    return main();
}