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
    friend class dosen;
};