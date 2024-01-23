/*FRIEND FUNCTION
MAY
Masv
Hoten
DiemToan
DiemLy
DiemHoa
void NHAP()
void XUAT()
Cài đặt lớp Sinh viên với các thuộc tính và phương thức như sơ đồ ở bên và các hàm cần thiết để:
Trong hàm main, nhập vào một danh sách gồm n sinh viên; sắp xếp danh sách sinh viên theo chiều tăng dẫn của tổng điểm
In danh sách sinh viên ra màn hình kèm theo tổng điểm của mỗi sinh viên, biết rằng:
TongDiem = DiemToan + DiemLy + DiemHoa*/

#include<iostream>
#include<vector>

using namespace std;

class Student{
    private:
        int idsv;
        string namesv;
        double maths;
        double physics;
        double chemistry;
        
    public:
        Student(){}

        void init(){
            cout << "Nhap vao ma so sinh vien: ";
            cin >> this->idsv;
            cout << "Nhap vao ten Sinh vien: ";
            cin.ignore();
            getline(cin,this->namesv);
            cout << "Nhap diem toan: ";
            cin >> this->maths;
            cout << "Nhap diem ly: ";
            cin >> this->physics;
            cout << "Nhap diem hoa: ";
            cin >> this->chemistry;
        }

        double sumPoint(){
            double sum = this->maths + this->physics + this->chemistry;
            return sum;
        }

        void show(){
                cout << "Ma so sinh vien: " << this->idsv << endl;
                cout << "Ten sinh vien: " << this->namesv << endl;
                cout << "Tong diem cua sinh vien: " << this->sumPoint() << endl;
        }
};

void arrange(vector<Student> &a){
    Student temp;
        for(int i = 0; i < (a.size()-1) ; i++){
            for(int j = i + 1 ; j < a.size(); j++){
                if(a[i].sumPoint() > a[j].sumPoint()){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
}

int main(){
    Student sv;
    vector<Student> data;
    int n;
    cout << "Nhap so luong sinh vien: "; cin >> n;
    
    for(int i = 0; i < n; i++){
        cout << "Nhap thong tin sv " << i + 1 << endl;
        sv.init();
        data.push_back(sv);
    }

    arrange(data);
    
    for(int i = 0; i < n; i++){
        data[i].show();
    }

    return 0;
}