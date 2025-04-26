#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];  // ➊ 5 elemanlı bir dizi ayırıyoruz

    // ➋ Diziyi dolduruyoruz
    for (int i = 0; i < 5; ++i) {
        arr[i] = (i + 1) * 10;
    }

    // Yeni bir eleman eklemek için diziyi büyütüyoruz
    int* newArr = new int[6];  // ➌ Yeni, 6 elemanlık dizi ayırıyoruz

    // Eski diziyi yeni diziye kopyalıyoruz
    for (int i = 0; i < 5; ++i) {
        newArr[i] = arr[i];
    }

    // Yeni elemana değer atıyoruz
    newArr[5] = 60;

    // Eski diziyi silmeliyiz
    delete[] arr; // ➍ Eski diziyi serbest bırakıyoruz

    // Yeni diziyi ekrana yazdıralım
    for (int i = 0; i < 6; ++i) {
        cout << newArr[i] << " ";
    }

    // Yeni diziyi silmeliyiz
    delete[] newArr; // ➎ Yeni diziyi serbest bırakıyoruz

    return 0;
}
