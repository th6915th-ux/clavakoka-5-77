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

    //ф-я 2:
    cout << "Mass" << "\t" <<  "Color" << "\t" << "Species" << endl;
    for(const auto &characs : allparrots)
    {
        cout << endl;
        cout << characs.mass << "\t" << characs.color  << "\t" << characs.species << endl;
    }
    //ф-я 3:

}
