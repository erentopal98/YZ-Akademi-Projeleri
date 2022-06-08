import java.util.Scanner;

public class Homework1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a []= new int [3];
		int b []= new int[3];
		
		// First of all, user a will enter the number values.
		
		Scanner input=new Scanner(System.in);
		

		// User a will enter 3 integers between 1 and 100.
		
		for(int i=0; i<a.length; i++) {
			a[i]=input.nextInt();
			
			if(a[i]<1 || a[i]>100) {
				while(a[i]<1 || a[i]>100) {
					System.out.print("Please only enter a value between 1 and 100");
					a[i]=input.nextInt();
					
				}				
			}			
		}	
		
		// User b will enter 3 integers between 1 and 100.
		for(int i=0; i<b.length; i++) {
			System.out.print("");
			b[i]=input.nextInt();
			
			
			if(b[i]<1 || b[i]>100) {
				while(b[i]<1 || b[i]>100) {
					System.out.print("Please only enter integer value between 1 and 100");
					b[i]=input.nextInt();
					
				}				
			}			
		}	
		
		// Now let's compare the values of two different users and find the winner...
		int scoreA=0;
		int scoreB=0;
		
		for(int i=0; i<a.length; i++) {
				if(a[i] > b[i]) {
					scoreA++;
				}
				else if(a[i] < b[i]) {
					scoreB++;
				}		
		}
		
		System.out.println(scoreA + " " + scoreB);

	}

}
