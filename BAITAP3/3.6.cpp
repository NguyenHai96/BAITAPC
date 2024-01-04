//Sắp xếp mảng tăng dần theo giá trị các phần tử trong mảng A.

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

#define MAX 10000

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
void HoanVi(int &a, int &b);
void SapXep(int a[], int n);

int main(){
    int a[MAX];
    int n;

    NhapMang(a,n);
    XuatMang(a,n);

    //Sắp xếp tăng dần
    SapXep(a,n);
    XuatMang(a,n);

    return 0;
}

void NhapMang(int a[], int &n){

    srand(time(NULL));  //Khởi tạo số ngẫu nhiên

    cout << "Nhap vao so luong phan tu trong mang a[n]: ";
    cin >> n;

    int i;
    if(n > 0){
        a[i] = rand() % 100;
        for(i = 0; i <= n; i++){
            a[i] = a[i - 1] + rand() % 100;
        }
    }
}   //Khởi tạo ngẫu nhiên từng phần tử từ chỉ số 10 -> n-1

void XuatMang(int a[], int n){
    for(int i = 0; i< n; i++){
        cout << "A[" << i << "] = " << a[i] << endl;
    }
}

//Khởi tạo hàm HoanVi
void HoanVi( int &a, int &b){
    int hoanvi = a;
    a = b;
    b = hoanvi;
}

//Khởi tạo hàm sắp xếp từ nhỏ tới lớn
void SapXep(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){    //giả sử j là phần tử sau i nên j = i+1.
            if(a[i] > a[j]){
                HoanVi(a[i],a[j]);
            }
        }
    }
}