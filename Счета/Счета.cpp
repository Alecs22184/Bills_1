// Счета.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;


struct Check
{
    int account_number; // номер счета
    string owner_name;// имя владельца
    float balance;// баланс счета

};

void show(Check& object,int &number_A, float& bal, string& name) // функцию, которая меняет счет и баланс и имя владельца
{
    object.account_number = number_A;
    object.balance = bal;
    object.owner_name = name;

}

void showPrint(Check& object) //создаем функцию, которая выводит состояние счета на экран
{
   

    cout << "Ваш счет: " << object.owner_name << "," << "№" << " " << object.account_number << "," << "Баланс:" << " " << object.balance << endl;

}

int main()
{
    setlocale(LC_ALL, "rus");


    Check Andrey_account;

    int number_A{};
    float bal{};
    string name{};
   
    cout << "Введите номер счета: ";
    cin >> number_A;
    
    cout << "Введите имя владельца: ";
    cin >> name;
    
    cout << "Введите баланс: ";
    cin >> bal;
    show(Andrey_account, number_A, bal,name);
    showPrint(Andrey_account);
   
    cout << "Введите новый баланс: ";
    cin >> bal;
    show(Andrey_account, number_A, bal, name);
    showPrint(Andrey_account);
    return 0;
}