#include <iostream>
using namespace std;
int main()
{
	int sayi;
	cout<<"lutfen 1-7 arasında sayi giriniz:";
	cin>>sayi;
	switch (sayi)
	{
		case 1: cout << "pazartesi" << endl; break;
		case 2: cout << "salı" << endl; break;
		case 3: cout << "carsamba" << endl; break;
		case 4: cout << "persembe" << endl; break;
		case 5: cout << "cuma" << endl; break;
		case 6: cout << "cumartesi" << endl; break;
		case 7: cout << "pazar" << endl; break;
		default : cout<<"girilen sati 1-7 arasında degil"<<endl;break;
}
system("pause");
return 0;
}
