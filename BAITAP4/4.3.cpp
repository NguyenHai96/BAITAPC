// In ra tất cả các lần xuất hiện của các ký tự trong chuỗi S.

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

    //Khởi tạo biến n là số lượng các ký tự của chuỗi S
    int n = ChuoiS.length();    //Tính số lượng ký tự của chuỗi S bằng toán tử .lenght()
    for(int i = 0; i < n; i++){ //Lặp qua từng ký tự và xuất ký tự đó ra màn hình
        cout << ChuoiS[i] << endl;
    }

    return 0;

}