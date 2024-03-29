//Tìm phần tử có giá trị lớn thứ 2 và nhỏ thứ 2 trong mảng.

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

#define MAX 10000

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
void HoanVi(int &a, int &b);
void SapXep(int a[], int n);
int SecondMax(int a[], int n);
int SecondMin(int a[], int n);

int main(){
    int a[MAX];
    int n;

    NhapMang(a,n);
    XuatMang(a,n);

    //Xuất ra màn hình số lớn thứ 2 và nhỏ thứ 2 trong mảng
    cout << "So lon thu 2 trong mang la: " << SecondMax(a,n) << endl;
    cout << "So nho thu 2 trong mang la: " << SecondMin(a,n) << endl;

    return 0;
}

void NhapMang(int a[], int &n){
    srand(time(NULL));

    cout << "Nhap vao so luong phan tu trong mang a[n]: ";
    cin >> n;

    int temp;
    
    for(int i = 0; i < n; i++){
        temp = rand() % 9999 + 11;
        
        if (i == 0) {
            a[i] = temp;
        } else {
            for(int j = 0; j < i; j++){
                while(a[j] == temp){
                    j = 0;
                    temp = rand() % 9999 + 11;
                }
            }
            a[i] = temp;
        }
    }
}

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

//Khởi tạo hàm sắp xếp từ lớn tới nhỏ
void SapXep(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                HoanVi(a[i],a[j]);
            }
        }
    }
}

// => số lớn thứ 2 là a[1]
int SecondMax(int a[], int n){
    SapXep(a,n);
    return a[1];    //trả về giá trị a[1]
}

// => số nhỏ thứ 2 là a[n-2]
int SecondMin(int a[], int n){
    SapXep(a,n);
    return a[n-2];  //trả về giá trị a[n-2]
}