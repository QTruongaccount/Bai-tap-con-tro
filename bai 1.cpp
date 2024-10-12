#include <iostream>

using namespace std;

int main() {
  // Khai báo mảng số nguyên với 10 phần tử
  int mang[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // Hiển thị số byte mà mảng chiếm dụng
  cout << "So byte ma mang chiem dung: " << sizeof(mang) << " bytes" << endl;

  // Hiển thị từng phần tử trong mảng cùng với địa chỉ
  for (int i = 0; i < 10; i++) {
    cout << "Phan tu thu " << i << ": " << mang[i] 
         << " - Dia chi: " << &mang[i] << endl;
  }

  return 0;
}