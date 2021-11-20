#include <iostream>
using namespace std;
int main()
{
	int dizi[5], i,toplam=0; float ort;
	
	for(i=0;i<5;i++){
		printf("%d notu girin:", i+1);
		scanf("%d",&dizi[i]);
		toplam += dizi[i];
	}
	
	ort = toplam /5.0;
	printf("\n ortlama = %f",ort);
	
	
	for(int i=1;i<=5;i++)
   {
	toplam=toplam;
   }
   cout<<"Girilen 5 sayinin toplami : "<<toplam;
}
