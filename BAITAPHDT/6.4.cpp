/*MATRIX
Xây dựng lớp ma trận gồm các thuộc tính:
double a[][] là một mảng hai chiều chứa các phần tử của ma trận;
m, n là các thuộc tính kích thước thực tế của ma trận và các phương thức:
Hàm toán tử nhập: nhập các giá trị m, n; cấp phát bộ nhớ và nhập ma trận a.
Hàm toán tử xuất: xuất các giá trị của ma trận a lên màn hình.
Phương thức toán tử “Đổi dấu ma trận” (-): đổi dấu tất cả các phần tử của ma trận;
cộng, trừ hai ma trận (cộng trừ các phần tử tương ứng của ma trận).
Xây dựng chương trình chính trong đó khai báo và nhập các giá trị cho 01 ma trận.
Đổi dấu các ma trận và in các ma trận đã đổi dấu ra màn hình.
Tính và in ra màn hình các ma trận là tổng, hiệu của các ma trận đã đổi dấu ở trên.*/

#include<iostream>

using namespace std;

#define MAX 100

class Matrix{
    private:
        double arr[MAX][MAX];
        int row,col;
    public:
        Matrix(){}
        Matrix(int row, int col){
            this->row = row;
            this->col = col;
        }

        friend istream& operator>>(istream &in, Matrix &x);
        friend ostream& operator<<(ostream &out, Matrix &x);
        Matrix operator-(Matrix x);
        Matrix operator+(Matrix x);
        Matrix operator-();
};

istream& operator>>(istream &in, Matrix &x){
    cout << "Nhap so dong: ";
    in >> x.row;
    cout << "Nhap so cot: " ;
    in >> x.col;
    for(int i = 0; i < x.row; i++){
        for( int j = 0; j < x.col; j++){
            cout << "arr[" << i << "][" << j << "] = ";
            in >> x.arr[i][j];
        }
    }

    return in;
}

ostream& operator<<(ostream &out, Matrix &x){
    for(int i = 0; i < x.row; i++){
        for(int j = 0; j < x.col; j++){
            out << x.arr[i][j] << " ";
        }
    }
    return out;
}

Matrix Matrix::operator+(Matrix x){
    Matrix kq(this->row,this->col);
    for(int i = 0; i < this->row; i++){
        for(int j = 0; j < this->col; j++){
            kq.arr[i][j] = this->arr[i][j] + x.arr[i][j];
        }
    }
    return kq;
}

Matrix Matrix::operator-(Matrix x){
    Matrix kq(this->row,this->col);
    for(int i = 0; i < this->row; i++){
        for(int j = 0; j < this->col; j++){
            kq.arr[i][j] = this->arr[i][j] - x.arr[i][j];
        }
    }
    return kq;
}

Matrix Matrix::operator-(){
    Matrix kq(this->row,this->col);
    for (int i = 0; i < this->row; i++)
    {
        for (int j = 0; j < this->col; j++)
        {
            kq.arr[i][j] = -this->arr[i][j];
        }
        
    }
    return kq;
}

int main(){
    Matrix mt1;
    cout << "Nhap ma tran 1: " << endl;
    cin >> mt1;
    cout << "Ma tran 1: " << mt1 << endl;
    Matrix mt2;
    cout << "Nhap ma tran 2: " << endl;
    cin >> mt2;
    cout << "Ma tran 2: " << mt2 << endl;
    Matrix kq;
    kq = mt1 + mt2;
    cout << "Tong cua 2 ma tran la: " << kq << endl;

    Matrix hieu;
    hieu = mt1 - mt2;
    cout << "Hieu cua 2 ma tran la: " << hieu << endl;

    kq = -kq;
    cout << "Doi dau ma tran: " << kq << endl;
    
    return 0;
}