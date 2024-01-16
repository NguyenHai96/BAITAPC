/*Cho kiểu cấu trúc sinh viên gồm các thuộc tính: Họ tên, MSSV, Lớp, Điểm RL, Điểm TB
Viết chương trình thực hiện các công việc sau:
1. Nhập danh sách n sinh viên (n là số nguyên nhập từ bàn phím)
2. Xuất danh sách n sinh viên ra màn hình
3. Xuất ra thông tin sinh viên có điểm RL lớn nhất / điểm TB lớn nhất.*/

#include<iostream>

using namespace std;

struct Sinhvien{
    int mssv;
    string name;
    int diemrl;
    double diemtb;
    string xeploai;

    void InSv(){
        cout << "-----------------------------------------\n";
        cout << "Ma so Sv: " << mssv << endl;
        cout << "Ten Sv: " << name << endl;
        cout << "Diem Rl: " << diemrl << endl;
        cout << "Diem trung binh: " << diemtb << endl;
        cout << "-----------------------------------------\n";
    }

    void Nhap(){
        cout << "Nhap Ma so Sinh Vien: "; cin >> mssv;
        cout << "Nhap Ten SV: ";
        cin.ignore();
        getline(cin,name);
        cout << "Nhap Diem Rl: "; cin >> diemrl;
        cout << "Nhap Diem TB: "; cin >> diemtb;
    }
};

void InDs(Sinhvien a[], int n){
    cout << "-----------------------------------------\n";
    cout << "Thong tin danh sach sinh vien: \n";
    for(int i = 0; i < n; i++){
        a[i].InSv();
    } 
}

void MaxRl(Sinhvien a[], int n){
    double rl = 0;
    for(int i = 0; i < n; i++){
        if(a[i].diemrl > rl)
            rl = a[i].diemrl;
    }
    cout << "-----------------------------------------\n";
    cout << "Danh sach sinh vien co diem Rl cao nhat: \n";
    for(int i = 0 ; i< n; i++){
        if(rl == a[i].diemrl){
            a[i].InSv();
        }
    }
}

void MaxTB(Sinhvien a[], int n){
    double tb = 0;
    for(int i = 0; i < n; i++){
        if(a[i].diemtb > tb)
            tb = a[i].diemtb;
    }
    cout << "-----------------------------------------\n";
    cout << "Danh sach sinh vien co diem Trung Binh cao nhat: \n";
    for(int i = 0 ; i< n; i++){
        if(tb == a[i].diemtb){
            a[i].InSv();
        }
    }
}

int main(){
    Sinhvien a[100];

    int n;
    cout << "Nhap so luong sinh vien can kiem tra: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        a[i].Nhap();
    }
    InDs(a,n);
    MaxRl(a,n);
    MaxTB(a,n);

    return 0;
}