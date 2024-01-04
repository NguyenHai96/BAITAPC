//Nhập vào một chuỗi M và xóa chuỗi M nếu M có trong chuỗi S.

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){

    //Khởi tạo 1 chuỗi S có kiểu dữ liệu là string
    string ChuoiS;

    //Nhập chuỗi S
    cout << "Nhap vao chuoi ky tu S: ";
    getline(cin,ChuoiS);

    //Xuất chuỗi S ra màn hình
    cout << "Chuoi S la: " << ChuoiS << endl;

    string ChuoiM;
    cout << "Nhap vao chuoi ky tu M: ";
    getline(cin,ChuoiM);
    cout << "Chuoi M la: " << ChuoiM << endl;

    int n = ChuoiS.length();    //n là số lượng ký tự trong chuỗi S
    int m = ChuoiM.length();    //m là số lượng ký tự trong chuổi M
    for(int i = 0; i < n; i++){     //Lặp chuỗi S
        for(int j = 0; j < m; j++){ //lặp chuỗi M
            if(ChuoiS[i] == ChuoiM[j]){ //Nếu giá trị của 1 ký tự nào đó chuỗi S bằng với giá trị của ký tự chuỗi M
                ChuoiM[j] = '\0';   //Chuỗi M = Null or chuỗi M ='\0'
            }
        }
    }
    cout << "Chuoi M sau khi xoa: " << ChuoiM << endl;

    return 0;
}