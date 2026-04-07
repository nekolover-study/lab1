#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double width, height;
    cout << "Введите длину прямоугольника: ";
    cin >> width;
    cout << "Введите высоту прямоугольника: ";
    cin >> height;
    double perimeter = 2 * (width + height);
    double area = width * height;
    double diagonal = sqrt(pow(width, 2) + pow(height, 2));
    cout << "\n--- Результаты ---" << endl;
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
    cout << "Длина диагонали: " << diagonal << endl;
    return 0;
}
