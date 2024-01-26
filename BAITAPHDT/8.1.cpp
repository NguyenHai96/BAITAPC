#include<iostream>

using namespace std;

class Product{
    protected:
        string nameProduct;
        double priceProduct;
        int quantity;
        double allprice;
    public:
        
        Product(){}
        Product(string nameProduct, double priceProduct, int quantity, double allprice){
            this->nameProduct = nameProduct;
            this->priceProduct = priceProduct;
            this->quantity = quantity;
            this->allprice = allprice;
        }

        void inPutProduct(){
            cout << "Nhap ten hang hoa: ";   getline(cin,this->nameProduct);
            cout << "Nhap vao gia hang hoa: ";  cin >> this->priceProduct;
            cout << "Nhap vao so luong hang hoa: "; cin >> this->quantity;
            cin.ignore();
            this->allprice = this->priceProduct*this->quantity;
        }

        void outPutProduct(){
            cout << "Ten hang: " << this->nameProduct << endl;
            cout << "Gia hang: " << this->priceProduct << endl;
            cout << "So luong: " << this->quantity << endl;
            cout << "Thanh tien: " << this->allprice << endl;
        }

        double getAllprice(){
            return this->allprice;
        }
};

class Supplier{
    private:
        string idSupplier;
        string nameSupplier;
        string addSupplier;
    public:
        Supplier(){}
        Supplier(string idSupplier, string nameSupplier, string addSupplier){
            this->idSupplier = idSupplier;
            this->nameSupplier = nameSupplier;
            this->addSupplier = addSupplier;
        }

        void intPutSup(){
            cout << "Nhap ma so nha cung cap: ";  getline(cin,this->idSupplier);
            cout << "Nhap ten nha cung cap: ";  getline(cin,this->nameSupplier);
            cout << "Nhap dia chi nha cung cap: ";  getline(cin,this->addSupplier);
        }

        void outPutSup(){
            cout << "Ma NCC: " << this->idSupplier << endl;
            cout << "Ten NCC: " << this->nameSupplier << endl;
            cout << "Dia chi NCC: " << this->addSupplier << endl;
        }
};

class Coupon:public Product, public Supplier{
    private:
        string idCoupon;
        string dayCoupon;
        int n;
        vector<Product> list;
        double priceCoupon;
    public:
        Coupon(){}
        Coupon(string idCoupon, string dayCoupon, int n , double priceCoupon){
            this->idCoupon = idCoupon;
            this->dayCoupon = dayCoupon;
            this->n = n;
            this->priceCoupon = priceCoupon;
        }

        void inPutCoupon(){
            Product a;
            cout << "Nhap vao ma phieu: ";  getline(cin,this->idCoupon);
            cout << "Nhap vao ngay lap phieu: ";   getline(cin,this->dayCoupon);
            Supplier::intPutSup();
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
            cout << "Ma phieu: " << this->idCoupon << endl;
            cout << "Ngay lap phieu: " << this->dayCoupon << endl;
            Supplier::outPutSup();
            for(int i = 0; i < list.size(); i++){
                cout << "**************************************" << endl;
                cout << "Hang hoa " << i+1 << endl;
                list[i].outPutProduct();
                this->priceCoupon = this->priceCoupon + list[i].getAllprice();
            }
            cout << "------------------------------------------" << endl;
            cout << "Cong thanh tien: " << this->priceCoupon << endl;
        }
};

int main(){
    Coupon ticket;
    ticket.inPutCoupon();
    ticket.outPutCoupon();

    return 0;
}