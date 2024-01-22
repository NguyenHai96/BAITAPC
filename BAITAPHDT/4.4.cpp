/*Cài đặt lớp Phương trình bậc 2 với các thuộc tính a, b, c và các phương thức:
NHAP: nhập vào a, b, c của một phương trình bậc 2. 
XUAT: in ra phương trình bậc 2 dưới dạng: ax2+bx+c=0. GIAI: giải phương trình bậc 2.
Hàm tạo không đối khởi gán các giá trị của a, b, c bằng 0. 
Hàm tạo có đối khởi gán các giá trị bất kỳ cho a, b, c.
Viết hàm main khai báo một phương trình bậc hai P và khởi tạo các giá trị ban đầu cho P
In phương trình P sau khi khởi tạo ra màn hình và giải P
Nhập vào một phương trình bậc hai Q. In phương trình Q ra màn hình và giải Q.*/

#include<iostream>

using namespace std;

class Equation{
    private:
        int a, b, c;
    public:
        Equation(){
            a = 0;
            b = 0;
            c = 0;
        }

        Equation(int j, int k, int l){
            this->a = j;
            this->b = k;
            this->c = l;
        }

        void inPutEquation(){
            cout << "Nhap he so a: "; cin >> this->a;
            cout << "Nhap he so b: "; cin >> this->b;
            cout << "Nhap he so c: "; cin >> this->c;
        }

        void outPutEquation(){
            cout << "Phuong trinh bac 2 la: " << this->a <<"x^2 + " << this->b << "x + " << this->c << " = 0" << endl;
        }

        void solveEquation(){
            if(this->a == 0){
                cout << "Day ko phai la phuong trinh bac 2!" << endl;
            }else{
                float delta = this->b*this->b - 4*this->a*this->c;
                if(delta > 0){
                    float x1 = (-this->b + sqrt(delta))/(2*this->a);
                    float x2 = (-this->b - sqrt(delta))/(2*this->a);
                    cout << "Phuong trinh co hai nghiem phan biet: " << endl;
                    cout << "x1 = " << x1 << endl;
                    cout << "x2 = " << x2 << endl;
                }else{
                    if(delta == 0){
                        float x = -this->b /(2*this->a);
                        cout << "Phuong trinh co nghiem kep la: x = " << x << endl;
                    }else{
                        cout << "Phuong trinh vo nghiem!" << endl;
                    }
                }
            }
        }
};

int main(){
    Equation pt;
    pt.inPutEquation();
    pt.outPutEquation();
    pt.solveEquation();

    Equation Q;
    Q.inPutEquation();
    Q.outPutEquation();
    Q.solveEquation();
    
    return 0;
}