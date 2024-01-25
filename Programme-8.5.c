#include<stdio.h>

main()

{
	// Quastion - 5 :- 
	
	int choice ,a;
	
	printf("Press 1 For January \n");
	printf("Press 2 For Febuary\n");
	printf("Press 3 for March\n");
	printf("Press 4 for April\n");
	printf("Press 5 for May\n");
	printf("Press 6 for June\n");
	printf("Press 7 for July\n");
	printf("Press 8 for August\n");
	printf("Press 9 for September\n");
	printf("Press 10 for Octomber\n");
	printf("Press 11 for November\n");
	printf("Press 12 for December\n\n");
	

	printf("Enter your choice : ");
	scanf("%d",&choice);
	
	
	switch(choice){
		
		case 1 : printf("\n\t [January]\n");
			break;
		
		case 2 : printf("\n\t [Febuary]\n");
			break;
				
		case 3: printf("\n\t [March]\n");
			break;
			
		case 4: printf("\n\t [April]\n");
			break;
			
		case 5: printf("\n\t [May]\n");
			break;
			
		case 6: printf("\n\t [June]\n");
			break;
			
		case 7: printf("\n\t [July]\n");
			break;
			
		case 8: printf("\n\t [August]\n");
			break;
			
		case 9: printf("\n\t [September]\n");
			break;
			
		case 10: printf("\n\t [October]\n");
			break;
			
		case 11: printf("\n\t [November]\n");
			break;
			
		case 12: printf("\n\t [December]\n");
			break;
			
		default : 
			printf("\nPlease Enter The Valid Number : ");
		
	}
	
}
