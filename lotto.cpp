#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>

int main(int argc, char* argv[]) {
    std::cout << "Ile losowan wykonac?" << std::endl;
    int linesNumber;
    std::cin >> linesNumber;
    int lines[linesNumber][6];
    srand(time(0));
    for(int i=0; i<linesNumber; i++) {
        for(int j=0; j<6; j++) {
            lines[i][j] = 1 + rand() % 50;
        }
    }
    for(int i=0; i<linesNumber; i++) {
        std::cout << "Losowanie nr " << i+1 << ": ";
        for(int j=0; j<6; j++) {
            std::cout << lines[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for(int i=1; i<=49; i++)
    {
        int counter = 0;
        for(int j=0; j<linesNumber; j++) {
            for(int k=0; k<6; k++)
            {
                if(lines[j][k] == i)
                    counter++;
            }
        }
        std::cout << "Liczba " << i << " wystapila: " << counter << " razy" << std::endl;
    }

//    std::map<int, int> linesMap;
//    for(int i=0; i<linesNumber; i++) {
//        for(int j=0; j<6; j++) {
//            linesMap[lines[i][j]]++;
//        }
//    }
//
//    for(auto element : linesMap) {
//        std::cout << "Liczba " << element.first << " wystapila: " << element.second << " razy" << std::endl;
//    }

    return 0;
}
