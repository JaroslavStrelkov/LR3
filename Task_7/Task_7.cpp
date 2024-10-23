#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "rus");
    std::cout << "Необходимо найти все числа армстронга относительно числа, которое вводит пользователь.\n";
    std::cout << "Выполнил Стрелков Ярослав Михайлович, студент группы 453505, вариант 2\n"; 
    long long k;
    while (true) 
    {
        std::cout << "Для ввода контрольных значений нажмите 1\n";
        std::cout << "Для выхода из программы нажмите 2\n";
        std::cin >> k;
        switch(k)
        {
            case (1):
            {
            long double x;
            std::cout << "На сколько частей разделите область поиска корня?\n";
            std::cin >> x;
            if (std::cin.fail() || x < 1) {
                std::cout << "Ошибка ввода\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
             long long sum, g, sumpownum, num, blabla, f = x;
            for(long double i = 1; i <= f; i++) {
                num = i;
                g = num;
                sum = 0;
                sumpownum = 0;
                while (g > 0) {
                    sum++;
                    g /=10;   
                }
                g = num;
                while  (g > 0) {
                    blabla = g % 10; 
                    sumpownum += std::pow(blabla, sum);
                    g /= 10;
                }
                if (sumpownum == num) {
                    std::cout << num << "\n";
                }
                }
            break;
            }
        case (2):
            return 0;
            break;
        default:
            std::cout << "Ошибка ввода\n";
            continue;
            break;
        }
    }
}