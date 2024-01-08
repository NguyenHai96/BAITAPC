// Nhập vào 1 chuỗi T và 1 số nguyên K, chèn chuỗi T vào vị trí K trong chuỗi S
/*Ý tưởng: Chuỗi S có n ký tự => Mảng S có n phần tử. Vậy int k phải < n thì mới chèn chuỗi T vào đc
Và chuỗi T giống như 1 mảng T[i] có i phần tử => Mảng mới S có n+i phần tử.
Cách làm: Ta sẽ cho vòng lặp for chạy từ 0 - k để có chuỗi 0 - k, lại chạy tiếp for từ k - n để có chuỗi k - n
=> Chuoi sau khi gộp sẽ là: chuoi S trc k + chuoi T + chuỗi S sau k*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    //Khởi tạo 1 chuỗi S có kiểu dữ liệu là string
    string ChuoiS;
    string ChuoiT;
    string ChuoiGop;
    string ChuoiSTrc;
    string ChuoiSSau;
    int k;

    //Nhập chuỗi S vs T
    cout << "Nhap vao chuoi ky tu S: ";
    getline(cin,ChuoiS);
    cout << "Nhap vao chuoi ky tu T: ";
    getline(cin,ChuoiT);
    
    //Xuất chuỗi S vs T ra màn hình
    cout << "Chuoi S la: " << ChuoiS << endl;
    cout << "Chuoi T la: " << ChuoiT << endl;
    cout << "So ky tu trong mang S la: " << ChuoiS.length() << endl;
    
    int n = ChuoiS.length();
    
    do{
    cout << "Nhap vao vi tri k de them Chuoi T vao Chuoi S: ";
    cin >> k;
    if(k < 0 || k > n){
        cout << "Xin moi nhap lai vi tri k (0 <= k < n): " << endl;
    }
    }while(k < 0 || k > n);

    for(int i = 0; i < k; i++){
        ChuoiSTrc = ChuoiSTrc + ChuoiS[i];
    }
    for(int j = k; j < n; j++){
        ChuoiSSau = ChuoiSSau + ChuoiS[j];
    }
    ChuoiGop = ChuoiSTrc + ChuoiT + ChuoiSSau;
    cout << "Chuoi sau khi Khi gop Chuoi T vao chuoi S o vi tri K la: " << ChuoiGop << endl;

    return 0;
}