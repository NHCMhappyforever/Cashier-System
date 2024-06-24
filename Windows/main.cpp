#include"function.h"
#define bigLogo R"(  ______                       __        __                     
 /      \                     /  |      /  |                    
/$$$$$$  |  ______    _______ $$ |____  $$/   ______    ______  
$$ |  $$/  /      \  /       |$$      \ /  | /      \  /      \ 
$$ |       $$$$$$  |/$$$$$$$/ $$$$$$$  |$$ |/$$$$$$  |/$$$$$$  |
$$ |   __  /    $$ |$$      \ $$ |  $$ |$$ |$$    $$ |$$ |  $$/ 
$$ \__/  |/$$$$$$$ | $$$$$$  |$$ |  $$ |$$ |$$$$$$$$/ $$ |      
$$    $$/ $$    $$ |/     $$/ $$ |  $$ |$$ |$$       |$$ |      
 $$$$$$/   $$$$$$$/ $$$$$$$/  $$/   $$/ $$/  $$$$$$$/ $$/       
                                                                
                                                                
                                                                
                                 __                             
                                /  |                            
  _______  __    __   _______  _$$ |_     ______   _____  ____  
 /       |/  |  /  | /       |/ $$   |   /      \ /     \/    \ 
/$$$$$$$/ $$ |  $$ |/$$$$$$$/ $$$$$$/   /$$$$$$  |$$$$$$ $$$$  |
$$      \ $$ |  $$ |$$      \   $$ | __ $$    $$ |$$ | $$ | $$ |
 $$$$$$  |$$ \__$$ | $$$$$$  |  $$ |/  |$$$$$$$$/ $$ | $$ | $$ |
/     $$/ $$    $$ |/     $$/   $$  $$/ $$       |$$ | $$ | $$ |
$$$$$$$/   $$$$$$$ |$$$$$$$/     $$$$/   $$$$$$$/ $$/  $$/  $$/ 
          /  \__$$ |                                            
          $$    $$/                                             
           $$$$$$/                                              
-----------------------------------------------------------------
1.2.1
-----------------------------------------------------------------
)"
int main()
{
    read(1);
    string ps;
    while (ps != config1.password)
    {
        for (int i = 1; i <= 3; i++)
        {
            system("cls");
            cout << show(config1.lang, "startPrompt") << endl;
            string ps;
            cin >> ps;
            if (ps != config1.password)
            {
                system("cls");
                cout << show(config1.lang, "error3") << endl;
                system("pause");
                if (i == 3)
                {
                    return 0;
                }
            }
            else if (ps == config1.password)
            {
                goto START;
            }
        }
    }
    START:
    system("cls");
    cout << bigLogo << endl;
    system("pause");
    MENU:
    int select = 114514;
    int options1[5] = { 1, 2, 3, 4, 0 };
    while (select != 0)
    {
        read(0);
        read(1);
        system("cls");
        select = input(show(config1.lang, "mainMenu"), show(config1.lang, "error1"), options1);
        switch (select)
        {
        case 1:
        {
            read(0);
            if (itemlist1.total == 0)
            {
                system("cls");
                cout << show(config1.lang, "noItem") << endl;
                system("pause");
                goto MENU;
            }
            system("cls");
            cout << bigLogo << endl;
            int select11 = 114514;
            int options11[3] = { 1, 2, 0 };
            int chosen[1000];
            int chosenTotal = 0;
            while (select11 != 0)
            {
                system("cls");
                for (int i = 1; i <= chosenTotal; i++)
                {
                    cout << i << "\t " << itemlist1.item[chosen[i]].name << "\t $" << itemlist1.item[chosen[i]].price << endl;
                }
                select11 = input(show(config1.lang, "1prompt1"), show(config1.lang, "error1"), options11);
                switch (select11)
                {
                case 1:
                {
                    system("cls");
                    list();
                    cout << show(config1.lang, "1prompt11") << endl;
                    int number;
                    cin >> number;
                    if (number > itemlist1.total || number <= 0)
                    {
                        system("cls");
                        cout << show(config1.lang, "error2") << endl;
                        system("pause");
                        select11;
                    }
                    else
                    {
                        chosen[chosenTotal + 1] = number;
                        chosenTotal++;
                        select11;
                    }
                    break;
                }
                case 2:
                {
                    if (chosenTotal == 0)
                    {
                        system("cls");
                        cout << show(config1.lang, "noItem") << endl;
                        system("pause");
                        select11;
                        break;
                    }
                    system("cls");
                    for (int i = 1; i <= chosenTotal; i++)
                    {
                        cout << i << "\t " << itemlist1.item[chosen[i]].name << "\t $" << itemlist1.item[chosen[i]].price << endl;
                    }
                    cout << show(config1.lang, "1prompt12") << endl;
                    int number;
                    cin >> number;
                    if (number > chosenTotal || number < 1)
                    {
                        system("cls");
                        cout << show(config1.lang, "error2") << endl;
                        system("pause");
                        select11;
                    }
                    else
                    {
                        chosen[chosenTotal];
                        chosenTotal--;
                        select11;
                    }
                    break;
                }
                }
            }
            SETTLE:
            system("cls");
            double subtotal = 0;
            for (int i = 1; i <= chosenTotal; i++)
            {
                cout << to_string(i) << "\t " << itemlist1.item[chosen[i]].name << "\t $" << floor((itemlist1.item[chosen[i]].price * pow(10, 2) + 0.05)) / pow(10, 2) << endl;
                subtotal += floor((itemlist1.item[chosen[i]].price * pow(10, 2) + 0.05)) / pow(10, 2);
            }
            subtotal = floor((subtotal * pow(10, 2) + 0.05)) / pow(10, 2);
            cout << "\n" << show(config1.lang, "subtotal") << subtotal << endl;
            cout << "\n" << show(config1.lang, "tax") << floor((subtotal * 0.08875 * pow(10, 2) + 0.05)) / pow(10, 2) << endl;
            cout << "\n" << show(config1.lang, "total") << subtotal + floor((subtotal * 0.08875 * pow(10, 2) + 0.05)) / pow(10, 2) << endl;
            cout << show(config1.lang, "1prompt2") << endl;
            double tip;
            cin >> tip;
            if (tip < 0)
            {
                system("cls");
                cout << show(config1.lang, "error2") << endl;
                system("pause");
                goto SETTLE;
            }
            tip = floor((tip * pow(10, 2) + 0.05)) / pow(10, 2);
            system("cls");
            for (int i = 1; i <= chosenTotal; i++)
            {
                cout << to_string(i) << "\t " << itemlist1.item[chosen[i]].name << "\t $" << floor((itemlist1.item[chosen[i]].price * pow(10, 2) + 0.05)) / pow(10, 2) << endl;
            }
            cout << "\n" << show(config1.lang, "subtotal") << subtotal << endl;
            cout << "\n" << show(config1.lang, "tax") << floor((subtotal * 0.08875 * pow(10, 2) + 0.05)) / pow(10, 2) << endl;
            cout << "\n" << show(config1.lang, "tip") << tip << endl;
            cout << "\n" << show(config1.lang, "total") << tip + subtotal + floor((subtotal * 0.08875 * pow(10, 2) + 0.05)) / pow(10, 2) << endl;
            cout << show(config1.lang, "1prompt3") << endl;
            system("pause");
            system("cls");
            cout << show(config1.lang, "1prompt4") << endl;
            system("pause");
            goto MENU;
        }
        case 2:
        {
            read(1);
            system("cls");
            string password;
            while (password != config1.password)
            {
                system("cls");
                cout << show(config1.lang, "2prompt1") << endl;
                cin >> password;
                if (password != config1.password)
                {
                    system("cls");
                    cout << show(config1.lang, "error3") << endl;
                    system("pause");
                    string password;
                    goto MENU;
                }
            }
            MENU2:
            system("cls");
            int select2 = 114514;
            int options2[6] = { 1, 2, 3, 4, 5, 0 };
            while (select2 != 0)
            {
                system("cls");
                select2 = input(show(config1.lang, "2menu"), show(config1.lang, "error1"), options2);
                switch (select2)
                {
                case 1:
                {
                    read(0);
                    if (itemlist1.total == 1000)
                    {
                        system("cls");
                        cout << show(config1.lang, "maximum") << endl;
                        system("pause");
                        goto MENU2;
                    }
                    system("cls");
                    cout << show(config1.lang, "21prompt1") << endl;
                    string name;
                    cin >> name;
                    for (int i = 1; i <= itemlist1.total; i++)
                    {
                        if (name == itemlist1.item[i].name)
                        {
                            system("cls");
                            cout << show(config1.lang, "error4") << endl;
                            system("pause");
                            goto MENU2;
                        }
                    }
                    system("cls");
                    cout << show(config1.lang, "21prompt2") << endl;
                    double price;
                    cin >> price;
                    if (price < 0)
                    {
                        system("cls");
                        cout << show(config1.lang, "error2") << endl;
                        system("pause");
                        goto MENU2;
                    }
                    itemlist1.total += 1;
                    itemlist1.item[itemlist1.total].name = name;
                    price = floor((price * pow(10, 2) + 0.05)) / pow(10, 2);
                    itemlist1.item[itemlist1.total].price = price;
                    save(0);
                    goto MENU2;
                }
                case 2:
                {
                    system("cls");
                    read(0);
                    if (itemlist1.total == 0)
                    {
                        system("cls");
                        cout << show(config1.lang, "noItem") << endl;
                        system("pause");
                        goto MENU2;
                    }
                    list();
                    cout << show(config1.lang, "22prompt1") << endl;
                    int number;
                    cin >> number;
                    if (number > itemlist1.total || number <= 0)
                    {
                        system("cls");
                        cout << show(config1.lang, "error2") << endl;
                        system("pause");
                        goto MENU2;
                    }
                    itemlist1.item[number].name;
                    itemlist1.item[number].price;
                    for (int i = number; i <= itemlist1.total; i++)
                    {
                        itemlist1.item[i].name = itemlist1.item[i + 1].name;
                        itemlist1.item[i].price = itemlist1.item[i + 1].price;
                    }
                    itemlist1.total--;
                    save(0);
                    goto MENU2;
                }
                case 3:
                {
                    system("cls");
                    read(0);
                    list();
                    cout << show(config1.lang, "23prompt1") << endl;
                    int number;
                    cin >> number;
                    if (number > itemlist1.total || number <= 0)
                    {
                        system("cls");
                        cout << show(config1.lang, "error2") << endl;
                        system("pause");
                        break;
                    }
                    int select3 = 114514;
                    int options3[3] = { 1, 2, 0 };
                    while (select3 != 0)
                    {
                        read(0);
                        read(1);
                        system("cls");
                        select3 = input(show(config1.lang, "23menu"), show(config1.lang, "error1"), options3);
                        switch (select3)
                        {
                        case 1:
                        {
                            system("cls");
                            cout << show(config1.lang, "231prompt1") << endl;
                            string name;
                            cin >> name;
                            for (int i = 1; i <= itemlist1.total; i++)
                            {
                                if (name == itemlist1.item[i].name)
                                {
                                    system("cls");
                                    cout << show(config1.lang, "error4") << endl;
                                    system("pause");
                                    goto MENU2;
                                }
                            }
                            itemlist1.item[number].name = name;
                            save(0);
                            goto MENU2;
                        }
                        case 2:
                        {
                            system("cls");
                            cout << show(config1.lang, "232prompt1") << endl;
                            double price;
                            cin >> price;
                            if (price < 0)
                            {
                                system("cls");
                                cout << show(config1.lang, "error2") << endl;
                                system("pause");
                                goto MENU2;
                            }
                            price = floor((price * pow(10, 2))) / pow(10, 2);;
                            itemlist1.item[number].price = price;
                            save(0);
                            goto MENU2;
                        }
                        save(0);
                        goto MENU2;
                        }
                    }
                    goto MENU2;
                }
                case 4:
                {
                    read(0);
                    if (itemlist1.total == 0)
                    {
                        system("cls");
                        cout << show(config1.lang, "noItem") << endl;
                        system("pause");
                        goto MENU2;
                    }
                    system("cls");
                    list();
                    system("pause");
                    goto MENU2;
                }
                case 5:
                {
                    system("cls");
                    read(1);
                    string password;
                    while (password != config1.password)
                    {
                        system("cls");
                        cout << show(config1.lang, "25prompt1") << endl;
                        cin >> password;
                        if (password != config1.password)
                        {
                            system("cls");
                            cout << show(config1.lang, "error3") << endl;
                            system("pause");
                            string password;
                            goto MENU2;
                        }
                    }
                    system("cls");
                    cout << show(config1.lang, "25prompt2") << endl;
                    string newPassword;
                    cin >> newPassword;
                    system("cls");
                    cout << show(config1.lang, "25prompt3") << endl;
                    string confirm;
                    cin >> confirm;
                    if (confirm == newPassword)
                    {
                        config1.password = newPassword;
                        save(1);
                    }
                    else
                    {
                        system("cls");
                        cout << show(config1.lang, "error3") << endl;
                        system("pause");
                        string password;
                        goto MENU2;
                    }
                    goto MENU2;
                }
                }
                goto MENU;
                }
            }
        case 3:
        {
            int select3 = 114514;
            int options3[3] = { 1, 2, 0 };
            while (select3 != 0)
            {
                read(1);
                system("cls");
                select3 = input(show(config1.lang, "3menu"), show(config1.lang, "error1"), options3);
                switch (select3)
                {
                case 1:
                {
                    config1.lang = 1;
                    select3 = 0;
                    save(1);
                    goto MENU;
                }
                case 2:
                {
                    config1.lang = 0;
                    select3 = 0;
                    save(1);
                    goto MENU;
                }
                }
            }
            goto MENU;
        }
        case 4:
        {
            system("cls");
            cout << R"(  ______                       __        __                     
 /      \                     /  |      /  |                    
/$$$$$$  |  ______    _______ $$ |____  $$/   ______    ______  
$$ |  $$/  /      \  /       |$$      \ /  | /      \  /      \ 
$$ |       $$$$$$  |/$$$$$$$/ $$$$$$$  |$$ |/$$$$$$  |/$$$$$$  |
$$ |   __  /    $$ |$$      \ $$ |  $$ |$$ |$$    $$ |$$ |  $$/ 
$$ \__/  |/$$$$$$$ | $$$$$$  |$$ |  $$ |$$ |$$$$$$$$/ $$ |      
$$    $$/ $$    $$ |/     $$/ $$ |  $$ |$$ |$$       |$$ |      
 $$$$$$/   $$$$$$$/ $$$$$$$/  $$/   $$/ $$/  $$$$$$$/ $$/       
                                                                
                                                                
                                                                
                                 __                             
                                /  |                            
  _______  __    __   _______  _$$ |_     ______   _____  ____  
 /       |/  |  /  | /       |/ $$   |   /      \ /     \/    \ 
/$$$$$$$/ $$ |  $$ |/$$$$$$$/ $$$$$$/   /$$$$$$  |$$$$$$ $$$$  |
$$      \ $$ |  $$ |$$      \   $$ | __ $$    $$ |$$ | $$ | $$ |
 $$$$$$  |$$ \__$$ | $$$$$$  |  $$ |/  |$$$$$$$$/ $$ | $$ | $$ |
/     $$/ $$    $$ |/     $$/   $$  $$/ $$       |$$ | $$ | $$ |
$$$$$$$/   $$$$$$$ |$$$$$$$/     $$$$/   $$$$$$$/ $$/  $$/  $$/ 
          /  \__$$ |                                            
          $$    $$/                                             
           $$$$$$/                                              

-----------------------------------------------------------------
Version 1.2.1
Build 7
Time 2024-6-18 UTC-05:00
Author NHCM

Copyright 2024 NHCM. All Rights Reserved.
-----------------------------------------------------------------
)" << endl;
            system("pause");
            select;
            break;
        }
        }
     }
     return 0;
}
