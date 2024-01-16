/*5. Tìm giá trị lớn nhất ở mỗi dòng trong ma trận A.*/

#include<iostream>

using namespace std;

#define ROW 100
#define COL 100

int max(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int min(int a, int b){
    if(a < b)
        return a;
    else
        return b;
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

    int maxd = 0;
    for(int i = 0; i < n; i++){
        maxd = arrA[i][0];
        for(int j = 0; j < m ; j++){
            maxd = max(arrA[i][j],maxd);
        }
        cout << "Phan tu co gia tri lon nhat cua dong " << i + 1 << " la: " << maxd << endl;
    }

    int minc;
    for(int j = 0; j < m; j++){
        minc = arrA[0][j];
/*Cho chạy vòng lặp từ i=0 đến i<n-1, vì tiếp theo ta sẽ xét i0 vs i1 và tiếp tục đến i = n-2 vs i = n - 1 là hết vòng lặp
nếu mà lớn hơn, ta có i = n thì ko có giá trị đó của mảng tại vị trí đó. nên vòng lặp sẽ ko hiểu*/
        for(int i = 0; i < n; i++){ 
            minc = min(arrA[i][j],minc);
        }
        cout << "Phan tu co gia tri nho nhat cua cot " << j + 1 << " la: " << minc << endl;
    }

    return 0;
}