#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

//Khai báo hằng số và kiểu dữ liệu
const int MAX = 100;
const int MAX_GD = 500;

//Khai báo tài khoản
struct TaiKhoan {
    int ID;
    char Ten[50];
    double SoDu;
};

//Khai báo danh sách tài khoản
struct DanhSachTaiKhoan {
    TaiKhoan ds[MAX];
    int SoLuong;
};

//Liệt kê các loại giao dịch
enum LoaiGD {
    RUT_TIEN,
    GUI_TIEN,
    CHUYEN_KHOAN
};

//Khai báo giao dịch
struct GiaoDich {
    int maGD;
    LoaiGD loai;
    int IDNguon;
    int IDDich;
    double SoTien;
    char ThoiGian[30];
    char GhiChu[60];
};

//Khai báo danh sách giao dịch
struct DanhSachGiaoDich {
    GiaoDich ds[MAX_GD];
    int SoLuong;
};