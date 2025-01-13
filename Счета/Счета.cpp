// Счета.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

//struct date //создаем еще одну структуру, чтобы вложить ее в структуру building // дата постройки
//{
 //   char* month; // Месяц постройки дома
  //  int year; // Год
//};

struct Check
{
    int account_number; // номер счета
    string owner_name;// имя владельца
    float balance;// баланс счета

};

void show(Check& Andrey_account) //создаем функцию, которая принимает структуру, как параметр
{
    cout << "Ваш счет: " << Andrey_account.owner_name << "," << "№" << " " << Andrey_account.account_number << "," << "Баланс:" << " " << Andrey_account.balance << endl;

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
    // string name{ "Андрей"};
    Andrey_account.account_number = number_A;
    Andrey_account.owner_name = { "Андрей" };
    Andrey_account.balance = bal;

    show(Andrey_account);

    return 0;
}