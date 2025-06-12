#include <iostream>
#include <cstdlib>

class Array
{
    int size;
    int* array;
public:
    Array(int size);
    void displayAll();
    int find(int number);
    int getOdds();
    int getAverage();
};

int main() {
    srand(time(0));
    Array array(25);
    array.displayAll();
    if(array.find(100) > -1) {
        std::cout << "Wartosc 100 znaleziona pod indeksem: " << array.find(100) << std::endl;
    }
    int odds = array.getOdds();
    std::cout << "Razem nieparzystych: " << odds << std::endl;
    std::cout << "Średnia: " << array.getAverage() << std::endl;
    return 0;
}

Array::Array(int size)
{
    this->size = size;
    array = new int[size];
    for(int i=0; i<size; i++) {
        array[i] = 1 + rand() % 1001;
    }
}

void Array::displayAll()
{
    for(int i=0; i<size; i++)
    {
        std::cout << i << ": " << array[i] << std::endl;
    }
}

int Array::find(int number)
{
    for(int i=0; i<size; i++)
    {
        if(array[i] == number)
            return i;
    }
    return -1;
}

int Array::getOdds()
{
    int counter = 0;
    std::cout << "Liczby nieparzyste" << std::endl;
    for(int i=0; i<size; i++)
    {
        if(array[i] % 2 != 0) {
            counter++;
            std::cout << array[i] << std::endl;
        }
    }
    return counter;
}

int Array::getAverage()
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += array[i];
    }
    return sum/size;
}




