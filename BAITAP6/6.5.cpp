/*5. Xếp loại điểm TB sinh viên
Điểm TB Xếp loại điểm TB Mã xếp loại
DTB >= 9.0 Xuất sắc X
8.0 < = DTB < 9.0 Giỏi G
7.0 < = DTB < 8.0 Khá K
5.0 < = DTB < 7.0 TB T
DTB < 5.0 Yếu Y*/

#include<iostream>

using namespace std;

struct Sinhvien{
    int mssv;
    string name;
    int diemrl;
    double diemtb;
    string xeploai;

    void InSv(){
        cout << "Ma so Sv: " << mssv << endl;
        cout << "Ten Sv: " << name << endl;
        cout << "Diem Rl: " << diemrl << endl;
        cout << "Diem trung binh: " << diemtb << endl;
        cout << "Xep loai: " << xeploai << endl;
        cout << "-----------------------------------------\n";
    }

    void Nhap(){
        cout << "-----------------------------------------\n";
        cout << "Nhap Ma so Sinh Vien: "; cin >> mssv;
        cout << "Nhap Ten SV: ";
        cin.ignore();
        getline(cin,name);
        cout << "Nhap Diem Rl: "; cin >> diemrl;
        cout << "Nhap Diem TB: "; cin >> diemtb;
    }
};



string Level(double n){
        if(n >= 9.0 ){
            return "Xep loai Xuat Sac!";
        }else{
            if(n >= 8.0 && n < 9.0){
                return "Xep loai Gioi!";
            }else{
                if(n >= 7.0 && n < 8.0){
                    return "Xep loai Kha!";
                }else{
                    if(n >= 5.0 && n < 7.0){
                        return "Xep loai Trung Binh!";
                    }else{
                        return "Xep loai Yeu!";
                    }
                }
            }
        }
    }

void InDs(Sinhvien a[], int n){
    cout << "-----------------------------------------\n";
    cout << "Thong tin danh sach sinh vien: \n";
    for(int i = 0; i < n; i++){
        a[i].xeploai = Level(a[i].diemtb);
        a[i].InSv();
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

    return 0;
}