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

void show(Check& object,int number_A, float bal) //создаем функцию, которая принимает структуру, как параметр
{
    object.account_number = number_A;
    object.balance = bal;

    cout << "Ваш счет: " << object.owner_name << "," << "№" << " " << object.account_number << "," << "Баланс:" << " " << object.balance << endl;

}

int main()
{
    setlocale(LC_ALL, "rus");


    Check Andrey_account;

    int number_A{};
    float bal{};
    cout << "Введите номер счета: ";
    cin >> number_A;
    cout << "Введите баланс: ";
    cin >> bal;
    cout << "Введите новый баланс: ";
    cin >> bal;
   
  
    Andrey_account.owner_name = { "Андрей" };
   

    show(Andrey_account, number_A, bal);
  
    return 0;
}