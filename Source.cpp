#include <iostream>
#include <array>
#include <ctime>
using namespace std;
void create(array<int, 100>& arr, int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}

void print(array<int, 100> arr, int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int max(array<int, 100> arr, int n)
{
	int pos = 0;
	for (int i = 1; i < n; i++) {
		if (arr[pos] < arr[i]) {
			pos = i;
		}
	}
	return pos;
}

int min(array<int, 100> arr, int n)
{
	int pos = 0;
	for (int i = 1; i < n; i++) {
		if (arr[pos] > arr[i]) {
			pos = i;
		}
	}
	return pos;
}

double avg(array<int, 100> arr, int n)
{
	return arr[min(arr, n)] + arr[max(arr, n)] / 2;
}
int main()
{
	srand((unsigned int)time(NULL));
	int n;
	cout << "n = ? "; cin >> n;
	array<int, 100> arr = { 0 };
	create(arr, n);
	print(arr, n);
	cout << "AVG of the biggest and the smallest = " << avg(arr, n) << endl;
	return 0;
}