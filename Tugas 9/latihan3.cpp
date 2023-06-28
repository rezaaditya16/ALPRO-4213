#include <iostream>
#include <math.h>
using namespace std;

typedef struct fungsi{
float Lpersegipanjang( int p,int l){
return p * l;
}
float Llingkaran(int r){
    float h =3.14*r*r;
return h;
}
float Vkerucut(int r, int t){
float h = 0.3*3.14*pow(r,2)*t;
return h;
}
float Bola(int r){
float h = 1.3 * 3.14 *pow(r,3);
return h;
}
}p;

 p mystruct;


int main(){
    cout<<"Luas persegi panjang     :"<<mystruct.Lpersegipanjang(10,4)<<endl;
    cout<<"Luas Lingkaran           :"<<mystruct.Llingkaran(10)<<endl;
    cout<<"Volume Kerucut           :"<<mystruct.Vkerucut(2,10)<<endl;
    cout<<"Bola                     :"<<mystruct.Bola(10)<<endl;
    return 0;
}

