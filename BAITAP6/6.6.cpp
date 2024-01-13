// 6. Tìm sinh viên theo MSSV

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

// void SreachSV(Sinhvien a[], int n){
//     int ms;
//     cout << "-----------------------------------------\n";
//     cout <<"Nhap ma so sinh vien can tim: "; 
//     cin >> ms;
//     for(int i = 0; i < n; i++){
//         if(ms == a[i].Mssv){
//             a[i].InSv();
//             return;
//         }
//     }
//     cout << "Ko tim thay sinh vien!";
// }

int main(){
    Sinhvien a[100];

    int n;
    cout << "Nhap so luong sinh vien can kiem tra: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        a[i].Nhap();
    }
    InDs(a,n);
    // SreachSV(a,n);
    int ms;
    cout << "-----------------------------------------\n";
    cout <<"Nhap ma so sinh vien can tim: "; 
    cin >> ms;
    for(int i = 0; i < n; i++){
        if(ms == a[i].mssv){
            a[i].InSv();
            break;
        }else{
            cout << "Ko tim thay sinh vien!";
        }
    }

    return 0;
}