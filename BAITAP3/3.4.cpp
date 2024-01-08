//Tìm các phần tử có giá trị là dãy số tăng / đối xứng.

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

#define MAX 10000

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
bool SoTang(int n);
int CheckSoTang(int a[], int n);
bool SoDoiXung(int n);
int LietKeSoDoiXung(int a[], int n);

int main(){
    int a[MAX];
    int n;

    NhapMang(a,n);
    XuatMang(a,n);

    CheckSoTang(a,n);
    // XuatMang(a,n);

    LietKeSoDoiXung(a,n);
    // XuatMang(a,n);

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

bool SoTang(int n){ 
    int temp = n;   
    int r = temp % 10;
    temp /= 10;
    int k;
    while (temp >= 10)  
    {
        k = temp % 10;  //tách ra số ke cuối
        temp /= 10; //chạy lại temp = temp / 10/
        
        
    }
    if(r > k)  //Hiểu là nếu số cuối > số kề cuối. số kề cuối = (n / 10) % 10
            return true;    //trả về đúng hoặc sai
        else
            return false;
}

int CheckSoTang(int a[], int n){    
    int KiemTra = 0;    //khởi tạo biến Kiemtra để sau khi check đc phần tử trong mảng a thoả mãn thì gán với biến Kiemtra
    for (int i = 0; i < n; i++)
    {
        if(SoTang(a[i]) == true){   //Nếu đúng thì Kiemtra = a[i]
            KiemTra = a[i];
        }
    }
    cout << "So Tang trong mang a[n] la: " << KiemTra << endl;  //Xuất ra màn hình
    return KiemTra; //trả về gía trị của Kiemtra
}

bool SoDoiXung(int n)   //tương tự câu trên khởi tạo hàm check trc
{
    int s = 0;  //S là số đảo ngược của n
    int temp = n;   //gán temp = n trc
    while( n != 0 ){    
        s = s * 10 + ( n % 10 );    //Đảo ngược 1 số nguyên bất kì
        n = n / 10;
    }

    if( s == temp ){    //check temp tức n ban đầu có == s (số đảo ngược ko)
        return true;    //trả về đúng or sai
    }
    return false;
}

int LietKeSoDoiXung(int a[], int n){
    int KiemTra = 0; //Nếu trong mảng không tồn tại số nào là số đối xứng thì trả về 0

    for (int i = 0; i < n ; i++){
        if(SoDoiXung(a[i]) == true){
            KiemTra = a[i];
        }
    }
    cout << "so doi xung trong mang la: " << KiemTra << endl;
    return KiemTra;
}