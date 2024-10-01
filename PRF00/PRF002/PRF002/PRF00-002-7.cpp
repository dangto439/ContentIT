/*
Chu vi và diện tích hình chữ nhật
Cập nhật tháng 3 năm 2023
Viết chương trình nhập vào chiều dài và chiều rộng của hình chữ nhật. Tính và hiển thị chu vi và diện tích của hình chữ nhật đó.
Gợi ý:
Công thức tính chu vi hình chữ nhật là: C = (chiều dài + chiều rộng) * 2.
Công thức tính diện tích hình chữ nhật là: S = chiều dài * chiều rộng.
*/
#include <iostream>

int main()
{
    float chieu_dai, chieu_rong;

    std::cin >> chieu_dai >> chieu_rong;

    // Viết code ở đây
    std::cout << "Chu vi hinh chu nhat la " << (chieu_dai+chieu_rong)*2 << std::endl;
    std::cout << "Dien tich hinh chu nhat la " << chieu_dai*chieu_rong;
    return 0;
}