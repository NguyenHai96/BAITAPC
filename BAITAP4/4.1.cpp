// Viết hàm thực thi những yêu cầu sau trên chuỗi ký tự S:
// 1. Nhập và xuất chuỗi S ra màn hình.
// Đếm trong chuỗi có bao nhiêu ký tự viết hoa, thường, số và ký tự khác (@,$,?,* ....)

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

enum Type{  //Ta khởi tạo biến Type kiểu enum và các biến hằng gồm: INHOA, inthuong, ChuSo, KyTuDacBiet
    inhoa,
    inthuong,
    chuso,
    kytudacbiet
};

int CheckString(string a, enum Type Check);

int main(){

    //Khởi tạo 1 chuỗi S có kiểu dữ liệu là string
    string ChuoiS;

    //Nhập chuỗi S
    cout << "Nhap vao chuoi ky tu S: ";
    getline(cin,ChuoiS);

    //Xuất chuỗi S ra màn hình
    cout << "Chuoi S la: " << ChuoiS << endl;

    //In số lượng các ký tự ra màn hình
    cout << "Chuoi S co so ky tu in hoa la: ";
    cout << CheckString(ChuoiS,inhoa) << endl;  //truyền vào chuỗi S để check và gọi biến INHOA để trả về giá trị đếm chữ INHOA.
    cout << "Chuoi S co so ky tu in thuong la: ";
    cout << CheckString(ChuoiS,inthuong) << endl;
    cout << "Chuoi S co so ky tu So la: ";
    cout << CheckString(ChuoiS,chuso) << endl;
    cout << "Chuoi S co so ky tu Dac Biet la: ";
    cout << CheckString(ChuoiS,kytudacbiet) << endl;

    return 0;
}

//Tạo hàm CheckString và trả về giá trị đếm của từng kiểu ký tự
int CheckString(string a, enum Type Check){ //Có 2 tham số là chuỗi a, và biến Check của kiểu enum
    //Khởi tạo 3 chuỗi ký tự mặc định in hoa, in thường và số.
    string CHUINHOA("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string chuinthuong("abcdefghijklmnopqrstuvwxyz");
    string SoChuSo("0123456789");
    //Khởi tạo các biến đếm các chuỗi
    int n = a.length(); //Biến n là số lượng phần tử trong chuỗi a(chuỗi a đc xem là mảng a[n])
    int n_inhoa = 0;    //Biến n_inhoa đếm số chữ in hoa
    int n_inthuong = 0; //Đếm số chữ in thường
    int n_so = 0;   //Đếm số chữ số
    int special;    //Biến đếm ký tự đặc biệt
    for(int i = 0; i <= n; i++){    //Cho vòng lặp chạy từ 0 -> n để duyệt từng ký tự trong chuỗi a
        for(int j = 0; j < 26; j++){    //Vòng lặp chạy chạy từ 0 -> 26 là vòng lặp chạy duyệt qua các ký tự trong chuỗi INHOA trên, chuỗi trên có 26 ký tự
            if(a[i] == CHUINHOA[j]) //Nếu giá trị nào đó của chuỗi a trùng với giá trị nào đó trong chuỗi INHOA
                n_inhoa++;  //Thì biến đếm n_inhoa tăng lên. tức từ 0-> 1 >>>
            if(a[i] == chuinthuong[j])  //Tương tự trên
                n_inthuong++;
        }
        for (int l = 0; l < 10; l++)    //Vòng lặp qua chuỗi SoChuSo trên, và chuỗi trên có 10 ký tự
        {
            if(a[i] == SoChuSo[l])
                n_so++;
            
        }
    }
    special = n - (n_inhoa + n_inthuong + n_so);    //Biến đếm ký tự đặc biệt sẽ bằng số ký tự trong chuỗi a trừ đi các ký tự còn lại
    switch (Check)  //Dùng câu lệnh điều kiện switch để kiểu tra và xuất ra giá trị của từng case
    {
        case inhoa: //Khi goị biến hằng INHOA thì trả về giá trị biến đếm n_inhoa.
            return n_inhoa;
            break;
        
        case inthuong:  //tương tự
            return n_inthuong;
            break;
        
        case chuso: //tương tự
            return n_so;
            break;
        
        case kytudacbiet:   //tương tự
            return special;
            break;
    }
}