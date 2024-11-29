#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>

std::string task1(std::string filename);
int task2(std::string filename);

int main()
{
    std::cout << task1("liczby.txt") << std::endl;
    std::cout << task2("liczby.txt") << std::endl;
    return 0;
}

std::string task1(std::string filename)
{
    std::ifstream file(filename);
    std::string line;
    int counter = 0;
    std::string number;
    while (std::getline(file, line))
    {
        if (line.at(0) == line.at(line.size() - 1))
        {
            counter++;
            if (counter == 1) 
            {
                number = line;
            }
        }
    }
    file.close();
    return number;
}

int task2(std::string filename)
{
    std::ifstream file(filename);
    std::string line;
    std::vector<int> numbers;
    std::set<std::set<int>> numberSet;
    while (std::getline(file, line))
    {
        numbers.push_back(std::stoi(line));
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = 0; j < numbers.size(); j++)
        {
            for (int k = 0; k < numbers.size(); k++)
            {
                if (numbers[i] != numbers[j] && numbers[i] != numbers[k] && numbers[j] != numbers[k])
                {
                    if (numbers[k] % numbers[j] == 0 && numbers[j] % numbers[i] == 0)
                    {
                        numberSet.insert(std::set<int>{ numbers[i], numbers[j], numbers[k] });
                    }
                }
            }
        }
    }
    std::ofstream outputFile("trojki.txt");
    for (auto s : numberSet) {
        for (auto ss : s) {
            outputFile << ss << " ";
        }
        outputFile << std::endl;
    }
        
    return numberSet.size();
}
