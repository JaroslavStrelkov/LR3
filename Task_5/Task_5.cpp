#include <iostream>
#include <cmath>
double long urav(long double x) {
    return log(x) + 3 * tan(x) + sqrt(x);
}
int main() {
    setlocale(LC_ALL, "rus");
    std::cout << "Необходимо приближенно найти корень уравнения f(x) = 0 для функцииbиз своего варианта.\n";
    std::cout << "Выполнил Стрелков Ярослав Михайлович, студент группы 453505, вариант 2\n";
    
    long long k;
    long double l, r, step, part, mmm, x, min1, min2; 
    while (true) 
    {
        std::cout << "Для ввода контрольных значений нажмите 1\n";
        std::cout << "Для выхода из программы нажмите 2\n";
        std::cin >> k;
        switch(k)
        {
            case (1):
            std::cout << "На сколько частей разделите область поиска корня?\n";
            std::cin >> part;
            if (std::cin.fail() || part <= 0) {
                std::cout << "Ошибка ввода\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
            l = 2;
            r = 4;
            step = (r - l) / part;
            min1 = fabs(urav(l));
            x = l;
            for (long double i = l; i <= r; i += step) {
                min2 = urav(i);
                if (fabs(min2) < min1) {
                    min1 = fabs(min2);
                    x = i;
                }
            }
            std::cout << x << "\n";
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