// Tìm ký tự xuất hiện nhiều nhất trong chuỗi S.

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

    int n = ChuoiS.length();
    int numloop[1000];
    for(int k = 0; k < n; k++){
        numloop[k] = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(ChuoiS[i] == ChuoiS[j]){
                numloop[i] = numloop[i] + 1;
            }
        }
    }
    
    return 0;
}