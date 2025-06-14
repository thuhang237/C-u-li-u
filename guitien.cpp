void guiTien(DanhSachTaiKhoan &dstk) {
    int id;
    double soTien;

    cout << "Nhap ID tai khoan can gui tien: ";
    cin >> id;

    // Tìm tài khoản có ID phù hợp và đang hoạt động
    int index = -1;
    for (int i = 0; i < dstk.SoLuong; i++) {
        if (dstk.ds[i].ID == id && dstk.ds[i].TrangThai == true) {
            index = i;
            break;
        }
    }

    // Kiểm tra tài khoản tồn tại
    if (index == -1) {
        cout << "Khong tim thay tai khoan hoac tai khoan dang bi khoa.\n";
        return;
    }

    // Nhập số tiền cần gửi
    cout << "Nhap so tien muon gui: ";
    cin >> soTien;

    // Kiểm tra số tiền hợp lệ
    if (soTien <= 0) {
        cout << "So tien khong hop le. Vui long nhap so > 0.\n";
        return;
    }

    // Cập nhật số dư
    dstk.ds[index].SoDu += soTien;

    // Thông báo kết quả
    cout << "Gui tien thanh cong. So du moi la: " << dstk.ds[index].SoDu << " VND\n";
}
