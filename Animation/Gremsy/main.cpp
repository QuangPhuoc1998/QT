//
//  //  OOPC
//
//  Created by Macbook  on 8/19/17.
//  Copyright © 2017 Macbook . All rights reserved.
//
#include <iostream>
#include <string>

using namespace std;

class PhanSo{
private:
    int TuSo, MauSo;
public:
    PhanSo RutGon();
    void Nhap();
    void Xuat();
};
// Cách dùng thứ 1 của con trỏ this: tham chiếu đến các thành phần của class hiện tại
void PhanSo::Nhap(){
    cout << "Nhap tu so: ";
    // cin >> TuSo; // Thay vì ta hay viết như vậy
    cin >> this->TuSo; // Ta se viet nhu the nay

    cout << "Nhap mau so: ";
    //cin >> MauSo;
    cin >> this->MauSo;

}

void PhanSo::Xuat(){
    cout << this->TuSo << "/" << this->MauSo;
}
// Cách dùng thứ 2: Trả về object hiện tại
PhanSo PhanSo::RutGon(){
    int a, b;
    a = abs(this->TuSo);
    b = abs(this->MauSo);
    while (a != b) {
        if(a > b){
            a -= b;
        }else
            b -= a;
    }
    this->TuSo /= a;
    this->MauSo /= b;
    return *this;

}

int main(int argc, const char * argv[]) {
    PhanSo ps;
    ps.Nhap();
    ps.RutGon();
    ps.Xuat();
    system("exit");
    return 0;
}
