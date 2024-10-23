#include <iostream>
#include <cmath>

long double factorial(long double n) {
    if (n == 0 || n == 1) 
        return 1;
    else 
        return n * factorial(n - 1); 
}

int main() {
    setlocale(LC_ALL, "rus");
    std::cout << "Необходимо разложить функцию Y(x) ряд S(x), затем с помощью полученного ряда найти значение функции и сравнить его со значением, вычисленным с помощью стандартных функций.\n";
    std::cout << "Выполнил Стрелков Ярослав Михайлович, студент группы 453505, вариант 2\n";

    long long k, n, size;
    long double x, part = 1, sum = 0; 
    const double e = 2.7182818;
    while (true) 
    {
        std::cout << "Для ввода контрольных значений нажмите 1\n";
        std::cout << "Для выхода из программы нажмите 2\n";
        std::cin >> k;
        switch(k)
        {
        case (1):
            std::cout << "Введите количество членов ряда (n)\n";
            std::cin >> n;
            if (std::cin.fail() || n < 1) {
                std::cout << "Ошибка ввода\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
            std::cout << "Введите количество x, от которых вы хотите посчитать функцию\n";
            std::cin >> size;
            for (int i = 0; i < size; i++)
            {  
                std::cout << " Вводите x, область допустимых значений (0.1;1)\n";
                std::cin >> x;
                if (x < 0.1 || x > 1) {
                    std::cout << "Ошибка ввода\n";
                    continue;
                }
                sum = 0;
                for (int i = 0; i <= n; i++)
                {
                    part = pow(x, 2 * i) / factorial(2 * i);
                    if (fabs(part) < 1e-9) {
                        break;
                    }
                    sum += part;
                }                  
                std::cout << "S(x): " << sum << "\t" << "Y(x): " << (exp(x) + exp(-x)) / 2 << "\n";
               
                }
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