//Viết HÀM thực hiện các chức năng trên mảng 1 chiều như sau:
// 1. Nhập mảng số nguyên A gồm n phần tử phát sinh ngẫu nhiên sao cho các phần tử
// trong mảng không trùng nhau và thỏa điều kiện 10 < A[i] < 10000

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

#define MAX 10000

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);

int main(){
    int a[MAX];
    int n;

    NhapMang(a,n);
    XuatMang(a,n);
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

/* Bài tập này em sử dụng thư viên ctime và cstdlib để random số của các phần tử từ 1 -> n -1
và gía trị đặt ra là 10 < a[i] < 10000 nên ta dùng tiền khai báo define max là 10000
ta sử dụng hàm srand() để random số và truyền vào đó hàm time có giá trị null.
Sau đó ta cứ khởi tạo nhâpj vào số lượng phần tử trong mảng a[n]
nêú nhập vaò n > 0, ta có giá trị trong mảng a[i] random từ 0 -> 10000,
dùng vòng lặp for để nhập và xuất giá trị của các phần tử mảng.*/