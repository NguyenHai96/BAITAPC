/*Viết chương trình cho phép nhập, xuất phiếu kiểm kê tài sản theo mẫu sau:*/

#include<iostream>

using namespace std;

class Staff{
    private:
        string nameStaff;
        string regency;
    public:
        Staff(){}
        Staff(string nameStaff, string regency, string nameManager){
            this->nameStaff = nameStaff;
            this->regency = regency;
        }

        void inputStaff(){
            cout << "Nhap ten nhan vien: "; getline(cin,this->nameStaff);
            cout << "Nhap chuc vu nhan vien: "; getline(cin,this->regency);
        }

        void outputStaff(){
            cout << "Ten nhan vien: " << this->nameStaff << endl;
            cout << "Chuc vu nhan vien: " << this->regency << endl;
        }

        void outPutManager(){
            cout << this->regency;
            cout << this->nameStaff << endl;
        }
};

class Asset{
    private:
        string nameAsset;
        int quantity;
        string status;
    public:
        Asset(){}
        Asset(string nameAsset, int quantity, string status){
            this->nameAsset = nameAsset;
            this->quantity = quantity;
            this->status = status;
        }

        void inputAsset(){
            cout << "Nhap ten tai san: ";   getline(cin,this->nameAsset);
            cout << "Nhap so luong tai san: ";  cin >> this->quantity;
            cout << "Nhap tinh trang tai san: ";    cin.ignore();   getline(cin,this->status);
        }

        int getSumQuantity(){
            return this->quantity;
        }

        void outputAsset(){
            cout << "Ten tai san: " << this->nameAsset << endl;
            cout << "So luong: " << this->quantity << endl;
            cout << "Tinh trang: " << this->status << endl;
        }
};

class Invertory{
    private:
        string idInvertory;
        string dayInvertory;
        string addInvertory;
        string idRoomInvertory;
        int n;
        vector<Asset> list;
        Staff staff;
        Staff manager;
    public:
        Invertory(){}
        Invertory(string idInvertory, string dayInvertory, string addInvertory, string idRoomInvertory, int n){
            this->idInvertory = idInvertory;
            this->dayInvertory = dayInvertory;
            this->addInvertory = addInvertory;
            this->idRoomInvertory = idRoomInvertory;
            this->n = n;
        }

        void inputInvertory(){
            Asset asset;
            cout << "Nhap ma so Phieu: ";   getline(cin,this->idInvertory);
            cout << "Nhap ngay kiem ke: ";  getline(cin,this->dayInvertory);
            staff.inputStaff();
            cout << "Nhap thong truong phong: ";  manager.inputStaff();
            cout << "Nhap dia chi kiem ke: ";   getline(cin,this->addInvertory);
            cout << "Nhap ma phong kiem ke: ";  getline(cin,this->idRoomInvertory);
            cout << "Nhap so luong do vat kiem ke: ";   cin >> this->n;
            cin.ignore();
            for(int i = 0; i < this->n; i++){
                asset.inputAsset();
                list.push_back(asset);
            }
        }

        int SumQuantity(){
            int sum = 0;
            for(int i = 0; i < list.size(); i++){
                sum += list[i].getSumQuantity();
            }
            return sum;
        }

        void outputInvetory(){
            cout << "-------------------------------------------------" << endl;
            cout << "PHIEU KIEM KE TAI SAN" << endl;
            cout << "Ma so phieu: " << this->idInvertory << endl;
            cout << "Ngay kiem ke: " << this->dayInvertory << endl;
            staff.outputStaff();
            manager.outPutManager();
            cout << "Dia chi kiem ke: " << this->addInvertory << endl;
            cout << "Ma phong: " << this->idRoomInvertory << endl;
            for(int i = 0; i < list.size(); i++){
                cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
                list[i].outputAsset();
            }
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
            cout << "So tai san da kiem ke: " << this->n << endl;
            cout << "Tong so luong tai san: "  << SumQuantity() << endl;
        }
};

int main(){
    Invertory obj;
    obj.inputInvertory();
    obj.outputInvetory();

    return 0;
}