#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    private:
    string nama;
    int NIM;
    float nilai;

    public:
    string nama;
    int NIM;
     void beriNilai(mahasiswa &a, float nilai);
    friend class dosen;
};