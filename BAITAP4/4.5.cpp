// Tìm ký tự xuất hiện nhiều nhất trong chuỗi S.
/*ý tưởng: Dựa vào cách tìm 1 số xuất hiện nhiều nhất trong 1 mảng*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int AsciiArray[255];    //sử dụng bảng mã ASCII và bảng mã ASCII có 255 ký tự, mỗi số từ 0 -> 254 tương đương với mỗi ký tự khác nhau.

//Trả về phần tử có số lần xuất hiện nhiều nhất
int FindindexOfMax(string ChuoiS){
    
    for(int i = 0; i < 255; i++){  
        //ta gán giá trị ban đầu cho mỗi phần tử của mảng đều bằng 0 hết
        AsciiArray[i] = 0;  
    }
    
    int i = 0;
    
    while (ChuoiS[i] != '\0')   
    {
        //Khởi tạo biến ascii = giá trị của từng phần tử chuổi S khi ép về kiểu dữ liệu int
        int ascii = (int)ChuoiS[i]; 
        AsciiArray[ascii] = AsciiArray[ascii] + 1;
        i++;
    }
    
    int max = 0; 
    for(int i = 0; i < 255; i++){ 
        if(i != 32){    //tức là i ko phải là dấu space. số 32 trong bảng ASCII là dấu cách
            
            if(AsciiArray[i] > AsciiArray[max]){ 
                max = i;
            }
        }
    }
    return max; 
    //max chính là mã ASCII của ký tự xuất hiện nhiều lần nhất trong chuỗi S
}

//Hàm in ra kết quả
void printResult(string ChuoiS){
    int index = FindindexOfMax(ChuoiS); 
    
    //khai báo vector v
    vector <int> v;
    /*vì sao dùng vector mà ko dùng mảng: vì chưa biết đc có bao nhiêu phần tử xuất hiện nhiều nhất
    có thể là 1 hoặc nhiều hơn. Nên dùng vector để lưu trữ những ký tự đó vì nếu dùng mảng thì ta ko biết
    có bao nhiêu phần tử để dùng mảng. Và dùng vector thì việc thêm phần tử vào cũng dễ hơn*/
    
    
    for(int i = 0; i < 255; i++){
        if(AsciiArray[i] == AsciiArray[index]){
            v.push_back(i); //tức i này sẽ ở vị trí là v[0]
        }
    }
    //2 trường hợp thì, trường hợp 1: chuỗi AsciiArray có 1 giá trị hớn nhất => vector chỉ có 1 phần tử là v[0] => v.size()"Kích thước vector" == 1
    if(v.size() == 1){
        cout << "Ky tu trong chuoi S xuat hien nhieu nhat la: " << (char)v[0] << endl;  //ép kiểu vector từ int thành kiểu char để trở thành lại kiểu dữ liệu ban đầu của chuỗi S
        cout << "So lan xuat hien: " << AsciiArray[index] << endl;  //Số lần xuất hiện chính là giá trị của phần tử max trong mảng AsciiArray
    }
    else    //Ngược lại, trường hợp 2: Chuỗi AsciiArray có nhiều hơn 1 giá trị lớn nhất => v.size() > 1
    {
        cout << "Cac ky tu xuat hien nhieu nhat: ";
        for(int i = 0; i < v.size(); i++)   //Dùng vòng lặp for để chạy qua từng phần tử trong vector v
            cout << (char)v[i] << " "; 
        cout << endl;
        cout << "So lan xuat hien: " << AsciiArray[index] << endl;
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

    printResult(ChuoiS);

    return 0;
}