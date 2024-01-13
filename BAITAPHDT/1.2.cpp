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
        Rectangle(){}

        void VeHinhChuNhat(int d, int r){
            cout << "Ve hinh chu nhat X ra man hinh voi hoa tiec '*': " << endl;
            //Cho vòng for lặp qua chiều rộng của hình chữ nhật trc
            for(int i = 1; i <= r; i++){

                for(int j = 1; j <= d; j++){
                    if(i == 1 || i == r){
                        cout << "*";
                    }else{
                        if(i != 1 && i != r && (j == 1 || j == d)){
                            cout << "*";
                        }else{
                            cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }

        void DienTich(int d, int r){
            cout << "Dien tich hinh chu nhat la: " << d*r << endl;
        }

        void ChuVi(int d, int r){
            cout << "Chu vi hinh chu nhat la: " << (d + r)*2 << endl;
        }
};

int main(){
    Rectangle hcn;
    int d,r;
    cout << "Nhap chieu dai cua hinh chu nhat: ";
    cin >> d;
    cout << "Nhap chieu rong cua hinh chu nhat: ";
    cin >> r;
    hcn.VeHinhChuNhat(d,r);
    hcn.DienTich(d,r);
    hcn.ChuVi(d,r);

    return 0;
}