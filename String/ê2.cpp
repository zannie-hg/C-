#include <iostream>
using namespace std;

const int MAX = 100;

int main() {
    int m, n;
    int arr[MAX][MAX];
    int border[MAX * 2 + MAX * 2 - 4];

    // Nhập kích thước mảng
    cout << "Nhap kich thuoc mang 2 chieu (m, n): ";
    cin >> m >> n;

    // Nhập mảng 2 chiều
    cout << "Nhap cac phan tu cua mang 2 chieu:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // Lấy đường biên theo chiều kim đồng hồ
    int index = 0;
    for (int i = 0; i < n; i++) {
        border[index++] = arr[0][i];
    }
    for (int i = 1; i < m; i++) {
        border[index++] = arr[i][n - 1];
    }
    for (int i = n - 2; i >= 0; i--) {
        border[index++] = arr[m - 1][i];
    }
    for (int i = m - 2; i > 0; i--) {
        border[index++] = arr[i][0];
    }

    // In đường biên
    cout << "Duong bien theo chieu kim dong ho la: ";
    for (int i = 0; i < m * 2 + n * 2 - 4; i++) {
        cout << border[i] << " ";
    }
    cout << endl;

    return 0;
}