/*Xây dựng lớp Tam thức bậc hai với các thuộc tính là các hệ số a, b, c kiểu thực và các
phương thức:
Phương thức khởi tạo: khởi gán các giá trị của các hệ số a, b, c.
Hàm toán tử xuất: in tam thức lên màn hình (có dạng ax2+bx+c = 0)
Phương thức toán tử “Đổi dấu tam thức”: đổi dấu các hệ số a, b, c.
Phương thức toán tử cộng, trừ hai tam thức (cộng và trừ các hệ số tương ứng).
Xây dựng chương trình chính khai báo hai tam thức.
Khởi gán giá trị cho các hệ số và đảo dấu của hai tam thức. In các tam thức đã đảo dấu ra màn hình.
Tính và in ra màn hình các tam thức là tổng và hiệu của hai tam thức đã đảo dấu ở trên.*/

#include<iostream>

using namespace std;

class Trinomial
{
private:
    float a,b,c;
public:
    Trinomial(){};
    friend istream &operator>>(istream &in,Trinomial &x);
    friend ostream &operator<<(ostream &out,Trinomial &x);
    Trinomial operator+(Trinomial x);
    Trinomial operator-(Trinomial x);
    Trinomial operator-();
};

istream &operator>>(istream &in,Trinomial &x){
    cout << "Nhap a: ";
    in >> x.a;
    cout << "Nhap b: ";
    in >> x.b;
    cout << "Nhap c: ";
    in >> x.c;
    return in;
}

ostream &operator<<(ostream &out,Trinomial &x){
    out << x.a << "x^2 + " << x.b << "x + " << x.c << " = 0";
    return out;
}

Trinomial Trinomial::operator+(Trinomial x){
    Trinomial kq;
    kq.a = this->a + x.a;
    kq.b = this->b + x.b;
    kq.c = this->c + x.c;

    return kq;
}

Trinomial Trinomial::operator-(Trinomial x){
    Trinomial kq;
    if(this->a > x.a){
        kq.a = this->a - x.a;
        kq.b = this->b - x.b;
        kq.c = this->c - x.c;
    }else{
        kq.a = x.a - this->a;
        kq.b = x.b - this->b;
        kq.c = x.c - this->c;
    }
    return kq;
}

Trinomial Trinomial::operator-(){
    Trinomial kq;
    kq.a = -this->a;
    kq.b = -this->b;
    kq.c = -this->c;
    return kq;
}

int main(){
    Trinomial x,y,z;
    cout << "Nhap tam thuc 1: " << endl;
    cin >> x;
    cout << x << endl;
    cout << "Nhap tam thuc 2: " << endl;
    cin >> y;
    cout << y << endl;

    z = x + y;
    cout << "Cong tam thuc: " << z << endl;
    
    z = x - y;
    cout << "Tru tam thuc: " << z << endl;

    z = -z;
    cout << "Doi dau tam thuc: " << z << endl;

    return 0;

}