#include <iostream>

class SelectionSort
{
    int maxValue(int startIndex);
public:
    int array[10];
    void sort();
};

int main() {
    SelectionSort object;
    //object.array = new int[10];
    for(int i=0; i<10; i++) {
        int number;
        std::cin >> number;
        object.array[i] = number;
    }
    object.sort();
    for(int i=0; i<10; i++) {
        std::cout << object.array[i] << " ";
    }
    return 0;
}

int SelectionSort::maxValue(int startIndex)
{
    int max = INT32_MIN;
    int maxIndex = 0;
    for(int i=startIndex; i<10; i++) {
        if(array[i] > max) {
            max = array[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

void SelectionSort::sort() {
    for(int i=0; i<10; i++) {
        int maxIndex = maxValue(i);
        int currentValue = array[i];
        array[i] = array[maxIndex];
        array[maxIndex] = currentValue;
    }
}

