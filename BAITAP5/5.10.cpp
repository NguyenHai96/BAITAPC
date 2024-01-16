// 10. Tính TBC tất cả các giá trị của ma trận A.

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

    double TBC, sum;
    // int sum;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum = sum + arrA[i][j];
        }
    }
    TBC = sum / (n*m);
    cout << "Trung binh cong la: " << TBC << endl;

    return 0;
}