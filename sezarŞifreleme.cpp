#include<stdio.h>
#include<conio.h>
#include<locale.h> 
#include <ctype.h>

int main (void){
        
        setlocale(LC_ALL,"TURKISH");
 
 	int i,j,k;
 	int count = 0;
 	char a[100];
 	char x[29] = {'a','b','c','�','d','e','f','g','�','h','�','i','j','k','l','m','n','o','�','p','r','s','�','t','u','�','v','y','z'};
 	char y[29] = {'A', 'B', 'C','�', 'D', 'E', 'F', 'G','�','H', 'I','�', 'J', 'K', 'L', 'M', 'N', 'O','�', 'P', 'R', 'S', '�','T', 'U','�', 'V','Y', 'Z'};
 	
 	printf("�ifrelenecek metni giriniz : ");
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
	 	printf("�ifrelenmi� mesaj: %s ",a);
        getch();
        return 0;
}


