/*Xây dựng các lớp Máy in, Máy in kim và Máy in Laser theo sơ đồ sau:
PRINTER                                   DOTPRINTER  
TrongLuong                              Mậtđộkim
Hãngsx                                  void NHAP()
Namsx                                   void XUAT()
Tocdo (số trang/ phút)
    
LASERPRINTER
Độphângiải
void NHAP()
void XUAT()
Viết hàm main nhập vào 1 máy in Laser và một máy in kim. In thông tin của các máy in đó ra màn hình.*/

#include<iostream>

using namespace std;

class Printer{
    protected:
        int weight;
        string manufactuner;
        int year;
        int speed;
    public:
        Printer(){}
};

class DotPrinter:public Printer{
    private:
        int needle;
    public:
        DotPrinter(){}

        void inPutDot(){
            cout << "----------------------------------" << endl;
            cout << "Nhap thong tin may in kim!" << endl;
            cout << "Nhap mat do kim: "; cin >> this->needle;
            cout << "Nhap can nang: "; cin >> Printer::weight;
            cout << "Nhap NSX: "; cin.ignore();     getline(cin,Printer::manufactuner);
            cout << "Nhap Nam sx: ";    cin >> Printer::year;
            cout << "Nhap toc do in: ";     cin >> Printer::speed;
        }

        void outPutDot(){
            cout << "----------------------------------" << endl;
            cout << "Thong tin may in Kim" << endl;
            cout << "Mat do: " << this->needle << endl;
            cout << "Can nang: " << Printer::weight << endl;
            cout << "NSX: " << Printer::manufactuner << endl;
            cout << "Nam sx: " << Printer::year << endl;
            cout << "Toc do In: " << Printer::speed << endl;
        }
};

class LaserPrinter:public Printer{
    private:
        int resolution;
    public:
        LaserPrinter(){}

        void inPutLaser(){
            cout << "----------------------------------" << endl;
            cout << "Nhap thong tin may in Laser!" << endl;
            cout << "Nhap Do phan giai: "; cin >> this->resolution;
            cout << "Nhap can nang: "; cin >> Printer::weight;
            cout << "Nhap NSX: "; cin.ignore();     getline(cin,Printer::manufactuner);
            cout << "Nhap Nam sx: ";    cin >> Printer::year;
            cout << "Nhap toc do in: ";     cin >> Printer::speed;
        }

        void outPutLaser(){
            cout << "----------------------------------" << endl;
            cout << "Thong tin may in Laser" << endl;
            cout << "Do phan giai: " << this->resolution << endl;
            cout << "Can nang: " << Printer::weight << endl;
            cout << "NSX: " << Printer::manufactuner << endl;
            cout << "Nam sx: " << Printer::year << endl;
            cout << "Toc do In: " << Printer::speed << endl;
        }
};

int main(){
    DotPrinter d;
    LaserPrinter l;
    d.inPutDot();
    l.inPutLaser();
    d.outPutDot();
    l.outPutLaser();

    return 0;
}