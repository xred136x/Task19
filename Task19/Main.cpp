// проэкт создан с помощью персонального шаблона
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>
using namespace std;

// Задача 1 наибольший общий делитель

void nod(int num1, int num2) {
	while (num1 != num2)
		if (num1 > num2)
			num1 -= num2;
		else
			num2 -= num1;
	cout << num1 << endl;
}

// Задача 2 зеркало

int miror_namber(int num) {
	if (num / 10 == 0)
		return num;
	 if (num / 100 == 0)
		 return (num % 10) * 10 + num / 10;
	 if (num / 1000 == 0)
		 return (num % 10) * 100 + (num / 10 % 10) * 10 + num / 100;
	 if (num / 10000 == 0)
		 return (num % 10) * 1000 + (num / 10 % 10) * 100 + (num / 100 % 10) * 10 + num / 1000;
}

// Задача 3 Сортировка с n-го элемента

void begin_func(int arr[], const int len) {
	for (int i = 0; i < len; i++)
		cout << arr[i] << " ";
}

void index(int arr[], const int len, int num) {
	int ind = 0;
	for (int i = 0; i < len; i++) 
		if (arr[i] == num) {
			ind = i;
			cout << ind << "\n";
			break;
		}
		sort(arr + ind + 1, arr + len);
		
}

// Задача 4

void fill_arr1(int arr1[], const int len, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < len; i++)
		arr1[i] = rand() % (end - begin) + begin;
}

void show_arr1(int arr1[], const int len) {
	for (int i = 0; i < len; i++)
		cout << arr1[i] << ", ";
	cout << "\b\b\n";
}
int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Задача 1 наибольший общий делитель
	cout << "Введите два числа: ";
	cin >> n >> m;
	cout << "\nНОД равен: ";
	nod(n, m);

	// Задача 2 зеркало
	cout << "\nВведите число не более четырех разрядов: ";
	cin >> n;
	cout << "\nЗеркальное отражение числа: ";
	cout << miror_namber(n) << "\n";

	// Задача 3 сортировка

	cout << "Начальная функция\n";
	const int size = 10;
	int arr[size]{ 2, 15, 9, 7, 1, 12, 3, 5, 10, 4 }; 
	begin_func(arr, size);
	cout << "\nНомер элемента в функции\n";
	index(arr, size, 7);
	cout << "Конечная функция\n";
	begin_func(arr, size);

	// Задача 4

	const int size1 = 10;
	int arr1[size1];
	cout << "\nВведите начало диапазона: ";
	cin >> n;
	cout << "\nВведите конец диапазона: ";
	cin >> m;
	fill_arr1(arr1, size1, n, m);
	cout << "итоговый массив:\n";
	show_arr1(arr1, size1);
	return 0;
}