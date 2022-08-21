#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

void atribquad(float l, float & area, float & peri,float & diagonal){

    area = l*l;
    peri = 4*l;
    diagonal = l*sqrt(2);



}

int main(){

  float l;
  float a;
  float p;
  float d;

   cin>> l;

    atribquad(l,a,p,d);

    cout<<"sua area é :"<<a;
    cout<<"seu perimetro é :"<<p;
    cout<<"sua diagonal é :"<<d;


}