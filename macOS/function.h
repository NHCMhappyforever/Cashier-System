#include"lang.h"
#include<fstream>
#include<string>
#include<cmath>
using namespace std;
struct item
{
    string name;
    double price = 0;
};
struct itemlist
{
    int total = 0;
    item item[1000] = {};
};
struct config
{
    string password = "12345678";
    int lang = 0;
};
struct itemlist itemlist1;
struct config config1;
string show(int lang, string para)
{
    string out;
    if (lang == 0)
    {
        out = enus[para];
    }
    else if (lang == 1)
    {
        out = zhcn[para];
    }
    return out;
}
void pause()
{
    string a = "read -n1 -r -p \"" + show(config1.lang, "pause") + "\" key";
    system((const char *)a.c_str());
}
void clear()
{
    system("clear");
}
int input(string prompt, string error, int options[10])
{
    cout << prompt << endl;
    int select;
    while (!(cin >> select))
    {
    ERROR:
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << error << endl;
        pause();
        clear();
        cout << prompt << endl;
    }
    int i = 0;
    for (i; i <= 10; i++)
    {
        bool selected = false;
        if (select == options[i])
        {
            goto END;
        }
        else
        {
            bool selected = false;
        }
        if (i == 10)
        {
            if (selected == false)
            {
                goto ERROR;
            }
        }
    }
END:
    return select;
}
void save(int option)
{
    if (option == 0)
    {
        ofstream write;
        write.open("items.dat", ios::binary | ios::out);
        write.write((const char*)&itemlist1, sizeof(itemlist1));
        write.close();
    }
    else
    {
        ofstream write;
        write.open("config.dat", ios::binary | ios::out);
        write.write((const char*)&config1, sizeof(config1));
        write.close();
    }
}
void read(int option)
{
    if (option == 0)
    {
        ifstream items;
        items.open("items.dat", ios::binary | ios::in);
        if (items.is_open() == false)
        {
            ofstream newData;
            newData.open("items.dat", ios::binary | ios::out);
            newData.write((const char*)&itemlist1, sizeof(itemlist1));
            newData.close();
        }
        items.read((char*)&itemlist1, sizeof(itemlist1));
        items.close();
    }
    else
    {
        ifstream config;
        config.open("config.dat", ios::binary | ios::in);
        if (config.is_open() == false)
        {
            ofstream newData;
            newData.open("config.dat", ios::binary | ios::out);
            newData.write((const char*)&config1, sizeof(config1));
            newData.close();
        }
        config.read((char*)&config1, sizeof(config1));
        config.close();
    }
}
void list()
{
    read(0);
    for (int i = 1; i <= itemlist1.total; i++)
    {
        cout << to_string(i) << "\t " << itemlist1.item[i].name << "\t $" << floor((itemlist1.item[i].price * pow(10, 2) + 0.05)) / pow(10, 2) << endl;
    }
}