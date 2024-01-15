/*Thiết kế một lớp Doanh Nghiệp bao gồm các thuộc tính:
Tên doanh nghiệp, Địa chỉ doanh nghiệp, Số nhân viên, Doanh thu và
các phương thức cần thiết để trong chương trình chính
nhập vào thông tin cho một danh sách gồm n doanh nghiệp. In các thông tin vừa nhập ra màn hình.*/

#include<iostream>
#include<vector>

using namespace std;

class Concern{
    private:
        string name;
        string add;
        int workers;
        double doanhthu;
    public:

        void nhap(){
            cout << "Ten doanh nghiep: " ;
            cin.ignore();
            getline(cin,name);
            cout << "Dia chi doanh nghiep: " ;
            getline(cin,add);
            cout << "So luong nhan vien trong doanh nghiep: ";
            cin >> workers;
            cout << "Doanh thu cua doanh nghiep: ";
            cin >> doanhthu;
        }

        void xuat(){
            cout << "---------------------------------------------" << endl;
            cout << "Doanh nghiep: " << name << endl;
            cout << "Dia chi: " << add << endl;
            cout << "So luong nhan vien: " << workers << endl;
            cout << "Doanh thu: " << doanhthu << endl;
        }
};

int main(){
    vector<Concern> data;
    int n;
    cout << "Nhap vao so luong doanh nghiep: " ;
    cin >> n;
    Concern list;
    
    for(int i = 0; i < n ; i++){
        cout << "Doanh nghiep " << i + 1 << endl;
        list.nhap();
        data.push_back(list);
    }

    for(int i = 0; i < n; i++ ){
        data[i].xuat();
    }

    return 0;
}