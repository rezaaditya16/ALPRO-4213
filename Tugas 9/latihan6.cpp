#include <iostream>
using namespace std;

enum mobil {
  Supra_MK4,
  civic_Turbo,
  Tesla_Roader,
  BMW_M3,
  Mustang,
  Audi
};

int main() {
  mobil mycar = Supra_MK4;

  if (mycar == Supra_MK4) {
    cout << "Mobil saya keren wkwkw." <<endl;
  } else {
    cout << "mobil saya tetap keren xixixi." <<endl;
  }

  return 0;
}

