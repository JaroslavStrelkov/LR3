#include <iostream>
#include <cmath>

int main() {
setlocale (LC_ALL, "rus");
std::cout << "Найти сумму ряда с точностью 𝜀 = 10³, общий член которого d𝑛 = 1 / 2^n + 1 / 3^n." << std::endl;
std::cout << "Выполнил Стрелков Ярослав Михайлович, студент группы 453505" << std::endl;
double epsilion, d;
int n = 1, k;
epsilion = (1e-3);
while (true) 
    {
        std::cout << "Для ввода контрольных значений нажмите 1\n";
        std::cout << "Для выхода из программы нажмите 2\n";
        std::cin >> k;
        switch(k)
        {
        case (1):
            do { 
            n++;
            d = (1 / pow(2, n))  + (1 / pow(3, n));  
            } 
            while (d < epsilion);
            std::cout << "Cуммa ряда с точностью 𝜀 = 10³ равна " << d << std::endl;
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