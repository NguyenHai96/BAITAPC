// 4. Tìm và in ra các số nguyên tố có trong ma trận A.

#include<iostream>

using namespace std;

#define ROW 100
#define COL 100

bool KtSoNT(int n){
    int k = 0;
    if(n < 2){
        return false;
    }else{    
        for(int i = 2; i <= n/2 ; i++){
            if(n % i == 0)
                k++;
        }
        if(k == 0){
            return true;
        }else{
            return false;
        }
    }
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
        for(int j = 0; j < m; j++){
            if(KtSoNT(arrA[i][j]) == true){
                cout << "Cac so nguyen to trong ma tran A la: " << arrA[i][j] << endl;
            }
        }
    }

    return 0;
}