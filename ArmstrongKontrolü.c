#include <stdio.h>
#include <conio.h> 
#include<locale.h> 

int main(){
	
	//t�rk�e karakterlerin tam okunabilmesi i�in locale.h k�t�phanesini kulland�k
	setlocale(LC_ALL, "Turkish");
    int num,check,sum=0,digit;
    printf("Armstrong Kontrol�\n");
    printf("Say� giriniz : ");
    scanf("%d", &num);
    printf("Girilen say� = %d\n",num);
    
    //numaram�z haf�zada tutulurken check de�i�keninini al�nan numaraya e�itleyip basamaklar�n k�p�n� tek tek hesaplamak i�in kullanaca��z
    check=num;
    
    //basamak say�m�z� ��reniyoruz
    int times=0;
    while(check!=0){
    	check=check/10;
    	times++;
    	
	}
	
	//tekrar say�m�z� kullanmak i�in check de�i�kenine e�itledik
	check=num;
    
    //say�m�z 0'dan b�y�k oldu�u s�rece t�m basamaklara tek tek ula��lacak
    while(check >0 ) {
    	//basamakta say�y� ��renmek i�in elimizdeki say�n�n 10 ile b�l�m�nden kalan� hesapl�yoruz
    	digit = check % 10; 
    	//her hesaptan sonra bunu toplama ekleyerek rakamlar�n k�pleri toplam�na ula��yoruz
    	sum=sum+pow(digit,times);
    	//yeni say�m�z art�k sondaki basama�� atm�� say� olmal�d�r. Bunun i�in 10'a tam b�l�m�n�n sonucunu buluyoruz
    	check=check / 10;
	}
	
	//armstrong say� olup olmad���n� kontrol ediyoruz.
	if(num == sum) {
		printf("Girilen say� Armstrongdur. ");
	}
	else
		printf("Grililen say� Armstrong de�ildir. ");
	
    
}

