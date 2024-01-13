/*Viết chương trình thực hiện các thao tác trên mảng 2 chiều (xem mảng 2 chiều như 1 ma
trận gồm n dòng và m cột):
1. Nhập ma trận A gồm n dòng và m cột.
2. Xuất ma trận A ra màn hình dạng ma trận.
3. Nhập vào 1 số nguyên K và kiểm tra K xuất hiện tại vị trí nào trong A.*/

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

    int k;
    cout << "Nhap vao so nguyen K: ";
    cin >> k;
    for(int a = 0; a < n; a++){
        for(int b = 0; b < m; b++){
            if(arrA[a][b] == k)
                cout << "So " << k << " nam o vi tri dong " << a + 1 << " cot " << b + 1 << endl;
        }
    }

    return 0;
}