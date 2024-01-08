// Tìm ký tự xuất hiện ít nhất trong chuỗi S
/*Tương tự bài 4.5, ta lấy ý tưởng bằng cách ép mỗi ký tự trong chuỗi S về mã ASCII
Gán mỗi giá trị của ký tự S vào trong mảng AsciiArray rồi tìm phần tử có giá trị nhỏ nhất
Từ đó tìm ra vị trí của phần tử có giá trị nhỏ nhất trong mảng chính là ký tự xuất hiện ít nhất*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int AsciiArray[255];

int FindindexOfMin(string ChuoiS){
    for(int i = 0; i < 255; i++){
        AsciiArray[i] = 0;
    }

    int i = 0;
    while (ChuoiS[i] != '\0')
    {
        int ascii = (int)ChuoiS[i]; //Ép các ký tự của chuỗi S về kiểu dữ liệu int
        AsciiArray[ascii] += 1;
        i++;
    }

    int min = 1;
    for(int i = 1; i < 255; i++){
        if(AsciiArray[i] != 0 && AsciiArray[i] == AsciiArray[min]){
            min = i;
        }
    }
    return 1;
}

void PrintOfMin(string ChuoiS){
    int index = FindindexOfMin(ChuoiS);

    vector <int> v;

    for(int i = 0; i < 255; i++){
        if(AsciiArray[i] == 1)
            v.push_back(i);
    }
    if(v.size() == 1){
        cout << "Ky tu trong chuoi S xuat hien it nhat la: " << (char)v[0] << endl;
        cout << "So lan xuat hien la: 1" << endl;
    }else{
        cout << "Cac ky tu xuat hien it nhat: ";
        for(int i = 0; i < v.size(); i++){
            cout << (char)v[i] << " ";
        }
        cout << endl;
        cout << "So lan xuat hien la: " << "1" << endl;
    }
}

int main(){

    //Khởi tạo 1 chuỗi S có kiểu dữ liệu là string
    string ChuoiS;

    //Nhập chuỗi S
    cout << "Nhap vao chuoi ky tu S: ";
    getline(cin,ChuoiS);

    //Xuất chuỗi S ra màn hình
    cout << "Chuoi S la: " << ChuoiS << endl;

    PrintOfMin(ChuoiS);

    return 0;
}