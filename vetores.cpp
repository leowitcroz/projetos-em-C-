#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
#define N 5
#define G 5


int main()
{

    int vet[N];
    int vet2[G];
    int i;
    int j;

    cout << "digite 5 numeros para o primeiro vetor";
    for (i = 0; i < N; i++)
    {
        cin >> vet[i];
    }
    cout << "digite 5 numeros para o segundo vetor";
    for (i = 0; i < N; i++)
    {
        cin >> vet2[i];
    }

    for (i = 0; i < N; i++){

        for (j = 0; j < G ;j++){

             if (vet[i] == vet2[j])
            {

                cout << vet[i];
            }

        }
    }


}
