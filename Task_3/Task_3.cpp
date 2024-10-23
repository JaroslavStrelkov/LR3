#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "rus");
    std::cout << "Вычислить значений функции y = sin(x) - cos(x) на отрезке [A,B]" << std::endl;
    std::cout << "Выполнил Стрелков Ярослав Михайлович, студент группы 453505" << std::endl;
    const double PI = 3.141592654;
    long double B = PI / 2;
    int A = 0, M = 20, k;
    double i, y, X;
    double H = (B - A) / M;
    while(true) 
    {
        std::cout << "Для ввода контрольных значений нажмите 1\n";
        std::cout << "Для выхода из программы нажмите 2\n";
        std::cin >> k;
        switch(k)
        {
        case (1):
            for (i = A; i <= M; i++) 
            {
            X = (A + (i * H));
            y = sin(X) - cos(X);
            std::cout << y << std::endl;
            }
            break;
        case (2):
            return 0;
            break;

        default:
            std::cout << "Ошибка ввода\n";
            break;
        }
    }
}