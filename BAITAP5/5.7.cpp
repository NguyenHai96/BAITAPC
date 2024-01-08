// 7. Tính tổng giá trị của các phần tử ở mỗi dòng trong ma trận A.
// 8. Tính tổng giá trị của các phần tử ở mỗi cột trong ma trận A.

#include<iostream>

using namespace std;

#define ROW 100
#define COL 100

int main(){
    int arrA[ROW][COL];
    int n,m;

    //Nhap so dong va cot
    cout << "Nhap so dong: ";
    cin >> n;
    cout << "Nhap so cot: ";
    cin >> m;

    //Nhap mang 2 chieu
    cout << "Nhap mang: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "arrA[" << i << "][" << j << "] = ";
            cin >> arrA[i][j];
        }
    }

    //Xuat ma tran arrA
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arrA[i][j] << " ";
        }
        cout << endl;
    }

    //Tong dong
    
    for(int i = 0; i < n; i++){
/*Phải khởi tạo biến sumd trong hàm for để khi mỗi vòng lặp i++ thì sumd luôn có giá trị khởi đầu bằng 0
Nếu khởi tạo sum bên ngoài thì sẽ sumd sẽ bị cộng dồn lên.*/
        int sumd = 0;
        for(int j = 0; j < m ; j++){
            sumd = sumd + arrA[i][j];
        }
        cout << "Tong cac phan tu cua dong " << i + 1 << " la: " << sumd << endl;
    }

    for (int j = 0; j < m; j++)
    {
        int sumc = 0;
        for(int i = 0; i < n; i++){
            sumc = sumc + arrA[i][j];
        }
        cout << "Tong cac phan tu cua cot " << j + 1 << " la: " << sumc << endl;
    }
    

    return 0;
}