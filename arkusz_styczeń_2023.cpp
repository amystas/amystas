#include <iostream>

int nwd(int a, int b);

int main() {
    int a,b;
    std::cout << "Wprowadz dwie liczby:" << std::endl;
    std::cin >> a >> b;
    std::cout << "Największy wspólny dzielnik to: " << nwd(a,b);
    std::cout.flush();
    return 0;
}

int nwd(int a, int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }
    return a;
}