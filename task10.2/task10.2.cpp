#include <iostream>
#include <cmath>  
#include <Windows.h>

using namespace std;

const double PI = 3.14;

// Функция для вычисления диаметра по площади
double calculateDiameter(double S) {
    return sqrt((4 * S) / PI);
}

// Функция для вычисления длины окружности по диаметру
double calculateCircumference(double D) {
    return PI * D;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double S;
    cout << "Введите площадь круга (S): ";
    cin >> S;

    double D = calculateDiameter(S);
    double L = calculateCircumference(D);

    cout << "Диаметр (D): " << D << endl;
    cout << "Длина окружности (L): " << L << endl;

    return 0;
}
