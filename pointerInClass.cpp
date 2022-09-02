#include <iostream>
using namespace std;

class bangun
{
private:
    float x, y;

public:
    float luas() { return x * y; };
    bangun();
    bangun(float panjang, float lebar);
};

// overloading konstruktor
bangun::bangun()
{
    x = 10;
    y = 10;
}

bangun::bangun(float panjang, float lebar)
{
    x = panjang;
    y = lebar;
}

int main()
{
    bangun a;             // Membuat objek kelas bangun
    bangun *pointerKelas; // membuat pointer kelas bangun
    pointerKelas = &a;    // Memberikan alamat objek kelas pada pointer
    cout << "Nilai dari a.luas() adalah = " << a.luas() << endl;
    cout << "Nilai pointerKelas->luas() adalah = " << pointerKelas->luas() << endl;
    return 0;
}