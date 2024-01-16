// 7. Nhập vào mã xếp loại điểm rèn luyện và in ra danh sách sinh viên có xếp loại đó.

#include<iostream>

using namespace std;

struct Sinhvien{
    int mssv;
    string name;
    int diemrl;
    double diemtb;
    string xeploai;
    char loop;

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

char MaXepLoai(int a){
    if(a >= 90){
        return 'X';
        }else{
            if(a >= 80 && a < 90){
                return 'G';
            }else{
                if(a >= 70 && a < 80){
                    return 'K';
                }else{
                    if( a >= 50 && a < 70){
                        return 'T';
                    }else{
                        return 'Y';
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
        a[i].loop = MaXepLoai(a[i].diemrl);
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

    char xl;
    cout << "-----------------------------------------\n";
    cout <<"Nhap ma Xep loai sinh vien can tim: "; 
    cin >> xl;
    for(int i = 0; i < n; i++){
        if(xl == a[i].loop){
            a[i].InSv();
            // break;
        }else{
            cout << "Ko tim thay sinh vien!";
        }
    }

    return 0;
}