#include <iostream>
#include <windows.h>

struct bankData {
	int number;
	std::string Name;
	float balance;
};

void changeBalance(bankData* data, float balance) {
	data -> balance = balance;
}

int main() {
	bankData data;
	float newBalance;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите номер счета: ";
	std::cin >> data.number;
	std::cout << std::endl;

	std::cout << "Введите имя владельца: ";
	std::cin >> data.Name;
	std::cout << std::endl;

	std::cout << "Введите баланс: ";
	std::cin >> data.balance;
	std::cout << std::endl;

	std::cout << "Введите новый баланс: ";
	std::cin >> newBalance;

	changeBalance(&data, newBalance);

	std::cout << "Ваш счёт: " << data.Name << ", " << data.number << ", " << data.balance << std::endl;
}