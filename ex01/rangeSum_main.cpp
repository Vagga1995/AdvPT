#include <iostream>

int main(int argc, char* argv[])
{
    int lLimit, uLimit;
    int sum = 0;
    std::cout << "Enter two numbers (lLimit | uLimit):" << "\n";
    std::cin >> lLimit >> uLimit;
    if(std::cin.fail())
    {
        throw std::runtime_error("Please enter the correct input!");
    }
    for(int i = lLimit; i < uLimit; ++i)
    {
        sum += i;
    }
    std::cout << "The sum of the numbers in the range are: " << sum << std::endl;
    return 0;
}