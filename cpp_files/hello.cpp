#include<iostream>

int main()
{
    std::string name;
    std::cout << "What is your name?" << std::endl;
    getline(std::cin, name);
    std::cout << "Hello, " << name << std::endl;

    return 0;
}