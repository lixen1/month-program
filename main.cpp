#include <iostream>
#include <string>
using namespace std;

int main()
	{
		setlocale(LC_ALL, "rus");
		int a,b;
		cin>>b;
		if(b>12 || b<=0){
		cout << "������. ����� �� ����� ���� ������ 12 ��� ������ ��� ����� ����.";
	}
		else {
			if (b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12){
				cin >> a;
			}
			if (a==31){
				cout << "������";
			}
			else {
				cout << "������. � ���� ������ 31 ����.";
				
			}
		}
		if (b==4 || b==6 || b==9 || b==11){
			cin >> a;
		}
		if (a==30){
			cout << "������";
		}
		else {
			cout << "������. � ���� ������ 30 ����.";
		}
		if (b==2){
		cin >> a;
	}
	if (a==28)
	cout << "������";
	else {
		cout << "������. � ���� ������ 28 ����.";
	}
		return 0;
	}
