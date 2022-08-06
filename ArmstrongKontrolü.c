#include <stdio.h>
#include <conio.h> 
#include<locale.h> 

int main(){
	
	//türkçe karakterlerin tam okunabilmesi için locale.h kütüphanesini kullandýk
	setlocale(LC_ALL, "Turkish");
    int num,check,sum=0,digit;
    printf("Armstrong Kontrolü\n");
    printf("Sayý giriniz : ");
    scanf("%d", &num);
    printf("Girilen sayý = %d\n",num);
    
    //numaramýz hafýzada tutulurken check deðiþkeninini alýnan numaraya eþitleyip basamaklarýn küpünü tek tek hesaplamak için kullanacaðýz
    check=num;
    
    //basamak sayýmýzý öðreniyoruz
    int times=0;
    while(check!=0){
    	check=check/10;
    	times++;
    	
	}
	
	//tekrar sayýmýzý kullanmak için check deðiþkenine eþitledik
	check=num;
    
    //sayýmýz 0'dan büyük olduðu sürece tüm basamaklara tek tek ulaþýlacak
    while(check >0 ) {
    	//basamakta sayýyý öðrenmek için elimizdeki sayýnýn 10 ile bölümünden kalaný hesaplýyoruz
    	digit = check % 10; 
    	//her hesaptan sonra bunu toplama ekleyerek rakamlarýn küpleri toplamýna ulaþýyoruz
    	sum=sum+pow(digit,times);
    	//yeni sayýmýz artýk sondaki basamaðý atmýþ sayý olmalýdýr. Bunun için 10'a tam bölümünün sonucunu buluyoruz
    	check=check / 10;
	}
	
	//armstrong sayý olup olmadýðýný kontrol ediyoruz.
	if(num == sum) {
		printf("Girilen sayý Armstrongdur. ");
	}
	else
		printf("Grililen sayý Armstrong deðildir. ");
	
    
}

