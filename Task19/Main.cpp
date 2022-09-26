// ������ ������ � ������� ������������� �������
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>
using namespace std;

// ������ 1 ���������� ����� ��������

void nod(int num1, int num2) {
	while (num1 != num2)
		if (num1 > num2)
			num1 -= num2;
		else
			num2 -= num1;
	cout << num1 << endl;
}

// ������ 2 �������

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

// ������ 3 ���������� � n-�� ��������

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

// ������ 4

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

	// ������ 1 ���������� ����� ��������
	cout << "������� ��� �����: ";
	cin >> n >> m;
	cout << "\n��� �����: ";
	nod(n, m);

	// ������ 2 �������
	cout << "\n������� ����� �� ����� ������� ��������: ";
	cin >> n;
	cout << "\n���������� ��������� �����: ";
	cout << miror_namber(n) << "\n";

	// ������ 3 ����������

	cout << "��������� �������\n";
	const int size = 10;
	int arr[size]{ 2, 15, 9, 7, 1, 12, 3, 5, 10, 4 }; 
	begin_func(arr, size);
	cout << "\n����� �������� � �������\n";
	index(arr, size, 7);
	cout << "�������� �������\n";
	begin_func(arr, size);

	// ������ 4

	const int size1 = 10;
	int arr1[size1];
	cout << "\n������� ������ ���������: ";
	cin >> n;
	cout << "\n������� ����� ���������: ";
	cin >> m;
	fill_arr1(arr1, size1, n, m);
	cout << "�������� ������:\n";
	show_arr1(arr1, size1);
	return 0;
}