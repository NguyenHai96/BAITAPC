// Nhập vào mảng B (sử dụng hàm nhập ở câu 1) và kiểm tra mảng B có phải là mảng
// con của mảng A hay không?

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

#define MAX 10000

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
int KiemTraMangCon(int a[], int n, int b[], int m);

int main(){
    int a[MAX];
    int n;

    NhapMang(a,n);
    XuatMang(a,n);

    int b[MAX];     //Khai báo mảng b có m phần tử
    int m;
    
    NhapMang(b,m);  //Sử dụng hàm nhập và xuất ở câu 1
    XuatMang(b,m);

    // Kiểm tra b có phải là mảng con của a ko
    int KT = KiemTraMangCon(a,n,b,m);   //Gán biến KT = giá trị của hàm KiemTraMangCon
    if(KT == 1){    //Nếu KT trả về giá trị là 1 thì b là mảng con, ngược lại thì ko phải
        cout << "Mang b la mang con cua Mang a";
    }else{
        cout << "Mang b ko phai la mang con cua Mang a";
    }



    return 0;
}

void NhapMang(int a[], int &n){

    srand(time(NULL));  //Khởi tạo số ngẫu nhiên

    cout << "Nhap vao so luong phan tu trong mang a[n]: ";
    cin >> n;

    int i;
    if(n > 0){
        a[i] = rand() % 100;
        for(i = 0; i < n; i++){
            a[i] = a[i - 1] + rand() % 100;
        }
    }
}   //Khởi tạo ngẫu nhiên từng phần tử từ chỉ số 10 -> n-1

void XuatMang(int a[], int n){
    for(int i = 0; i< n; i++){
        cout << "A[" << i << "] = " << a[i] << endl;
    }
}

int KiemTraMangCon(int a[], int n, int b[], int m){
    int Kiemtra = 0;
    if(m <= n){
        for(int i = 0; i < n; i++){
            if(a[i] == b[0]){
                int j = 0;
                for(; j <= m; j++){
                    if(a[i+j] != b[j])
                        break;
                }
                if(j == m)
                    Kiemtra = 1;
            }
        }
    }
    return Kiemtra;
}