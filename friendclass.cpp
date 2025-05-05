#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int nim;
    void showNim(){
        cout<<"No Induk = " <<nim<<endl;
    }
};


    int main() {
    Mahasiswa mhs[1];         // array of 1 object of Mahasiswa
    mhs[0].showNim();         // use index to access array element

  


