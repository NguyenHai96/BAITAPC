/*4. Xếp loại điểm RL sinh viên
Điểm RL Xếp loại điểm RL Mã xếp loại
DRL >= 90 Xuất sắc X
80 < = DRL < 90 Giỏi G
70 < = DRL < 80 Khá K
50 < = DRL < 70 TB T
DRL < 50 Yếu Y*/

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



string Level(int n){
        if(n >= 90 ){
            return "Xep loai Xuat Sac!";
        }else{
            if(n >= 80 && n < 90){
                return "Xep loai Gioi!";
            }else{
                if(n >= 70 && n < 80){
                    return "Xep loai Kha!";
                }else{
                    if(n >= 50 && n < 70){
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
        a[i].xeploai = Level(a[i].diemrl);
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