#include <iostream>

int main()
{
    const int arraySize = 5; // You can change this size as per your requirement
    char charArray[arraySize];

    std::cout << "Enter " << arraySize << " characters, one at a time:" << std::endl;

    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << "Character " << i + 1 << ": ";
        std::cin >> charArray[i];
    }

    // Displaying the entered characters
    std::cout << "You entered: ";
    for (int i = 0; i < arraySize; ++i)
    {
        std::cout << charArray[i] << " ";
    }

    return 0;
}
