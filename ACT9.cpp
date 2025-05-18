#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
    private:
    string nama;
    int NIM;

    public:
    friend class dosen;
};