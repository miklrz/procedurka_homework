#include <iostream>
using namespace std;

int main() {
	// N �������� | A + B * N ��� | �� ����� ���� ���� > C ������
	setlocale(LC_ALL, "rus");
	int A; cout << "������� ��������� ��������� ��������: "; if (!(cin >> A)) { cout << "������� ���������� ������!"; return 0; }
	int B; cout << "������� ��������� ����� �������: "; if (!(cin >> B)) { cout << "������� ���������� ������!"; return 0; }
	int C; cout << "������� ������������ ��������� ����� ��������: "; if (!(cin >> C)) { cout << "������� ���������� ������!"; return 0; }
	int max_N;
	for (int N = 1; N < 1000; N++) {
		int price = A + B * N;
		if (price <= C) {
			max_N = N;
		}
		else {
			break;
		}
	}
	cout <<"������������ ����� �������� ��������: "  << max_N;
	return 0;
}