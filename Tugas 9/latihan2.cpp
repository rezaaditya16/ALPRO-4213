#include <iostream>
using namespace std;

struct sepeda{
    string merk = "polygon";
    string type = "sepeda gunung";
    int tahun = 2013;
    string harga = "2.000.000";

};
struct sepeda mysepeda;

int main(){



    cout<<"SEPEDA   :"<<mysepeda.merk<<endl;
    cout<<"MERK     :"<<mysepeda.type<<endl;
    cout<<"TAHUN    :"<<mysepeda.tahun<<endl;
    cout<<"HARGA    :"<<mysepeda.harga<<endl;
return 0;
}
