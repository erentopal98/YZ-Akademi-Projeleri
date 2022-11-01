#include<stdio.h>
#include<conio.h>
#include<locale.h> 
#include <ctype.h>

int main (void){
        
        setlocale(LC_ALL,"TURKISH");
 
 	int i,j,k;
 	int count = 0;
 	char a[100];
 	char x[29] = {'a','b','c','ç','d','e','f','g','ð','h','ý','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z'};
 	char y[29] = {'A', 'B', 'C','Ç', 'D', 'E', 'F', 'G','Ð','H', 'I','Ý', 'J', 'K', 'L', 'M', 'N', 'O','Ö', 'P', 'R', 'S', 'Þ','T', 'U','Ü', 'V','Y', 'Z'};
 	
 	printf("Þifrelenecek metni giriniz : ");
 	while((a[k] = getchar())!='\n')
        k++ ;
        
	int arrLenWord = sizeof a / sizeof a[0];
	int arrLenLowerUpper = sizeof x / sizeof x[0];
 			
	for(i=0;i<arrLenWord;i++)
	{
		for(j=0;j<arrLenLowerUpper;j++){
			
			if(a[i]==x[j]) {
				j=j+3;
				j=j % arrLenLowerUpper;
				a[i]=x[j]; 
			break;
			}
			
			else if(a[i]==y[j]) {
				j=j+3;
				j=j % arrLenLowerUpper;
				a[i]=y[j]; 
			break;
			}		
		}		
	}
	 	printf("Þifrelenmiþ mesaj: %s ",a);
        getch();
        return 0;
}


