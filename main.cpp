#include <iostream>
#include <string>
using namespace std;

int main()
	{
		setlocale(LC_ALL, "rus");
		int a,b;
		cin>>b;
		if(b>12 || b<=0){
		cout << "Ошибка. Месяц не может быть больше 12 или меньше или равен нулю.";
	}
		else {
			if (b==1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12){
				cin >> a;
			}
			if (a==31){
				cout << "Правда";
			}
			else {
				cout << "Ошибка. В этом месяце 31 день.";
				
			}
		}
		if (b==4 || b==6 || b==9 || b==11){
			cin >> a;
		}
		if (a==30){
			cout << "Правда";
		}
		else {
			cout << "Ошибка. В этом месяце 30 дней.";
		}
		if (b==2){
		cin >> a;
	}
	if (a==28)
	cout << "Правда";
	else {
		cout << "Ошибка. В этом месяце 28 дней.";
	}
		return 0;
	}
