/*Bài 1.2. RECTANGLE CLASS
Cài đặt lớp Hình chữ nhật bao gồm hai thuộc tính Dài, Rộng và các phương thức:
NHAP: nhập chiều dài và chiều rộng.
VE: vẽ hình chữ nhật lên màn hình bằng cách sử dụng ký tự ‘*’ với chiều dài, chiều rộng vốn có của nó.
DIENTICH: in ra màn hình diện tích hình chữ nhật. CHUVI: in ra màn hình chu vi hình chữ nhật.
Cài đặt hàm main khai báo 01 hình chữ nhật x. Nhập vào chiều dài và chiều rộng của x.
Vẽ hình chữ nhật x ra màn hình. In ra màn hình diện tích và chu vi của x.*/

#include<iostream>

using namespace std;

class Rectangle{
    private:
        int dai;
        int rong;
    public:
        Rectangle(int d, int r){
            this ->dai = d;
            this ->rong = r;
        }

        void veHinhChuNhat(){

            cout << "Ve hinh chu nhat X ra man hinh voi hoa tiec '*': " << endl;
            //Cho vòng for lặp qua chiều rộng của hình chữ nhật trc
            for(int i = 1; i <= this->rong; i++){

                for(int j = 1; j <= this ->dai; j++){
                    if(i == 1 || i == this ->rong){
                        cout << "*";
                    }else{
                        if(i != 1 && i != this ->rong && (j == 1 || j == this->dai)){
                            cout << "*";
                        }else{
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }

        void dienTich(){
            cout << "Dien tich hinh chu nhat la: " << this->rong*this->dai << endl;
        }

        void chuVi(){
            cout << "Chu vi hinh chu nhat la: " << (this ->dai + this ->rong)*2 << endl;
        }
};

int main(){
    int d,r;
    cout << "Nhap chieu dai cua hinh chu nhat: ";
    cin >> d;
    cout << "Nhap chieu rong cua hinh chu nhat: ";
    cin >> r;
    Rectangle hcn(d,r);
    
    hcn.veHinhChuNhat();
    hcn.dienTich();
    hcn.chuVi();

    return 0;
}