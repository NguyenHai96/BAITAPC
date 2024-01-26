/*Viết chương trình nhập vào thông tin của một phiếu mua hàng
In thông tin của phiếu ra màn hình theo đúng định dạng mẫu.*/

#include<iostream>

using namespace std;

class Product{
    protected:
        string nameP;
        double priceP;
        int quantity;
        double allprice;
    public:
        
        Product(){}
        Product(string nameP, double priceP, int quantity, double allprice){
            this->nameP = nameP;
            this->priceP = priceP;
            this->quantity = quantity;
            this->allprice = allprice;
        }

        void inPutProduct(){
            cout << "Nhap ten hang hoa: ";   getline(cin,this->nameP);
            cout << "Nhap vao gia hang hoa: ";  cin >> this->priceP;
            cout << "Nhap vao so luong hang hoa: "; cin >> this->quantity;
            cin.ignore();
            this->allprice = this->priceP*this->quantity;
        }

        void outPutProduct(){
            cout << "Ten hang: " << this->nameP << endl;
            cout << "Gia hang: " << this->priceP << endl;
            cout << "So luong: " << this->quantity << endl;
            cout << "Thanh tien: " << this->allprice << endl;
        }

        double getAllprice(){
            return this->allprice;
        }
};

class Coupon:public Product{
    private:
        int idC;
        string dayC;
        int n;
        vector<Product> list;
        double priceC;
    public:
        Coupon(){}
        Coupon(int idC, string dayC, int n , double priceC){
            this->idC = idC;
            this->dayC = dayC;
            this->n = n;
            this->priceC = priceC;
        }

        void inPutCoupon(){
            Product a;
            cout << "Nhap vao ma phieu: ";  cin >> this->idC;
            cout << "Nhap vao ngay lap phieu: ";    cin.ignore();   getline(cin,this->dayC);
            cout << "Nhap vao so luong san pham ";  cin >> this->n;
            cin.ignore();
            for(int i = 0; i < this->n ; i++){
                cout << "Nhap vao hang hoa " << i + 1 << ": " << endl;
                a.inPutProduct();
                list.push_back(a);
            }
        }

        void outPutCoupon(){
            cout << "------------------------------------------" << endl;
            cout << "Ma phieu: " << this->idC << endl;
            cout << "Ngay lap phieu: " << this->dayC << endl;
            for(int i = 0; i < list.size(); i++){
                cout << "**************************************" << endl;
                cout << "Hang hoa " << i+1 << endl;
                list[i].outPutProduct();
                this->priceC = this->priceC + list[i].getAllprice();
            }
            cout << "------------------------------------------" << endl;
            cout << "Cong thanh tien: " << this->priceC << endl;
        }
};

int main(){
    Coupon a;
    a.inPutCoupon();
    a.outPutCoupon();

    return 0;
}