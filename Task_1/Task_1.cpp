#include <iostream>
#include <cmath>

int main() {
   setlocale(LC_ALL, "rus");
   std::cout << "Взять все числа от 1 до 30. С каждым из этих чисел выполнить (a𝑖 − b𝑖)², где a и b определены по формуле:" << std::endl;
   std::cout << "для a𝑖 i, если i нечётное и i/2, если i чётное" << std::endl;
   std::cout << "для b𝑖 i², если 𝑖 нечётное и i³, если i чётное" << std::endl;
   std::cout << "Выполнил Стрелков Ярослав Михайлович, студент группы 453505" << std::endl;
   long N = 0;
   long a, b, n;
   int i = 1, k;
   while(true) 
    {
        std::cout << "Для ввода контрольных значений нажмите 1\n";
        std::cout << "Для выхода из программы нажмите 2\n";
        std::cin >> k;
        switch(k)
        {
        case (1):
            while (i <= 30)
             {
             i / 2 ? a = i / 2 : a = i;
             i / 2 ? b = pow(i, 3) : b = pow(i, 2);
             i ++;
             n = pow((a - b), 2);
             N += n;
             }
            std::cout << N << std::endl;
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