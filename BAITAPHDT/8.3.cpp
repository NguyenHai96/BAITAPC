#include<iostream>

using namespace std;

class ScoreReport;
class Transcript{
    private:
        string subjectName;
        int process;
        float score;
        
    public:
        Transcript(){}
        Transcript(string subjectName, int process, float score){
            this->subjectName = subjectName;
            this->process = process;
            this->score = score;
            
        }
        friend class ScoreReport;
};

class ScoreReport{
    private:
        string idSv;
        string nameSv;
        string classSv;
        int schoolYear;
        int n;
        double mediumScore;
        vector<Transcript> list;
    public:
        ScoreReport(){}
        ScoreReport(string idSv, string nameSv, string classSv, int schoolYear, int n, double mediumScore){
            this->idSv = idSv;
            this->nameSv = nameSv;
            this->classSv = classSv;
            this->schoolYear = schoolYear;
            this->n = n;
            this->mediumScore = mediumScore;
        }

        void inputBroand(){
            Transcript x;
            cout << "NHAP THONG TIN BANG DIEM" << endl;
            cout << "Nhap ma so sinh vien: ";  getline(cin,this->idSv);
            cout << "Nhap ten sinh vien: ";     getline(cin,this->nameSv);
            cout << "Nhap vao lop: ";   getline(cin,this->classSv);
            cout << "Nhap nien khoa: "; cin >> this->schoolYear;
            cout << "Nhap so mon trong bang diem: "; cin >> this->n;
            for(int i = 0; i < this->n; i++){
                cout << "Nhap ten mon: ";   cin.ignore();   getline(cin,x.subjectName);
                cout << "Nhap so trinh: ";  cin >> x.process;
                cout << "Nhap diem: ";  cin >> x.score;
                list.push_back(x);
            }
            
        }

        double calcular(){
            // Transcript obj1;
            double sumScore = 0;
            double sumProcess = 0;
            for(int i = 0; i< list.size(); i++){
                sumScore += (list[i].score*list[i].process);
                sumProcess += list[i].process;
            }
            this->mediumScore = sumScore / sumProcess;
            return this->mediumScore;
        }

        void outPutBroand(){
            cout << "-----------------------------------------------------" << endl;
            cout << "PHIEU BAO DIEM" << endl;
            cout << "Ma so SV: " << this->idSv << endl;
            cout << "Ten Sv: " << this->nameSv << endl;
            cout << "Lop: " << this->classSv << endl;
            cout << "Nien Khoa: " << this->schoolYear << endl;
            for(int i = 0; i < list.size(); i++){
                cout << "...................................." << endl;
                cout << "Ten mon: " << list[i].subjectName << endl;
                cout << "So trinh: " << list[i].process << endl;
                cout << "So diem: " << list[i].score << endl;
            }
            cout << "Diem trung binh: " << calcular() << endl;
        }
};

int main(){
    ScoreReport a;
    a.inputBroand();
    a.outPutBroand();
}