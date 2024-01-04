// Nhập 1 giá trị số nguyên K, tìm vị trí cần chèn vào mảng A (mảng đã sắp xếp) sao cho
// mảng vẫn có tính thứ tự. (không sắp xếp lại mảng).

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

#define MAX 10000

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
void ThemPhanTu(int a[], int &n, int index, int k);

int main(){
    int a[MAX];
    int n;

    NhapMang(a,n);
    XuatMang(a,n);

    int index, k;
    cout << "Nhap gia tri can them vao mang: ";
    cin >> k;
    cout << "Nhap vao vi tri them vao mang: ";
    cin >> index;
    ThemPhanTu(a,n,index,k);
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

void ThemPhanTu(int a[], int &n, int index, int k){
    if(index > 0 && index <= n){
        for(int i = n; i>index; i--){
            a[i] = a[i - 1];
        }
        a[index] = k;
        n++;
    }
}
/*Khởi tạo hàm void thêm phần tử vào mảng có tham số là:
mảng a[], tham số địa chỉ số lương phần tử n trong mảng a, địa chỉ phần tử thêm vào index, giá trị thêm vào k
Nếu 0 < index <= n thì chạy vòng lặp for có giá trị i = n và i > index, i chạy tử n -> 0
a[i] = a[i-1] tức thêm vào index = 10 và n = 20 thì i chạy tử 19 -> 0, tới lúc i gặp index = 10
thì i sẽ nhảy xuống i - 1 => a[i] = a[i -1] và gía trị của a[index] = k, số lượng phần tử n tăng lên n++
ban đầu là 20, thì sau tăng lên là 21*/
