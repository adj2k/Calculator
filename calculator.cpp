#include <iostream>

int storedValue = 0;

void store(int value)
{
    storedValue = value;
}

int retrieve()
{
    return storedValue;
}

void clear()
{
    storedValue = 0;
    std::cout << "Stored Value Cleared." << std::endl;
}

int main()
{
    int num1, num2, result;
    char operation;
    while (true)
    {
        std::cout << "Enter first number: ";
        std::cin >> num1;
        std::cout << "Enter an operator (+, -, *, /, %, q=quit, s=store, r=retrieve, c=clear): ";
        std::cin >> operation;

        if (operation == 'q')
        {
            break;
        }
        else if (operation == 'r')
        {
            std::cout << "Retrieved Value: " << retrieve() << std::endl;
            continue;
        }
        else if (operation == 's')
        {
            store(num1);
            std::cout << "Stored: " << num1 << std::endl;
            continue;
        }
        else if (operation == 'c')
        {
            clear();
            continue;
        }

        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (operation)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '%':
            result = num1 % num2;
            break;
        default:
            std::cout << "Invalid operator";
            continue;
            ;
        }

        std::cout << "Result: " << result << std::endl;
    }
    return 0;
}
