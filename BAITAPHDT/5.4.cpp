/*CONSTRUCTOR/ DESTRUCTOR INHERITANCE Cài đặt các lớp theo sơ đồ sau:
MAYGIAT             ELECTRONIC                       TULANH
DungTích (kg)       Côngsuất                        DungTích (lít)
Loại                Điệnáp                          SốNgăn
MAYGIAT(...)        ELECTRONIC(...)                 TULANH(...)
void XUAT()                                         void XUAT()
Viết hàm main khai báo 1 máy giặt a và một tủ lạnh b
đồng thời khởi gán các giá trị bất kỳ cho các thuộc tính của a, b.
In các thông tin đã khởi gán của hai thiết bị ra màn hình.*/

#include<iostream>

using namespace std;

class Electronic{
    protected:
        int wattage;
        int voltage;
    public:
        Electronic(){}

        Electronic(int wattage, int voltage){
            this->wattage = wattage;
            this->voltage = voltage;
        }

        void outPutElec(){
            cout << "In thong tin may moc" << endl;
        }
};

class Washing:public Electronic{
    private:
        int capacity;
        string brand;
    public:
        Washing(){}

        Washing(int capacity, string brand, int wattage, int voltage):Electronic(wattage,voltage){
            this->capacity = capacity;
            this->brand = brand;
        }

        void outPutElec(){
            cout << "Thong tin may giat!" << endl;
            cout << "Dung tich (kg): " << this->capacity << endl;
            cout << "Loai may: " << this->brand << endl;
            cout << "Cong suat: " << wattage << endl;
            cout << "Dien ap: " << voltage << endl;
        }
};

class Fridge:public Electronic{
    private:
        int capacity;
        int numberOfFri;
    public:
        Fridge(){}
        Fridge(int capacity, int numberOfFri, int wattage, int voltage):Electronic(wattage,voltage){
            this->capacity = capacity;
            this->numberOfFri = numberOfFri;
        }

        void outPutElec(){
            cout << "Thong tin Tu lanh!" << endl;
            cout << "Dung tich (l): " << this->capacity << endl;
            cout << "So ngan tu lanh: " << this->numberOfFri << endl;
            cout << "Cong suat: " << wattage << endl;
            cout << "Dien ap: " << voltage << endl;
        }
};

int main(){
    Washing a(10,"Tosiba",330,220);
    Fridge b(120,4,500,220);
    
    a.outPutElec();
    b.outPutElec();

    return 0;
}