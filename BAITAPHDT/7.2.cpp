/*Trong hàm main, nhập vào thông tin của 1 sinh viên.
In đầy đủ các thông tin của sinh viên ra màn hình.*/

#include<iostream>

using namespace std;

class Faculty;
class School{
    private:
        string nameS;
        string dateS;
    public:
        School(){}
        School(string nameS, string dateS){
            this->nameS = nameS;
            this->dateS = dateS;
        }
        friend class Faculty;
};

class Faculty{
    protected:
        string nameF;
        string dateF;
        School x;
    public:
        Faculty(){}
        Faculty(string nameF, string dateF){
            this->nameF = nameF;
            this->dateF = dateF;
        }

        void inPutFac(){
            cout << "Nhap ten khoa: ";  getline(cin,this->nameF);
            cout << "Nhap ngay vao khoa: "; getline(cin,this->dateF);
            cout << "Nhap ten truong: ";    getline(cin,this->x.nameS);
            cout << "Nhap ngay vao truong: ";   getline(cin,x.dateS);
        }

        void outPutFac(){
            cout << "Ten khoa: " << this->nameF << endl;
            cout << "Ngay vao khoa: " << this->dateF << endl;
            cout << "Ten truong: " << x.nameS << endl;
            cout << "Ngay vao truong: " << x.dateS << endl;
        }
};

class Preson{
    protected:
        string name;
        string birth;
        string add;
    public:
        Preson(){}
        Preson(string name, string birth, string add){
            this->name = name;
            this->birth = birth;
            this->add = add;
        }

        void inPutPreson(){
            cout << "Nhap ten: ";   getline(cin,this->name);
            cout << "Nhap ngay sinh: "; getline(cin,this->birth);
            cout << "Nhap dia chi: ";   getline(cin,this->add);
        }

        void outPutPreson(){
            cout << "Ten: " << this->name << endl;
            cout << "Ngay sinh: " << this->birth << endl;
            cout << "Dia chi: " << this->add << endl;
        }
};

class Student:public Preson{
    private:
        Faculty y;
        string Class;
        int score;
    public:
        Student(){}
        Student(string name, string birth, string add, string Class, int score):Preson(name,birth,add){
            this->Class = Class;
            this->score = score;
        }

        void inPutStu(){
            cout << "Nhap thong tin sinh vien!" << endl;
            Preson::inPutPreson();
            y.inPutFac();
            cout << "Nhap lop: ";   getline(cin,this->Class);
            cout << "Nhap diem: ";  cin >> this->score;
        }

        void outPutStu(){
            cout << "------------------------------------" << endl;
            Preson::outPutPreson();
            y.outPutFac();
            cout << "Lop: " << this->Class << endl;
            cout << "Diem: " << this->score << endl;
        }
};

int main(){
    Student z;
    z.inPutStu();
    z.outPutStu();

    return 0;
}