#include <iostream>
#include <fstream>
#include <locale>
#include <vector>
#include <sstream>

using namespace std;

struct parrots
{
    int mass;
    wstring color;
    wstring species;
};

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    //ф-я 1:
    wifstream inFile("popugi.txt");
    if(!inFile.is_open())
    {
        cout << "Ошибка" << endl;
        return 0;
    }
    //ф-я 2:

    //ф-я 3:

}
