/* CONTINUE
Sinh viên tự thiết kế lớp, các thuộc tính, các phương thức cần thiết để cho phép trong chương trình chính
nhập vào một mảng gồm n số nguyên, sắp xếp mảng tăng dần, in mảng ra màn hình.*/

#include<iostream>

using namespace std;

#define MAX 1000

class Array{
    public:
        int n;
        int a[MAX];
        Array(int a[], int n){
            this->n = n;
        }
        void nhap(){
            for(int i = 0; i < n; i++){
                cout << "a[" << i << "] = ";
                cin >> a[i];
            }
        }
        void xuat(){
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
        }

        void sapXep(){
            int temp;
            for(int i = 0; i < n - 1 ; i++){
                for(int j = i + 1; j < n; j++){
                    if(a[i] > a[j]){
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
        }
};

int main(){
    int n;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> n;
    int a[MAX];
    Array arr(a,n);
    
    arr.nhap();
    arr.sapXep();
    arr.xuat();

    return 0;
}