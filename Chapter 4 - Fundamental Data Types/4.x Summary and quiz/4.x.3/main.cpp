//Write the following program: The user is asked to enter 2 floating point
//numbers (use doubles). The user is then asked to enter one of the following
//mathematical symbols: +, -, *, or /. The program computes the answer on the
//two numbers the user entered and prints the results. If the user enters an
//invalid symbol, the program should print nothing.

#include <iostream>

double getUserDouble()
{
    double x{};
    std::cout << "Enter a double value: ";
    std::cin >> x;

    return x;
}

char getUserOperator()
{
    char op{};
    std::cout << "Enter one of the following: +, -, *, or /: ";
    std::cin >> op;

    return op;
}

void calculate(char op, double x, double y)
{
    switch (op)
    {
        case '+':
            std::cout << x << " + " << y << " is " << x + y << '\n';
            break;
        case '-':
            std::cout << x << " - " << y << " is " << x - y << '\n';
            break;
        case '*':
            std::cout << x << " * " << y << " is " << x * y << '\n';
            break;
        case '/':
            std::cout << x << " / " << y << " is " << x / y << '\n';
            break;
    }
}

int main()
{
    double x{ getUserDouble() };
    double y{ getUserDouble() };
    char op{ getUserOperator()};

    calculate(op, x, y);

    return 0;
}