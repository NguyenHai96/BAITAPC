/*MIXED RELATIONSHIP
Cài đặt lớp Phòng máy với mỗi phòng gồm n máy tính và một người quản lý như sơ đồ sau:
Cài đặt hàm main nhập vào thông tin của 1 phòng máy. In toàn bộ thông tin của phòng máy ra màn hình.*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Manage{
    private:
        string idmanage;
        string namemanage;
    public:
        Manage(){}

        void inputManage(){
            cout << "Nhap ma so quan ly: ";
            cin.ignore();
            getline(cin,idmanage);
            cout << "Nhap ten quan ly: ";
            getline(cin,namemanage);
        }

        void showManage(){
            cout << "Ten quan ly: " << namemanage << endl;
            cout << "Ma so quan ly: " << idmanage << endl;
        }
};

class Computer{
    private:
        string idpc;
        string typepc;
        string statuspc;
    public:
        Computer(){}
        void initComputer(){
            cout << "Nhap ma so PC: ";
            getline(cin,idpc);
            cout << "Nhap kieu PC: ";
            getline(cin,this->typepc);
            cout << "Nhap tinh trang PC: ";
            getline(cin,this->statuspc);
        }

        void showComputer(){ 
                cout << "Ma may tinh: " <<this->idpc << endl;
                cout << "Kieu may tinh: " << this->typepc << endl;
                cout << "Tinh trang may tinh: " << this->statuspc << endl;
        }
};

class RoomPc{
    private:
        string idroom;
        string nameroom;
        string acreageroom;
        int n;
        vector<Computer> data;
        Manage ql;
    public:
        RoomPc(){}

        RoomPc(string idroom, string nameroom,string acreageroom, int n){
            this->idroom = idroom;
            this->nameroom = nameroom;
            this->acreageroom = acreageroom;
            this->n = n;
        }
        
        void inputRoomPc(){
            ql.inputManage();

            for(int i = 0 ; i < this->n; i++){
                Computer p;
                p.initComputer();
                data.push_back(p);
            }
        }

        void outputRomPc(){
            cout << "-------------------------------------" << endl;
            cout << "Ma phong may: " << idroom << endl;
            cout << "Ten phong may: " << nameroom << endl;
            cout << "Dien tich phong: " << acreageroom << endl;
            
            ql.showManage();
            for(int i = 0; i < this->n ; i++){
                Computer p = data[i];
                p.showComputer();
            }
            
        }
};

int main(){
    string idroom,nameroom,acreageroom;
    cout << "Nhap ma so phong may: ";
    
    getline(cin,idroom);
    cout << "Nhap ten phong may: ";
    getline(cin,nameroom);
    cout << "Nhap dien tich phong may: ";
    getline(cin,acreageroom);

    int n;
    cout << "Nhap vao so luong may: ";
    cin >> n;

    RoomPc a(idroom,nameroom,acreageroom,n);

    a.inputRoomPc();
    a.outputRomPc();
    
    return 0;
}