/*Xây dựng lớp PERSON gồm các thông tin: Họ và tên, Ngày sinh, Quê quán
Sau đó, xây dựng lớp dẫn xuất KYSU ngoài các thông tin của
lớp Person, lớp KYSU còn có các thông tin về: Ngành học, Năm tốt nghiệp (int) và các phương thức:
Phương thức nhập: nhập các thông tin của kỹ sư.
Phương thức xuất: xuất các thông tin lên màn hình.
Xây dựng chương trình chính nhập vào một danh sách n kỹ sư.
In danh sách của các kỹ sư lên màn hình và
thông tin của các kỹ sư tốt nghiệp gần đây nhất (năm tốt nghiệp lớn nhất).*/

#include<iostream>

using namespace std;

class Preson{
    protected:
        string name;
        int day,month,year;
        string add;
    public:
        Preson(){}
};

class Engineer:public Preson{
    private:
        string branch;
        int yearGra;
    public:
        Engineer(){}

        Engineer(string branch, int yearGra){
            this->branch = branch;
            this->yearGra = yearGra;
        }

        void inputEngineer(){
            cout << "Ten ky su: ";  cin.ignore();   getline(cin,Preson::name);
            cout << "Ngay sinh: ";  cin >> Preson::day;
            cout << "Thang sinh: ";  cin >> Preson::month;
            cout << "Nam sinh: ";  cin >> Preson::year;
            cout << "Dia chi: ";  cin.ignore();  getline(cin,Preson::add);
            cout << "Chuyen nganh tot nghiep: "; getline(cin,this->branch);
            cout << "Nam tot nghiep: " ;    cin >> this->yearGra;
        }

        void outputEngineer(){
            cout << "**************************************" << endl;
            cout << "Ten ky su: " << Preson::name << endl;
            cout << "Ngay sinh: " << Preson::day << "/" << Preson::month << "/" << Preson::year << endl;
            cout << "Dia chi: " << Preson::add << endl;
            cout << "Chuyen nganh: " << this->branch << endl;
            cout << "Nam tot nghiep: " << this->yearGra << endl;
        }

        int getYearGra(){
            return yearGra;
        }

        int arrangeEngineer(vector<Engineer> x){
            Engineer temp;
            int max = 0;
            for(int i = 0; i < (x.size() - 1) ; i++){
                for(int j = i + 1; j < x.size() ; j++){
                    if(x[i].yearGra < x[j].yearGra){
                        x[i] = x[j];
                        x[j] = temp;
                        temp = x[i];
                    }
                }
            }
            max = x[0].yearGra;

            return max;
        }
};

int main(){
    int n;
    cout << "Nhap so luong ky su trong danh sach: "; cin >> n;
    vector <Engineer> list;
    int max;
    Engineer k;
    
    for(int i = 0; i < n; i++){
        cout << "---------------------------------" << endl;
        cout << "Nhap thong tin ky su " << i + 1 << endl;
        k.inputEngineer();
        list.push_back(k);
        
    }

    max = k.arrangeEngineer(list);
    
    for(int i = 0; i < n; i++){
        
        if(list[i].getYearGra() == max){
            cout << "Ky su tot nghiep gan day nhat la: " << endl;
            list[i].outputEngineer();
        }
    }
    
    return 0;
}