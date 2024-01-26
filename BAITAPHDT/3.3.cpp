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

#define MAX 1000

class HangHoa{
    private:
        int mahang;
        string tenhang;
        double dongia;
    public:
        vector<HangHoa> data;

        void nhapHang(int mahang, string tenhang, double dongia){
            HangHoa a;
            a.mahang = mahang;
            a.tenhang = tenhang;
            a.dongia = dongia;
            this->data.push_back(a);
        }

        void xuatHang(int n){
            for(int i = 0; i < n; i++){
                cout <<"**********************************" << endl;
                cout << "Thong tin hang hoa" << endl;
                cout << "Ma hang hoa: " << data[i].mahang << endl;
                cout << "Ten hang hoa: " << data[i].tenhang << endl;
                cout << "Gia hang hoa: " << data[i].dongia << endl;
            }
        }
};

class Phieu:public HangHoa{
    private:
        int maphieu;
    public:
        void nhapPhieu(int maphieu){
            this->maphieu = maphieu;
        }

        void xuatPhieu(int n){
            cout <<"----------------------------------------" << endl;
            cout << "Ma phieu la: " << maphieu << endl;
            HangHoa::xuatHang(n);
        }
};

int main(){
    int n, m;
    int mahang, maphieu;
    double dongia;
    string tenhang;
    Phieu arr[MAX];
    
    cout << "Nhap so luong phieu: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Phieu hang " << i + 1 << ": " << endl;
        cout << "Nhap ma phieu: ";
        cin >> maphieu;
        cout << "Nhap so luong hang hoa tren phieu: ";
        cin >> m;
        arr[i].nhapPhieu(maphieu);
        for(int j = 0; j < m; j++){
            cout << "Nhap hang hoa thu " << j + 1 << endl;
            cout << "Nhap ma hang hoa: ";
            cin >> mahang;
            cout << "Nhap ten hang hoa: ";
            cin.ignore();
            getline(cin,tenhang);
            cout << "Nhap gia tien hang hoa: ";
            cin >> dongia;
            arr[i].nhapHang(mahang,tenhang,dongia);
        }
    }

    for(int i = 0; i < n; i++){
        arr[i].xuatPhieu(m);
    }

    return 0;
}