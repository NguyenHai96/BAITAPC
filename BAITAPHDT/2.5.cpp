/*Thiết kế một lớp Ôtô với các thuộc tính: Mã oto, Giá mua mới, Số năm sử dụng, Tỷ lệ khấu hao/năm
và các phương thức cần thiết để trong chương trình chính
nhập vào thông tin của một danh sách các xe ôtô
in ra các thông tin vừa nhập và giá trị hiện tại của xe.*/

#include<iostream>

using namespace std;

class Car{
    private:
        string maxe;
        double gia;
        float nienhan;
        double khauhao;
    public:
        void init(){
            cout << "Nhap vao ma xe: ";
            cin.ignore();
            getline(cin,maxe);
            cout << "Nhap vao gia xe: ";
            cin >> gia;
            cout << "Nhap vao nien han xe: ";
            cin >> nienhan;
            cout << "Nhap vao ty le khau hao / nam: ";
            cin >> khauhao;
        }
        void show(){
            cout << "---------------------------------------------" << endl;
            cout << "Ma oto: " << maxe << endl;
            cout << "Gia mua moi: " << gia << endl;
            cout << "So nam su dung: " << nienhan << endl;
            cout << "Ty le khau hao/nam: " << khauhao << endl;
        }
};

int main(){
    vector<Car> data;
    int n;
    cout << "Nhap vao so luong xe oto: " ;
    cin >> n;
    Car list;

    for(int i = 0; i < n; i++){
        cout << "Oto " << i + 1 << endl;
        list.init();
        data.push_back(list);
    }

    for(int i = 0; i < n; i++){
        data[i].show();
    }

    return 0;
}