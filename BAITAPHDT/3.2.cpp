/*ONE-ONE RELATIONSHIP
Cài đặt lớp theo sơ đồ sau:
HANG
Mahang Tenhang NSX x
void NHAP()
void XUAT()
NSX
Mansx
Tennsx
Dcnsx
void NHAP()
void XUAT()
Cài đặt hàm main nhập vào một mặt hàng a. In thông tin của mặt hàng a ra màn hình.*/

#include<iostream>

using namespace std;

class NSX{
    public:
        int mansx;
        string tennsx;
        string addnsx;
        NSX(){}

        NSX(int mansx, string tennsx, string addnsx){
            this->mansx = mansx;
            this->tennsx = tennsx;
            this->addnsx = addnsx;
        }

        void nhapNSX(){
            cout << "Nhap ma so NXS: ";
            cin >> mansx;
            cout << "Nhap vao ten NSX: ";
            cin.ignore();
            getline(cin,tennsx);
            cout <<"Nhap dia chi NSX: ";
            getline(cin,addnsx);
        }

        void xuatNSX(){
            cout << "Ma so NSX: " << mansx << endl;
            cout << "Ten cua NSX: " << tennsx << endl;
            cout << "Dia chi NSN: " << addnsx << endl;
        }
};

class HangHoa{
    public:
        int mahang;
        string tenhang;
        NSX x;
        HangHoa(){}

        HangHoa(int mahang, string tenhang, NSX x){
            this->mahang = mahang;
            this->tenhang = tenhang;
            this->x = x;
        }

        void nhapHang(){
            cout << "Nhap ma hang hoa: ";
            cin >> mahang;
            cout << "Nhap ten hang hoa: ";
            cin.ignore();
            getline(cin,tenhang);
            this->x.nhapNSX();
        }

        void xuatHang(){
            cout << "--------------------------------" << endl;
            cout << "Ma hang hoa: " << mahang << endl;
            cout << "Ten hang hoa: " << tenhang << endl;
            this->x.xuatNSX();
        }
};

int main(){
    int mahang, mansx;
    string tenhang, tennsx, addnsx;
    HangHoa a(mahang,tenhang,NSX(mansx,tennsx,addnsx));
    a.nhapHang();
    a.xuatHang();

    return 0;
}