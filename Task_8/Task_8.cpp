#include <iostream>
#include <cmath>
int main() {
    setlocale(LC_ALL, "rus");
    std::cout << "Посчитать ряд, без использования вещественной арифметики.\n";
    std::cout << "Выполнил Стрелков Ярослав Михайлович, студент группы 453505, вариант 2\n";
    
    long long k;
    long long a, n, d, res, sum = 0;; 
    while (true) 
    {
        std::cout << "Для ввода контрольных значений нажмите 1\n";
        std::cout << "Для выхода из программы нажмите 2\n";
        std::cin >> k;
        switch(k)
        {
            case (1):
            std::cout << "Введите n и a\n";
            std::cin >> n >> a;
            if (std::cin.fail()) {
                std::cout << "Ошибка ввода\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
                for(int i = 1; i <= n; i++)
                {
                    res = pow(2, i - 1) * pow(-1, i - 1) * a; 
            }
            if (res == -9223372036854775808) {
                std::cout << "Переполнение long long" << "\n";
            }
            else {
            std::cout << res << '\n';}
            break;
        case (2):
            return 0;
            break;
        default:
            std::cout << "Ошибка ввода\n";
            return 0;
            break;
        }
    }
}