#include <iostream>

int main()
{
    int height;
    std::cout << "Height: ";
    std::cin >> height;

    int space, x = 0, hash;
    do
    {
        for (space = height - x - 1; space > 0; space--)
        {
            std::cout << " ";
        }
        x++;

        for (hash = x; hash > 0; hash--)
        {
            std::cout << "#";
        }

        std::cout << "  ";

        for (hash = x; hash > 0; hash--)
        {
            std::cout << "#";
        }

        std::cout << "\n";
    }
    while (x < height);
}
