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
    public:

        NSX init(){
            int a;
            string b,c;
            NSX d;
            cout << "Nhap ma don hang: ";
            cin >> this->idhang;
            cout << "Nhap ten don hang: "; cin.ignore(); getline(cin,this->namehang);
            cout << "Nhap gia don hang: "; cin >> this->pricehang;
            cout << "Nhap khoi luong don hang: "; cin >> this->weighthang;
            NSX x;
            cout << "Nhap ma NSX: "; cin >> a;
            cout << "Nhap ten NSX: "; cin.ignore(); getline(cin,b);
            cout << "Nhap dia chi NSX: "; getline(cin,c);
            d = NSX(a,b,c);
            return d;
        }

        void show(NSX a){
            cout << "Ma don hang: " << this->idhang << endl;
            cout << "Ten don hang: " << this->namehang << endl;
            cout << "Gia don hang: " << this->pricehang << endl;
            cout << "Khoi luong hang: " << this->weighthang << endl;
            cout << "Ma NSX: " << a.idnsx << endl;
            cout << "Ten NSX: " << a.namensx << endl;
            cout << "Dia chi NSX: " << a.addnsx << endl;
        }
};

int main(){
    Hang a;
    NSX b;
    b = a.init();
    a.show(b);

    return 0;
}