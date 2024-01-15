/*START
Sinh viên tự thiết kế lớp, các thuộc tính, các phương thức cần thiết để cho phép trong chương trình chính
giải và biện luận được các phương trình bậc 2 bất kỳ.*/

#include<iostream>

using namespace std;

class Equation{
    private:
        float a,b,c;
    public:
        Equation(float a,float b,float c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
        void giaiPT(){
            cout << "Phuong trinh bac 2 la: "<< this->a <<"x^2 + " << this->b <<"x + " << this->c << " = 0" << endl;
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
    float a, b, c;
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;
    Equation pt(a,b,c);
    pt.giaiPT();

    return 0;
}