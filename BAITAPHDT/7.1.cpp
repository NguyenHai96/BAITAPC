/*Viết hàm main nhập vào thông tin của một Tivi. Xuất thông tin của Tivi vừa nhập lên màn hình.*/
#include<iostream>

using namespace std;

class Date{
    protected:
        int day;
        int month;
        int year;
    public:
        Date(){}
        Date(int day, int month, int year){
            this->day = day;
            this->month = month;
            this->year = year;
        }

        void inPutDay(){
            cout << "Nhap ngay vao hang: ";  cin >> this->day;
            cout << "Nhap thang vao hang: ";    cin >> this->month;
            cout << "Nhap nam vao hang: ";  cin >> this->year;
        }

        void outPutDay(){
            cout << "Ngay/Thang/Nam:" << this->day << "/" << this->month << "/" << this->year << endl;
        }
};

class NSX{
    public:
        string nameNsx;
        string addNsx;
        NSX(){}
        NSX(string nameNsx, string addNsx){
            this->nameNsx = nameNsx;
            this->addNsx = addNsx;
        }
};

class Hang:public NSX{
    private:
        string nameHang;
        NSX x;
        float price;
    public:
        Hang(){}
        Hang(string nameHang, float price){
            this->nameHang = nameHang;
            this->price = price;
        }

        void inPutHang(){
            cout << "Nhap ten hang: ";
            getline(cin,this->nameHang);
            cout << "Nhap ten NSX: ";
            getline(cin,this->x.nameNsx);
            cout << "Nhap dia chi NSX: ";
            getline(cin,this->x.addNsx);
            cout << "Nhap gia tien san pham: ";
            cin >> this->price;
        }

        void outPutHang(){
            cout << "Ten hang: " << this->nameHang << endl;
            cout << "Nha san xuat: " << x.nameNsx << endl;
            cout << "Dia chi NSX: " << x.addNsx << endl;
            cout << "Gia: " << this->price << endl;
        }
};

class Television:public Date, public Hang{
        float size;
        Date dayIn;

    public:
        Television(){}
        Television(int size){
            this->size = size;
        }

        void inPutTivi(){
            Hang::inPutHang();
            cout << "Nhap size: ";  cin >> this->size;
            dayIn.inPutDay();
        }

        void outPutTivi(){
            Hang::outPutHang();
            cout << "Size tivi: " << this->size << endl;
            dayIn.outPutDay();
        }
};

int main(){
    Television a;
    a.inPutTivi();
    a.outPutTivi();

    return 0;
}