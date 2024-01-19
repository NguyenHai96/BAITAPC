/*Cài đặt các lớp theo sơ đồ sau:
NHANSU
Manhansu Hoten Date NS
void NHAP()
void XUAT()
DATE
D (ngày)
M (tháng)
Y (năm)
void NHAP()
void XUAT()
Cài đặt hàm main nhập vào một nhân sự x, in thông tin của nhân sự ra màn hình*/

#include<iostream>

using namespace std;

class Date{
    public:
        int ngay;
        int thang;
        int nam;

        Date () {}
        Date(int ngay,int thang, int nam){
            this ->ngay = ngay;
            this ->thang = thang;
            this ->nam = nam;
        }

        void dateOfJoin(){
            cout << "Ngay vao cong ty la: " << ngay << "/" << thang << "/" << nam << endl;
        }

    // friend class Nhansu;
};

class Nhansu {
    public:
        int manhansu;
        string name;
        Date ngayThangNam;

        Nhansu(int manhansu, string name,Date ngayThangNam){
            this ->manhansu = manhansu;
            this ->name = name;
            this ->ngayThangNam = ngayThangNam;
        }

        void show(){
            cout << "--------------------------------" << endl;
            cout << "Ma nhan su: " << this->manhansu << endl;
            cout << "Ten nhan su: " << this->name << endl;
            this->ngayThangNam.dateOfJoin();
        }
};

int main(){
    int ngay, thang, nam;
    int msns;
    string name;
    cout << "Nhap vao lan luot ngay/thang/nam: ";
    cin >> ngay;
    cin >> thang;
    cin >> nam;
    cout << "Nhap vao ma so nhan vien: ";
    cin >> msns;
    cout << "Nhap vao ten nhan vien: ";
    cin.ignore();
    getline(cin,name);
    Nhansu x(msns,name,Date(ngay,thang,nam));
    x.show();

    return 0;
}