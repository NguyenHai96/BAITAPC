/*Sinh viên tự thiết kế lớp,các thuộc tính,các phương thứccần thiết để cho phép trong chương trình chính
nhập vào một mảng gồm n số thực, tìm và in ra phần tử lớn nhất và phần tử nhỏ nhất của mảng
In mảng ra màn hình.*/

#include<iostream>

using namespace std;

#define MAX 1000

class Array{
    public:
        int n;
        double a[MAX];

        Array(double a[], int n){
            this->n = n;
        }

        void nhap(){
            for(int i = 0; i < n; i++){
                cout << "arr[" << i << "] = ";
                cin >> a[i];
            }
        }

        void xuat(){
            for(int i = 0; i < n; i++){
                cout << a[i] << endl;
            }
        }

        void arrayMax(){
            double max = 0;
            for(int i = 0; i < n; i++){
                if(a[i] > max){
                    max = a[i];
                }
            }
            cout << "Phan tu lon nhat trong mang la: " << max << endl;
        }

        void arrayMin(){
            double min;
            for(int i = 0; i < n; i++){
                if(a[i] < min){
                    min = a[i];
                }
            }
            cout << "Phan tu nho nhat trong mang la: " << min << endl;
        }
};

int main(){
    int n;
    cout << "Nhap vao so luong phan tu trong mang: ";
    cin >> n;
    double a[MAX];
    Array arr(a,n);

    arr.nhap();
    arr.xuat();
    arr.arrayMax();
    arr.arrayMin();
    
    return 0;
}