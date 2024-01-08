// Xóa tất cả ký tự khoảng trắng thừa ở đầu / cuối / giữa các từ trong chuỗi.
/*Ý tưởng ở đây là chúng ta tạo ra một vòng lặp, sau đó kiểm tra từng ký tự trong chuỗi ban đầu và so sánh nó với ký tự trắng
Nếu ký tự đó không phải là khoảng trắng thì chúng ta sẽ lấy nó ra và lưu vào kết quả.*/

#include<iostream>
#include<string>

using namespace std;


int main(){
    //Khởi tạo 1 chuỗi S có kiểu dữ liệu là string
    string ChuoiS;

    cout << "Nhap vao chuoi ky tu S: ";
    getline(cin,ChuoiS);

    cout << "Chuoi S la: " << ChuoiS << endl;

    int n = ChuoiS.length();
    int dem = 0;

    for(int i = 0; i < n; i++){
        if(ChuoiS[i] == ' '){
            ChuoiS.erase(ChuoiS.begin()+i);
        }
        
    }
    cout << "Chuoi Sau khi xoa khoang trang la: " << ChuoiS << endl;
    
    return 0;
}