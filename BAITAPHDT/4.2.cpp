/*FRIEND CLASS
Cài đặt lớp theo sơ đồ sau
HANG                                 NSX
                                   
Mahang                              Mansx
Tenhang                             Tennsx
Dongia                              DCNSX
TrongLuong
NSX x
void NHAP()
void XUAT()
Viết hàm main nhập vào thông tin của một mặt hàng. In ra thông tin của mặt hàng đó.*/

#include<iostream>

using namespace std;

class Hang;

class NSX{
    private:
        int idnsx;
        string namensx;
        string addnsx;
    friend class Hang;
    public:
        NSX(){}
        NSX(int a, string b, string c){
            idnsx = a;
            namensx = b;
            addnsx =c;
        }
        
};

class Hang{
    private:
        int idhang;
        string namehang;
        double pricehang;
        double weighthang;
        NSX d;
    public:
        Hang(){}
        Hang(int idhang, string namehang, double pricehang, double weighthang, NSX d){
            this->idhang = idhang;
            this->namehang = namehang;
            this->pricehang = pricehang;
            this->weighthang = weighthang;
            this->d = d;
        }

        void inPutHang(){
            cout << "Nhap ma don hang: ";
            cin >> this->idhang;
            cout << "Nhap ten don hang: "; cin.ignore(); getline(cin,this->namehang);
            cout << "Nhap gia don hang: "; cin >> this->pricehang;
            cout << "Nhap khoi luong don hang: "; cin >> this->weighthang;
            cout << "Nhap ma NSX: "; cin >> this->d.idnsx;
            cout << "Nhap ten NSX: "; cin.ignore(); getline(cin,this->d.namensx);
            cout << "Nhap dia chi NSX: "; getline(cin,this->d.addnsx);
        }

        void outPutHang(){
            cout << "-------------------------------------" << endl;
            cout << "Ma don hang: " << this->idhang << endl;
            cout << "Ten don hang: " << this->namehang << endl;
            cout << "Gia don hang: " << this->pricehang << endl;
            cout << "Khoi luong hang: " << this->weighthang << endl;
            cout << "Ma NSX: " << d.idnsx << endl;
            cout << "Ten NSX: " << d.namensx << endl;
            cout << "Dia chi NSX: " << d.addnsx << endl;
        }
};

int main(){
    Hang a;
    a.inPutHang();
    a.outPutHang();

    return 0;
}