#include<iostream>
using namespace std;

int main() {

	// 3 ��� 4 �������
	// M �������� � �������������� ����� ��������� 
	// ������������ ��� M ��������
	// ����� �� �������
	
	setlocale(LC_ALL, "rus");
	int M; cout << "������� ���������� ��������: "; if (!(cin >> M)) { cout << "������� ���������� ������!"; return 0; }
	int three = 0, four = 0;
	while (M / 3 != 0) {
		M -= 3; three += 1;
		if (M >= 4) {
			M -= 4; four += 1;
		}
	}
	cout << three << endl << four;
}