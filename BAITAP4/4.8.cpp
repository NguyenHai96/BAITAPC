// Nhập vào 1 chuỗi T và kiểm tra chèn chuỗi T xuất hiện trong chuỗi S bao nhiêu lần
/*ý tưởng: Ta cho 2 chuỗi S và T, ta tìm ra số ký tự trong từng chuỗi. Ta gỉa sử chuỗi T < Chuỗi S
=> t.lenght() < s.lenght(). chạy for từ 0 -> het s - t thì sẽ tìm ra đc ChuoiCheck(Chứa các ký tự ko giống nhau) và gán bằng mảng null.
Ta cho vòng for chạy từ i -> i+ m để xem thử có ký tự nào của mảng T giống với mảng S hay ko.
Nếu giống thì cho biến dem tăng lên 1. */

#include<iostream>
#include<string>

using namespace std;

int main(){
    //Khởi tạo 1 chuỗi S có kiểu dữ liệu là string
    string ChuoiS;
    string ChuoiT;

    //Nhập chuỗi S vs T
    cout << "Nhap vao chuoi ky tu S: ";
    getline(cin,ChuoiS);
    cout << "Nhap vao chuoi ky tu T: ";
    getline(cin,ChuoiT);
    
    //Xuất chuỗi S vs T ra màn hình
    cout << "Chuoi S la: " << ChuoiS << endl;
    cout << "Chuoi T la: " << ChuoiT << endl;

    int n = ChuoiS.length();
    int m = ChuoiT.length();

    int dem = 0;
    string ChuoiCheck;
    for(int i = 0; i <= n - m; i++){
        ChuoiCheck = "\0";
        for(int j = i; j < i + m; j++){
            ChuoiCheck = ChuoiCheck + ChuoiS[j];
        }
        if(ChuoiCheck == ChuoiT){
            dem++;
        }
    }
    cout << "Chuoi T lap lai trong Chuoi S la: " << dem << " lan!"  << endl;

    return 0;
}