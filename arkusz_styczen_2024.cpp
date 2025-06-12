#include <iostream>

bool sumaKontrolna(std::string pesel);
char sprawdzPlec(std::string pesel);

int main()
{
    std::string pesel;
    std::cin >> pesel;
    if(sprawdzPlec(pesel) == 'K') {
        std::cout << "Kobieta" << std::endl;
    }
    if(sprawdzPlec(pesel) == 'M') {
        std::cout << "Mezczyzna" << std::endl;
    }
    if(sumaKontrolna(pesel)) {
        std::cout << "Suma kontrolna zgadza się" << std::endl;
    }
    if(!sumaKontrolna(pesel)) {
        std::cout << "Suma kontrolna nie zgadza się" << std::endl;
    }
    return 0;
}

char sprawdzPlec(std::string pesel)
{
    if((int)(pesel.at(9) - '\0') % 2 == 0) {
        return 'K';
    } else {
        return 'M';
    }
}

bool sumaKontrolna(std::string pesel)
{
    int wagi[10] = {1,3,7,9,1,3,7,9,1,3};
    int S = 0;
    for(int i=0; i<10; i++) {
        S += (int)(pesel.at(i) - '0')  * wagi[i];
    }
    int M = S % 10;
    int R = M == 0 ? 0 : 10 - M;
    if(R == pesel.at(10) - '0') {
        return true;
    }
    return false;
}

