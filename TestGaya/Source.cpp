#include <iostream>
#include <string.h>



using namespace std;


int num = -2;
bool key = false;


void CoffeeCook() {
	cout << "��� ���� " << num << " ����� ������ ������� " << key << endl;
}


void NumChecker() {
    while (num > 3 || num < 0) {
        cout << "������� ����� ����: ";
        cin >> num;
    }
}


int InsertMoney() {
    int Nal=0;
    int Sum=0;
    while (Sum<60) {
        cout << "������� �����: ";
        cin >> Nal;
        Sum += Nal;
        if (Sum < 60)
            cout << "��� �� �������: " << 60 - Sum << endl;
    }
    return Sum;
}

void Payment() {
     int Nal;
     Nal = InsertMoney();
     cout<< "���� �����: " << Nal - 60 << endl;
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