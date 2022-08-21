#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

    int IMC (int,float,float);


int main(){

    float Imc;
    int peso;
    float altura;

    cout<<"Digite sua altura e seu peso respectivamente: "<<endl;
    cin>>altura;
    cin>>peso;

    IMC(peso,altura,Imc);



}

int IMC (int peso,float altura,float Imc){

    Imc = peso/(altura*altura);

    if(Imc <= 18){

        cout<<"voce esta abaixo do peso";

    }else if (Imc >= 18 && Imc <= 24)
    {
        cout<<"Parabens, voce esta em seu peso normal!";
    }else if (Imc >= 25 && Imc <= 29)
    {
       cout<<"voce esta com sobrepeso";
    }else if (Imc >= 30 && Imc <= 34)
    {
        cout<<"voce esta com obesidade grau I";
    }else if (Imc >= 35 && Imc <= 39)
    {
        cout<<"voce esta com obesidade grau II";
    }else if (Imc > 40)
    {
        cout<<"voce esta com obesidade grau III";
    }


return 0;

}