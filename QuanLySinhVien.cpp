#include <bits/stdc++.h>
using namespace std;
struct Student{
    int id;
    string name;
    string gender;
    int age;
    float math;
    float physics;
    float chemistry;
    float age=0;
    string level;
};
typedef Student student;
int idMax (student a[], int n)
{
    int idMax = 0;
        if (n > 0) {
            idMax = a[0].id;
            for(int i = 0;i < n; i++) {
                if (a[i].id > idMax) {
                    idMax = a[i].id;
                }
            }
        }
        return idMax;
}void printLine(int n);
int idLonNhat(student a[], int n);
void nhapThongTinSV(student &std, int id);
void nhapSV(student a[], int id, int n);
void capNhatThongTinSV(student &std);
void capNhatSV(student a[], int id, int n);
int xoaTheoID(student a[], int id, int n);
void timKiemTheoTen(student a[], string name, int n);
void tinhDTB(student &std);
void xeploai(student &std);
void sapxepTheoDTB(student a[], int n);
void sapXepTheoTen(student a[], int n);
void showStudent(student a[], int n);
int docFile(student a[], string fileName);
void ghiFile(student a[], int n, string fileName);
void pressAnyKey();

void nhapThongTinSV(student &std, int id) {
    cout << "\n Nhap ten: "; fflush(stdin); getline(cin>>ws,std.name);
    cout << " Nhap gioi tinh: "; getline(cin>>ws,std.gender);
    cout << " Nhap tuoi: "; cin >> std.age;
    cout << " Nhap diem Toan: "; cin >> std.math;
    cout << " Nhap diem Ly: "; cin >> std.physics;
    cout << " Nhap diem Hoa: "; cin >> std.chemistry;
    std.id = id;
    tinhDTB(std);
    xeploai(std);
}
void nhapSV(student a[], int id, int n) {
    printLine(40);
    printf("\n Nhap sinh vien thu %d:", n + 1);
    nhapThongTinSV(a[n], id);
    printLine(40);
}
int main()
{
    
}