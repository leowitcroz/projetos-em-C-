#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;


int maior(int,int,int);

int main(){

    int num1;
    int num2;
    int num3;

    cout<<"digite 3 valores: "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;

    maior(num1,num2,num3);




}

int maior(int num1,int num2,int num3){

    if (num1 > num2 & num1 > num3)
    {
        cout<<"O maior dos 3 vai ser o: "<<num1<<endl;
         return main();

    }else if(num2 > num1 & num2 > num3){

        cout<<"O maior dos 3 vai ser o: "<<num2<<endl;
         return main();

    }else if(num3 > num1 & num3 > num2){

        cout<<"O maior dos 3 vai ser o: "<<num3<<endl;
         return main();
    }else{

       cout<<"Os valores sao iguais a : "<<num3<<endl;    

       return main();
    }
    


} 