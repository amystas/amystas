#include <iostream>

class Osoba
{
    int id;
    std::string name;
public:
    static int counter;
    Osoba();
    Osoba(int id, std::string name);
    Osoba(Osoba& osoba);
    void show(std::string name);
};

int Osoba::counter = 0;

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

Osoba::Osoba()
{
    this->id = 0;
    this->name = "";
    counter++;
}

Osoba::Osoba(int id, std::string name)
{
    this->id = id;
    this->name = name;
    counter++;
}

Osoba::Osoba(Osoba &osoba)
{
    this->id = osoba.id;
    this->name = osoba.name;
    counter++;
}

void Osoba::show(std::string name)
{
    if(this->name.empty()) {
        std::cout << "Brak danych" << std::endl;
    } else {
        std::cout << "Cześć " << name << " mam na imię " << this->name << std::endl;
    }
}