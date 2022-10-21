#include <iostream>
#include <string.h>



using namespace std;


int num = -2;
bool key = false;


void CoffeeCook() {
	cout << "Ваш кофе " << num << " имеет статус готовки " << key << endl;
}


void NumChecker() {
    while (num > 3 || num < 0) {
        cout << "Введите номер кофе: ";
        cin >> num;
    }
}


int InsertMoney() {
    int Nal=0;
    int Sum=0;
    while (Sum<60) {
        cout << "Введите бабло: ";
        cin >> Nal;
        Sum += Nal;
        if (Sum < 60)
            cout << "Вам не хватает: " << 60 - Sum << endl;
    }
    return Sum;
}

void Payment() {
     int Nal;
     Nal = InsertMoney();
     cout<< "Ваша сдача: " << Nal - 60 << endl;
     key = true;
}


void BuyCoffee() {
    NumChecker();
    Payment();
    CoffeeCook();
}


int main()
{
    setlocale(LC_ALL, "Russian");

    BuyCoffee();

    return 0;
}