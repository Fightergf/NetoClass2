#include <iostream>

class Counter
{
public:
    int count;
    int comm1;
    
public:
    Counter()
    {
        this->count = 1;
        this->comm1 = 0;
    }
    int add()
    {
        return count++;
    }
    int less()
    {
        return count--;
    }
    int counter()
    {
        return count;
    }
};
void answUser(Counter &p)
{
    char answ;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите Y или N: \n";
    std::cin >> answ;

    if (answ == 'Y' || answ == 'y')
    {
        std::cout << "Введите начальное значение счетчика: ";
        std::cin >> p.count;
    }
    if (answ == 'N' || answ == 'n')
    {
        std::cout << "Тогда счетчик установлен с 1 \n";
    }

}
int counterUser(Counter &p)
{
    int count;
    char command;
    int comm1;
    while (true)
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
        if (command == '+')
        {
            p.add();
            std::cout << p.counter();
            std::cout << std::endl;
        }
        if (command == '-')
        {
            p.less();
            std::cout << p.counter();
            std::cout << std::endl;
        }
        if (command == '=')
        {
            std::cout << p.counter();
            std::cout << std::endl;
        }
        if (command == 'x')
        {
            std::cout << "Гудбай май лав гудбай)!\n";
            return false;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Ru");

    Counter counteR;
    answUser(counteR);
    counterUser(counteR);
}