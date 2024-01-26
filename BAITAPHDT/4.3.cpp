/*Cài đặt lớp theo sơ đồ sau (thuộc tính Ngaysx = Ngày sản xuất)
HANG                                  DATE  
Mahang                              D (ngày)
Tenhang                             M (tháng)
DATE Ngaysx                         Y (năm)
void NHAP()
void XUAT()
Cài đặt hàm main nhập vào một danh sách các mặt hàng. In ra các mặt hàng sản xuất trong năm 2017.
*/

#include<iostream>
#include<vector>

using namespace std;

class Hang;

class Date{
    private:
        int day;
        int month;
        int year;
    public:
        Date(){}
        Date(int day, int month, int year){
           this->day = day;
            this->month = month;
            this->year = year;
        }
        friend class Hang;
        void inputDate(){
            cout << "Nhap ngay/thang/nam cua mat hang: "; 
            cin >> day; cin >> month; cin >> year;
        }

        void outputDate(){
            cout << "Ngay/Thang/Nam san xuat cua hang hoa: " << day << "/" << month << "/"<< year << endl;
        }
};

class Hang{
    private:
        int idhang;
        string namehang;
        Date ngaySanXuat;
    public:
        Hang(){}
        
        Hang(int idhang, string namehang){
            this->idhang = idhang;
            this->namehang = namehang;
        }
        
        void inputHang(){
            cout << "Nhap ma so mat hang: ";    cin >> idhang;
            cout << "Nhap ten mat hang: ";  cin.ignore();   getline(cin,namehang);
            ngaySanXuat.inputDate();
        }

        int getYear(){
            return ngaySanXuat.year;
        }
        
        void outputHang(){
            cout <<"---------------------------------" << endl;
            cout << "Ma hang hoa: " << this->idhang << endl;
            cout << "Ten hang hoa: " << this->namehang << endl;
            ngaySanXuat.outputDate();
        }
};

int main(){
    vector<Hang> list;
    Date x;
    int n;
    cout << "Nhap so luong hang hoa: "; 
    cin>> n;
    for(int i = 0; i < n ; i++){
        cout << "Nhap thong tin mat hang: " << i+ 1 << endl;
        Hang y;
        y.inputHang();
        list.push_back(y);
    }
    
    for(int i = 0; i< n ; i++){
        if(list[i].getYear() == 2017){
            list[i].outputHang();
        }
    }
    
    return 0;
}