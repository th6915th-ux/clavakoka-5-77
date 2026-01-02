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
    vector<parrots> allparrots;
    while(!inFile.eof())
    {
        parrots characs;
        inFile >> characs.mass;
        inFile >> characs.color;
        inFile >> characs.species;
        allparrots.push_back(characs);
    }
    //ф-я 2:
    cout << "Mass" << "\t" <<  "Color" << "\t" << "Species" << endl;
    for(const auto &characs : allparrots)
    {
        cout << endl;
        wcout << characs.mass << "\t" << characs.color  << "\t" << characs.species << endl;
    }
    //ф-я 3:
    ofstream out("out.bin", ios::binary);
    for(const auto &characs : allparrots)
    {
        out.write(reinterpret_cast<const char*>(&characs), sizeof(parrots));
    }
    return 0;
}
