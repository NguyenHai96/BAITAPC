/*CONSTRUCTOR/ DESTRUCTOR METHODS
Cài đặt lớp ARRAY theo sơ đồ ở bên với:
Phương thức khởi tạo không đối: khởi gán giá trị n =0.
Phương thức khởi tạo có đối: khởi gán giá trị bất kỳ cho n; cấp phát bộ nhớ cho mảng;
gán các giá trị cho các phần tử của mảng bằng 0.
Phương thức hủy: đặt lại n=0 và giải phóng bộ nhớ của mảng.
Phương thức NHAP: nhập các giá trị cho mảng.
Phương thức XUAT: in mảng ra màn hình.
Cài đặt hàm main khai báo một mảng a, khởi tạo giá trị cho a và in các giá trị khởi tạo ra màn hình.
Nhập vào một mảng a gồm n phần tử nguyên. In các phần tử của a ra màn hình
Giải phóng bộ nhớ đã cấp phát cho a.*/

#include<iostream>

using namespace std;

class ARRAY{
    private:
        int n;
        //Cấp phát động cho mảng value
        int *value = new int[n];
    public:
    //khởi tạo không đối: khởi gán giá trị n =0.
        ARRAY(){
            this->n = 0;
        }
    //khởi tạo có đối: khởi gán giá trị bất kỳ cho n; cấp phát bộ nhớ cho mảng;
        ARRAY(int n){
            this->n = n;
            //gán các giá trị cho các phần tử của mảng bằng 0.
            for(int i = 0; i < n; i++){
                this->value[i] = 0;
            }
        }
    //đặt lại n=0 và giải phóng bộ nhớ của mảng.
        ~ARRAY(){
            this->n = 0;
            cout << "Ham huy da dc goi!" << endl;
        }

        void inputARRAY(){
            for(int i = 0; i < this->n; i++){
                cout << "Nhap gia tri phan tu a[" << i << "] = ";
                cin >>this->value[i];
            }
        }

        void outPutARRAY(){
            for(int i = 0; i < this->n; i++){
                cout << this->value[i] << " ";
            }
        }
};

int main(){
    int n;
    cout << "Nhap so luong phan tu cua mang a: "; cin >> n;
    ARRAY a(n);
    a.inputARRAY();
    a.outPutARRAY();
    a.~ARRAY();

    return 0;
}