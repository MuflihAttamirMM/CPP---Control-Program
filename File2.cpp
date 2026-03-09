#include <iostream>
using namespace std;

float Rata_rata(float a, float b){
    return (a+b)/2;
}

string Status_lulus(float r){
    if (r >= 60)
        return "Lulus";
    else
        return "Gagal";
}

int main(){
    float nilai1, nilai2, rata;

    cout << "Masukkan nilai pertama: ";
    cin >> nilai1;
    cout << "Masukkan nilai kedua: ";
    cin >> nilai2;
}

//rerata = (nilai1 + nilai2)/2;
//if (rerata >= 60)
//status = "Lulus";
//else
//status = "Gagal";
rerata = Rata_rata(nilai1, nilai2);
//status = Status_lulus(rerata);
