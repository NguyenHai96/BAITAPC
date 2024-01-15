/*OBJECT ARRAY CONTINUE
Cài đặt lớp Sách bao gồm các thuộc tính: Mã sách, Tên sách, Nhà xuất bản, Số trang, Giá tiền và các phương thức:
NHAP: nhập vào các thông tin của sách.
XUAT: xuất thông tin của sách ra màn hình (trên 1 dòng).
Viết hàm main nhập vào một danh sách gồm n cuốn sách. In danh sách đã sắp ra màn hình.*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Book{
    private:
        int masach;
        string tensach;
        string nhaxuatban;
        int sotrang;
        float giatien;
    public:
        Book(){}

        void nhap(){
            cout << "Nhap ma cua sach: ";
            cin >> masach;
            cout << "Nhap ten cua sach: ";
            cin.ignore();
            getline(cin,tensach);
            cout << "Nha xuat ban sach: ";
            getline(cin,nhaxuatban);
            cout << "So trang cua sach: ";
            cin >> sotrang;
            cout << "Gia tien cua sach: ";
            cin >> giatien;
        }

        void xuat(){
            cout << "Ma sach: " << this ->masach << "\t Ten sach la: " << this ->tensach <<"\t Nha xuat ban: " << this->nhaxuatban << "\t So trang: " << this ->sotrang << "\t Gia tien: " << this ->giatien << endl; 
        }
};

int main(){
    Book list;
    vector <Book> data;
    
    int n;
    cout << "Nhap so luong cuon sach trong thu vien: ";
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cout << "Cuon sach thu " << i + 1 << ": " << endl;
        list.nhap();
        data.push_back(list);
    }

    for(int i = 0; i < n; i++){
        data[i].xuat();
    }

    return 0;
}