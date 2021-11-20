#include <iostream>
using namespace std;
int main()
{
	int vize,final,ort;
	cout<<"vize notu girin:";
	cin>>vize;
	cout<<"final notu girin:";
	cin>>final;
	ort=(vize*0.3)+(final*0.7);
	cout<<"ortalama : "<<ort<<endl;
	if(ort<50)
	{
		cout<<"kaldýnýz.";
	}
	else
	{
		cout<<"geçtiniz.";
	}
}
