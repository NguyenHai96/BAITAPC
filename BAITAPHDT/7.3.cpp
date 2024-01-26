/*Viết hàm main nhập vào thông tin của một trường đại học gồm n Khoa và m Ban
In toàn bộ thông tin của trường vừa nhập ra màn hình.*/

#include<iostream>

using namespace std;

#define MAX 100

class School{
    protected:
        int idSchool;
        string nameSchool;
        string addSchool;
    public:
        School(){}
        School(int idSchool, string nameSchool, string addSchool){
            this->idSchool = idSchool;
            this->nameSchool = nameSchool;
            this->addSchool = addSchool;
        }

        void inPutSchool(){
            cout << "Nhap ma so truong: ";   cin >> this->idSchool;
            cout << "Nhap ten truong: ";    cin.ignore();   getline(cin,this->nameSchool);
            cout << "Nhap dia chi truong: ";    getline(cin,this->addSchool);
        }

        void outPutSchool(){
            cout << "Ma so truong: " << this->idSchool << endl;
            cout << "Ten truong: " << this->nameSchool << endl;
            cout << "Dia chi: " << this->addSchool << endl;
        }
};

class University;

class Department{
        int idDepartment;
        string nameDepartment;
        string dean;
    public:
        Department(){}
        Department(int idDepartment, string nameDepartment, string dean){
            this->idDepartment = idDepartment;
            this->nameDepartment = nameDepartment;
            this->dean = dean;
        }
        friend class University;
};

class Team{
        int idTeam;
        string nameTeam;
        string chairman;
    public:
        Team(){}
        Team(int idTeam, string nameTeam, string chairman){
            this->idTeam = idTeam;
            this->nameTeam = nameTeam;
            this->chairman = chairman;
        }
        friend class University;
};

class University:public School{
    private:
        Department x[MAX];
        int n;
        Team y[MAX];
        int m;
    public:
        University(){}
        University(int n, int m):School(idSchool,nameSchool,addSchool){
            this->n = n;
            this->m = m;
        };

        void inPutUniversity(){
            School::inPutSchool();
            cout << "Nhap so luong khoa: ";
            cin >> this->n;
            cout << "Nhap so luong ban: ";
            cin >> this->m;
            for(int i = 0; i < this->n; i++){
                cout << "Nhap ma khoa " << i + 1 << ": ";
                cin >> this->x[i].idDepartment;
                cout << "Nhap ten khoa " << i + 1 << ": ";
                cin.ignore();
                getline(cin,this->x[i].nameDepartment);
                cout << "Nhap ten Truong Khoa " << i + 1 << ": ";
                getline(cin,this->x[i].dean);
            }
            for(int i = 0; i < this->m; i++){
                cout << "Nhap ma ban " << i + 1 << ": ";
                cin >> this->y[i].idTeam;
                cout << "Nhap ten Ban " << i + 1 << ": ";
                cin.ignore();
                getline(cin,this->y[i].nameTeam);
                cout << "Nhap ten Truong Ban " << i + 1 << ": ";
                getline(cin,this->y[i].chairman);
            }
        }

        void outPutUniversity(){
            cout << "-----------------------------------" << endl;
            School::outPutSchool();
            for(int i = 0; i < this->n; i++){
                cout << "Ma khoa " << i+1 << ": " << this->x[i].idDepartment << endl;
                cout << "Ten khoa " << i+1 << ": " << this->x[i].nameDepartment << endl;
                cout << "Ten Truong Khoa " << i+1 << ": " << this->x[i].dean << endl;
            }
            for(int i = 0; i < this->m; i++){
                cout << "Ma ban " << i+1 << ": " << this->y[i].idTeam << endl;
                cout << "Ten ban " << i+1 << ": " << this->y[i].nameTeam << endl;
                cout << "Ten Truong Ban " << i+1 << ": " << this->y[i].chairman << endl;
            }
        }
};

int main(){
    University uni;
    uni.inPutUniversity();
    uni.outPutUniversity();

    return 0;
}