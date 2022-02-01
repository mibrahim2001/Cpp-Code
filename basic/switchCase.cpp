#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char button;
    std::cout << "Please enter a character: " << std::endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        std::cout << "Hello!" << std::endl;
        break;
    
    case 'b':
        std::cout << "Ciao!" << std::endl;
        break;
    case 'c':
        std::cout << "Namaste" << std::endl;
        break;
    case 'd':
        std::cout << "Asalamualikum!" << std::endl;
        break;
    default:
        std::cout << "I am still learning more!" << std::endl;
        break;
    }
    return 0;
}
