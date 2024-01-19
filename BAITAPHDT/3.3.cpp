/*ONE-INFINITY RELATIONSHIP Cài đặt lớp theo sơ đồ sau
Trong đó n là số mặt hàng trong phiếu.
PHIEU
Maphieu
HANG x[] int n
void NHAP()
void XUAT()
HANG
Mahang
Tenhang
Dongia
void NHAP()
void XUAT()
Viết hàm main nhập vào một phiếu gồm n mặt hàng. In ra thông tin của phiếu.*/

#include<iostream>
#include<vector>

using namespace std;

class HangHoa{
    private:
        int mahang;
        string tenhang;
        double dongia;
    public:
        HangHoa(){}

        void nhapHang(){
            cout << "Nhap ma hang hoa: ";
            cin >> mahang;
            cout << "Nhap ten hang hoa: ";
            cin.ignore();
            getline(cin,tenhang);
            cout << "Nhap gia tien hang hoa: ";
            cin >> dongia;
        }

        void xuatHang(){
             cout <<"**********************************" << endl;
                cout << "Thong tin hang hoa" << endl;
                cout << "Ma hang hoa: " << this->mahang << endl;
                cout << "Ten hang hoa: " << this->tenhang << endl;
                cout << "Gia hang hoa: " << this->dongia << endl;
        }
};

class Phieu{
    private:
        int maphieu;
        vector <HangHoa> x;
        int n;
    public:
        Phieu(){}
        Phieu(int maphieu, int n){
            this->maphieu = maphieu;
            this->n = n;
        }

        void nhapPhieu(){
            for (int i = 0; i < this -> n; i ++) {
                HangHoa a;
                a.nhapHang();
                x.push_back(a);
            }
        }

        void xuatPhieu(){
            cout <<"----------------------------------------" << endl;
            cout << "Ma phieu la: " << maphieu << endl;
             for (int i = 0; i < this -> n; i ++) {
                HangHoa a = x[i];
                a.xuatHang();
            }
        }
};

int main(){
    int n;
    int maphieu;
    cout << "Nhap ma maphieu: ";
    cin >> maphieu;
    cout << "Nhap so luon hang hoa: ";
    cin >> n;
    Phieu x(maphieu,n);
    x.nhapPhieu();
    x.xuatPhieu();
    return 0;
}