/*Đề bài:
Yêu cầu viết chuong trinh nhap 1 xe moto, 1 xe oto và in ra màn hình thông tin 2 xe*/

/*Trước tiên, em áp dụng tính chất trừu tượng trong lập trình hướng đối tượng để tập hợp các thông tin cần thiết và
loại bỏ những thông tin không cần thiết của đối tượng mình muốn làm.
Em xác định được đề bài đưa ra gồm các class:
- Xe là class mẹ của 2 class moto và oto
- class moto
- class oto
Trong mỗi class, em chỉ cần quan tâm đến các thuộc tính cần thiết như:
- xe có các thuộc tính: nhãn hiêu,năm sản xuất và tốc độ
- class moto có thuộc tính là phân khối.
- class oto có thuộc tính số chỗ ngồi và dung tích xe
Đề bài yêu cầu nhập vào xuất ra danhh sách.*/

#include<iostream>

using namespace std;

class Vehicle{
    //Tính đóng gói: em muốn các lớp con sử dụng được các thuộc tính của lớp xe(cha)
    protected:
        string brand;
        int year;
        int speed;
    public:
        Vehicle(){}
        Vehicle(string brand, int year, int speed){
            this->brand = brand;
            this->year = year;
            this->speed = speed;
        }

        void outputVehicle(){
            cout << "Xuat thong tin xe ra man hinh" << endl;
        }
};

//Tính kế thừa
class Moto:public Vehicle{
    //Tính đóng gói
    private:
        int division;
    public:
        
        Moto(string brand, int year, int speed, int division):Vehicle(brand,year,speed){
            this->division = division;
        }
        //Tính đa hình
        void outputVehicle(){
            cout << "Thuong hieu xe: " << this->brand << endl;
            cout << "Nam san xuat: " << this->year << endl;
            cout << "Toc do toi da xe: " << this->speed << endl;
            cout << "Phan khoi xe: " << this->division << endl;
        }
};

//Tính kế thừa
class Oto:public Vehicle{
    //Tính đóng gói
    private:
        int seats;
        int capacity;
    public:
        //Tính kế thừa
        Oto(string brand, int year, int speed, int seats, int capacity):Vehicle(brand,year,speed){
            this->seats = seats;
            this->capacity = capacity;
        }
        
        //Sử dụng override
        void outputVehicle(){
            cout << "Thuong hieu xe: " << this->brand << endl;
            cout << "Nam san xuat: " << this->year << endl;
            cout << "Toc do toi da xe: " << this->speed << endl;
            cout << "So cho ngoi: " << this->seats << endl;
            cout << "Dung tich xe: " << this->capacity << endl;
        }
};

int main(){
    Moto vision("Honda",2023,150,125);
    Oto fortuner("Toyota",2024,250,7,347);

    vision.outputVehicle();
    fortuner.outputVehicle();

    return 0;
}