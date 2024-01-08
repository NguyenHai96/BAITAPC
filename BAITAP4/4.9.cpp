// Huỷ n ký tự từ vị trí K trong chuỗi S. (n,k là số nguyên được nhập từ bàn phím)
/*Ý tưởng: Dùng toán tử cục tẩy (tên chuỗi.erase<vitridau,vitricuoi>)*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    //Khởi tạo 1 chuỗi S có kiểu dữ liệu là string
    string ChuoiS;

    cout << "Nhap vao chuoi ky tu S: ";
    getline(cin,ChuoiS);

    cout << "Chuoi S la: " << ChuoiS << endl;

    int s = ChuoiS.length();

    int n , k;
    cout << "Nhap vao vi tri k can xoa: ";
    cin >> k;
    cout << "Nhap vao n ky tu can xoa: ";
    cin >> n;

    ChuoiS.erase(ChuoiS.begin()+k,ChuoiS.begin()+ k + n);
    
    cout << "Chuoi S sau khi xoa la: " << ChuoiS << endl;

    return 0;
}