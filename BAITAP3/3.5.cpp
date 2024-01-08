// In ra các cặp phần tử có giá trị đảo ngược nhau.

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

#define MAX 1000

void NhapMang(int a[], int &n);
void XuatMang(int a[], int n);
bool SoTang(int n);
int CheckSoTang(int a[], int n);
bool SoDoiXung(int n);
int LietKeSoDoiXung(int a[], int n);
int SoDaoNguoc(int n);

int main(){
    int a[MAX];
    int n;

    NhapMang(a,n);
    // XuatMang(a,n);

    for(int i = 0; i < (n - 1); i++){
        for(int j = i + 1; j < n; j++){
            if(SoDaoNguoc(a[i]) == a[j]){
                cout << "Cac cap phan tu a[" << i <<"] = " << a[i] << " va a[" << j << "] = " << a[j] <<"la cac phan tu doi xung nhau trong mang" << endl;
            }
        }
    }

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

int SoDaoNguoc(int n){  
    int s = 0;
    int themang = n;
    while (themang != 0)
    {
        s = s * 10 + (themang % 10);
        themang /= 10;
        
    }
    return s;
}
