/*Cài đặt lớp SINHVIEN gồm các thuộc tính miêu tả các sinh viên như: Mã Sinh Viên, Họ và Tên, Tuổi, Điểm và các phương thức:
NHAP: nhập toàn bộ các thông tin cho sinh viên.
XUAT: xuất toàn bộ thông tin của sinh viên ra màn hình.
Cài đặt hàm main khai báo hai sinh viên a, b
Sử dụng các phương thức của hai sinh viên để nhập vào thông tin của sinh viên a, b; xuất thông tin của hai sinh viên ra màn hình.*/

#include<iostream>

using namespace std;

class SinhVien
{
private:
    int mssv;
    string name;
    int old;
    double diem;
public:
   
    
    void nhap(){
        cout << "-----------------------------------------" << endl;
        cout << "Nhap ma so sinh vien la: ";
        cin >> mssv;
        cout << "Nhap ten cua sinh vien la: ";
        cin.ignore();
        getline(cin,name);
        cout << "Nhap tuoi cua sinh vien: ";
        cin >> old;
        cout << "Nhap diem cua sinh vien: ";
        cin >> diem;
        count++;
    }
    void Xuat(){
        cout << "-----------------------------------------" << endl;
        cout << "Ma sinh vien: " << mssv << endl;
        cout << "Ten sinh vien: " << name << endl;
        cout << "Tuoi: " << old << endl;
        cout << "Diem: " << diem << endl;
    }
};

int main(){
    SinhVien sv1,sv2;
    sv1.nhap();
    sv1.Xuat();
    sv2.nhap();
    sv1.Xuat();
    sv2.Xuat();

    return 0;
}