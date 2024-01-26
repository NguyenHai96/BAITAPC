#include<iostream>

using namespace std;

class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction(){}
        Fraction(int a, int b):numerator(a),denominator(b){}

        operator float(){
            return (float)this->numerator/this->denominator;
        }

        static Fraction inPutOperator(){
            int a,b;
            cout << "Nhap tu so cua phan so: ";     cin >>a;
            cout << "Nhap mau so cua phan so: ";    cin >>b;
            Fraction ps(a,b);
            return ps;
        }

        void simplify(){
            int a, b, ucln;
            a = this->numerator;
            b = this->denominator;
            if(a < 0){
                a = a * (-1);
            }
            if(b < 0){
                b = b * (-1);
            }
            while (a != b)
            {
                if(a > b){
                    a = a - b;
                }else{
                    b = b - a;
                }
            }
            ucln = a;
            this->numerator = this->numerator/ucln;
            this->denominator = this->denominator/ucln;
        }

        
        
        Fraction operator+(Fraction ps){
            Fraction kq;
                kq.numerator = this->numerator*ps.denominator + ps.numerator*this->denominator;
                kq.denominator = this->denominator*ps.denominator;
                kq.simplify();
            return kq;
        }

        Fraction operator-(Fraction ps){
            Fraction kq;
            if(this->numerator*ps.denominator > this->denominator*ps.numerator){
                kq.numerator = this->numerator*ps.denominator - this->denominator*ps.numerator;
                kq.denominator = this->denominator * ps.denominator;
            }else{
                kq.numerator = this->denominator*ps.numerator - this->numerator*ps.denominator;
                kq.denominator = this->denominator * ps.denominator;
            }
            kq.simplify();
            return kq;
        }

        Fraction operator*(Fraction ps){
            Fraction kq;
            kq.numerator = this->numerator * ps.numerator;
            kq.denominator = this->denominator * ps.denominator;
            kq.simplify();
            return kq;
        }

        Fraction operator/(Fraction ps){
            Fraction kq;
            kq.numerator = this->numerator * ps.denominator;
            kq.denominator = this->denominator * ps.numerator;
            kq.simplify();
            return kq;
        }
        
        void outPutOperation(){
            cout << this->numerator<< "/"<<this->denominator << endl;
        }

};

int main(){
    Fraction ps1 = Fraction::inPutOperator();
    Fraction ps2 = Fraction::inPutOperator();
    float kq;
    
    kq = ps1 + ps2;
    cout << "Cong 2 phan so: "<< kq << endl;
    // kq.outPutOperation();
    
    kq = ps1 - ps2;
    cout << "Tru 2 phan so: "<< kq << endl;
    // kq.outPutOperation();

    kq = ps1 * ps2;
    cout << "Nhan 2 phan so: "<< kq << endl;
    // kq.outPutOperation();
    
    kq = ps1 / ps2;
    cout << "Chia 2 phan so: "<< kq << endl;
    // kq.outPutOperation();

    return 0;
}