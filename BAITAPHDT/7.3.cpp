/*Viết hàm main nhập vào thông tin của một trường đại học gồm n Khoa và m Ban
In toàn bộ thông tin của trường vừa nhập ra màn hình.*/

#include<iostream>

using namespace std;

#define MAX 100

class School{
    protected:
        int idS;
        string nameS;
        string addS;
    public:
        School(){};
        School(int idS, string nameS, string addS){
            this->idS = idS;
            this->nameS = nameS;
            this->addS = addS;
        };

        void inPutSchool(){
            cout << "Nhap ma so truong: ";   cin >> this->idS;
            cout << "Nhap ten truong: ";    cin.ignore();   getline(cin,this->nameS);
            cout << "Nhap dia chi truong: ";    getline(cin,this->addS);
        }

        void outPutSchool(){
            cout << "Ma so truong: " << this->idS << endl;
            cout << "Ten truong: " << this->nameS << endl;
            cout << "Dia chi: " << this->addS << endl;
        }
};

class SchoolDH;

class Department{
    private:
        int idK;
        string nameK;
        string dean;
    public:
        Department(){}
        Department(int idK, string nameK, string dean){
            this->idK = idK;
            this->nameK = nameK;
            this->dean = dean;
        }
        friend class SchoolDH;
};

class Team{
    private:
        int idT;
        string nameT;
        string chairman;
    public:
        Team(){}
        Team(int idT, string nameT, string chairman){
            this->idT = idT;
            this->nameT = nameT;
            this->chairman = chairman;
        }
        friend class SchoolDH;
};

class SchoolDH:public School{
    private:
        Department x[MAX];
        int n;
        Team y[MAX];
        int m;
    public:
        SchoolDH(){}
        SchoolDH(int n, int m):School(idS,nameS,addS){
            this->n = n;
            this->m = m;
        };

        void inPutSchoolDH(){
            School::inPutSchool();
            cout << "Nhap so luong khoa: ";
            cin >> this->n;
            cout << "Nhap so luong ban: ";
            cin >> this->m;
            for(int i = 0; i < this->n; i++){
                cout << "Nhap ma khoa " << i + 1 << ": ";
                cin >> this->x[i].idK;
                cout << "Nhap ten khoa " << i + 1 << ": ";
                cin.ignore();
                getline(cin,this->x[i].nameK);
                cout << "Nhap ten Truong Khoa " << i + 1 << ": ";
                getline(cin,this->x[i].dean);
            }
            for(int i = 0; i < this->m; i++){
                cout << "Nhap ma ban " << i + 1 << ": ";
                cin >> this->y[i].idT;
                cout << "Nhap ten Ban " << i + 1 << ": ";
                cin.ignore();
                getline(cin,this->y[i].nameT);
                cout << "Nhap ten Truong Ban " << i + 1 << ": ";
                getline(cin,this->y[i].chairman);
            }
        }

        void outPutSchoolDH(){
            cout << "-----------------------------------" << endl;
            School::outPutSchool();
            for(int i = 0; i < this->n; i++){
                cout << "Ma khoa " << i+1 << ": " << this->x[i].idK << endl;
                cout << "Ten khoa " << i+1 << ": " << this->x[i].nameK << endl;
                cout << "Ten Truong Khoa " << i+1 << ": " << this->x[i].dean << endl;
            }
            for(int i = 0; i < this->m; i++){
                cout << "Ma ban " << i+1 << ": " << this->y[i].idT << endl;
                cout << "Ten ban " << i+1 << ": " << this->y[i].nameT << endl;
                cout << "Ten Truong Ban " << i+1 << ": " << this->y[i].chairman << endl;
            }
        }
};

int main(){
    SchoolDH dh;
    dh.inPutSchoolDH();
    dh.outPutSchoolDH();

    return 0;
}