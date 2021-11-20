#include <iostream>
using namespace std;
int main()
{
	cout<<"* toplam icin + kullaniniz *"<<endl;
	cout<<"* cikartma icin - kullaniniz *"<<endl;
	cout<<"* carpma icin * kullaniniz *"<<endl;
	cout<<"* bolme icin / kullaniniz *"<<endl;
	cout<<"****************************"<<endl;
	cout<<endl;
	
	double sayi1,sayi2,sonuc;
	char islem;
	
	cout<<"birinci sayiyi giriniz";
	cin>>sayi1;
	cout<<endl;
	cout<<"islem giriniz:";
	cin>>islem;
	cout<<endl;
	cout<<"ikinci sayiyi giriniz:";
	cin>>sayi2;
	cout<<endl;
	
	switch (islem)
	{
		case '+':
			sonuc = (sayi1+sayi2);
			cout<<"toplamýnýn sonucu"<<sonuc<<endl;break;
		case '-':
			sonuc = (sayi1-sayi2);
			cout<<"toplamýnýn sonucu"<<sonuc<<endl;break;
		case '*':
			sonuc = (sayi1*sayi2);
			cout<<"toplamýnýn sonucu"<<sonuc<<endl;break;
		case '/':
			sonuc = (sayi1/sayi2);
			cout<<"toplamýnýn sonucu"<<sonuc<<endl;break;
	}
}
