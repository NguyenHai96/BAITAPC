/* 1.3 OBJECT ARRAY
Cài đặt lớp Hàng Hóa với các thuộc tính: Mã hàng, Tên hàng, Đơn giá, Số lượng và các phương thức:
NHAP: nhập thông tin của mặt hàng.
XUAT: xuất thông tin của mặt hàng lên màn hình (dữ liệu xuất trên 1 dòng) kèm theo Thành tiền.
Viết hàm main nhập vào một danh sách gồm n mặt hàng. In danh sách các mặt hàng vừa nhập ra màn hình.*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class HangHoa{
    private:
        string mahang;
        string tenhang;
        float dongia;
        int soluong;
        
    public:
        HangHoa(){};
        void nhap(){
            cout << "Nhap ma hang: ";
            cin.ignore();
            getline(cin,mahang);
            cout << "Nhap ten hang: ";
            getline(cin,tenhang);
            cout << "Nhap don gia cua hang: ";
            cin >> dongia;
            cout << "Nhap so luong cua hang: ";
            cin >> soluong;
            
        };

        void xuat(){
            cout << "-------------------------------------------------" << endl;
            cout << "Ma hang: " << this ->mahang << endl;
            cout << "Ten hang: " << this ->tenhang << endl;
            cout << "Don gia: " << this ->dongia << endl;
            cout << "So luong: " << this ->soluong << endl;
            cout << "Thanh tien: " << this->dongia * this->soluong << endl;
        };
};

int main(){
    vector <HangHoa> data;
    HangHoa list;
    int n;
    cout << "Nhap vao so luong mat hang: ";
    cin >> n;
    for(int i = 0; i < n ; i++){
        cout << "Nhap mat hang thu: " << i + 1 << endl;
        list.nhap();
        data.push_back(list);
    };

    for(int i = 0; i < n; i++){
        data[i].xuat();
    };
    return 0;
}