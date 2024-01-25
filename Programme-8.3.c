#include<stdio.h>

main()

{
	// Quastion-3 :- 
	
	int a;
	
	printf("Enter Your Percentage : ");
	
	scanf("%d" , &a);
	
	if ( a > 90){
		
		printf("Your Grade is A+");
	}			
	else if( a > 80 ){
		
		printf("Your Grade is A");
	}
	else if( a > 70 ){
		
		printf("Your Grade is B+");
	}		
	else if( a > 60 ){
		
		printf("Your Grade is B");
	}
	else if( a > 50 ){
		
		printf("Your Grade is C");
	}
	else if( a > 40 ){
		
		printf("Your Grade is D");
	}
	else if( a > 33 ){
		
		printf("Your Grade is F");
	}	
	
	else{
		printf(" You're Fail ");
	}

}

