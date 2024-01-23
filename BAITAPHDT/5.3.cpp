/*Xây dựng các lớp theo sơ đồ sau:
OTO                            VEHICLE                      MOTO
Sốchỗngồi                      NhãnHiệu                     Phânkhối
Dungtích                       Nămsx                        void NHAP()
void NHAP()                    Hãng                         void XUAT()
void XUAT()                    void NHAP()
                               void XUAT()
Viết hàm main nhập vào 1 xe oto vào 1 xe moto. In thông tin của hai xe ra màn hình.*/

#include<iostream>

using namespace std;

class Vehicle{
    protected:
        string name;
        int year;
        string brand;
    public:
        Vehicle(){}

        void inPut(){
            
            cout << "Nhap ten xe: ";
            getline(cin,this->name);
            
            cout << "Nhap nam SX: ";
            cin >> this->year;
            
            cout << "Nhap thuong hieu xe: ";
            cin.ignore();
            getline(cin,this->brand);
        }

        void outPut(){
            cout << "Ten xe: " << this->name << endl;
            cout << "Nam Sx: " << this->year << endl;
            cout << "Thuong hieu xe: " << this->brand << endl;
        }
};

class Oto:public Vehicle{
    private:
        int seats;
        int capacity;
    public:
        Oto(){}

        void inPutOto(){
            Vehicle::inPut();
            cout << "Nhap so cho ngoi tren xe: "; cin >> this->seats;
            cout << "Nhap dung tich cua xe: "; cin >> this->capacity;
            cin.ignore();
        }

        void outPutOto(){
            Vehicle::outPut();
            cout << "So cho ngoi: " << this->seats << endl;
            cout << "Dung tich: " << this->capacity << endl;
        }
};

class Moto:public Vehicle{
    private:
        int division;
    public:
        Moto(){}

        void inPutMoto(){
            Vehicle::inPut();
            cout << "Nhap phan khoi cua xe: ";  cin >> this->division;

        }

        void outPutMoto(){
            Vehicle::outPut();
            cout << "Phan khoi xe: " << this->division << endl;
        }
};

int main(){
    Oto a;
    Moto b;
    a.inPutOto();
    b.inPutMoto();
    a.outPutOto();
    b.outPutMoto();

    return 0;
}