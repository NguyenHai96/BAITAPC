// 9. Sắp xếp giá trị tăng dần các phần tử ở mỗi dòng trong ma trận A.

#include<iostream>

using namespace std;

#define ROW 100
#define COL 100

int arrange(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

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

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m - 1; j++){
            for(int k = j + 1; k < m; k++){
                if(arrA[i][j] > arrA [i][k]){
                    arrange(arrA[i][j],arrA[i][k]);
                }
            }
        }
    }
    
    cout << "Mang sau khi sap xep tang dan la: " << endl;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++){
            cout << arrA[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}