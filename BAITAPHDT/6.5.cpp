/*SKILL
Ta định nghĩa phương thức toán tử sắp xếp mảng 1 chiều như sau:
Phương thức <<: sắp xếp mảng theo chiều tăng dần.
Phương thức >>: sắp xếp mảng theo chiều giảm dần.
Hãy định nghĩa một lớp Mảng gồm: thuộc tính a[] kiểu float, biến kích thước mảng n
kiểu nguyên và các phương thức:
Hàm toán tử nhập: nhập kích thước mảng n, cấp phát bộ nhớ và nhập các giá trị cho mảng.
Hàm toán tử xuất: Xuất các giá trị của mảng ra màn hình.
Phương thức toán tử << và >> như trên để sắp xếp mảng tăng dần và giảm dần. 
Viết chương trình chính sử dụng lớp trên để nhập vào một mảng n phần tử thực, sau đó
sắp xếp mảng theo chiều tăng dần (giảm dần) và in mảng đã sắp lên màn hình.*/

#include<iostream>

using namespace std;

#define MAX 1000

class Array{
    private:
        float a[MAX];
        int n;
    public:
        Array(){}

        friend istream &operator>>(istream &in, Array &x);
        friend ostream &operator<<(ostream &out, Array &x);
        Array operator<<(Array &x);
        Array operator>>(Array &x);
};

istream &operator>>(istream &in, Array &x){
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> x.n;
    cout << "Nhap gia tri phan tu mang: " << endl;
    for(int i = 0; i < x.n; i++){
        cout << "arr[" << i << "] = ";
        cin >> x.a[i];
    }
    return in;    
}

ostream &operator<<(ostream &out, Array &x){
    for(int i = 0; i < x.n; i++){
        out << x.a[i] << " ";
    }
    return out;
}

Array Array::operator<<(Array &x){
    sort(x.a, x.a + x.n);
    return x;
}

Array Array::operator>>(Array &x){
    sort(x.a, x.a + x.n, greater<float>());
    return x;
}

int main(){
    Array a;
    cin >> a;
    a<<a;
    a.operator<<(a);
    cout << "Mang sap xep tang dan: " << a << endl;
    a>>a;
    a.operator>>(a);
    cout << "Mang sap xep giam dan: " << a << endl;

    return 0;
}