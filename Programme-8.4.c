#include<stdio.h>

main()

{
	
	// Quastion - 4 :- 
	
	int choice ,a;
	
	printf("Press 1 For Sunday\n");
	printf("Press 2 For Monday\n");
	printf("Press 3 for Tuesday\n");
	printf("Press 4 for Wednesday\n");
	printf("Press 5 for Thursday\n");
	printf("Press 6 for Friday\n");
	printf("Press 7 for Saturday\n\n\n");


	printf("Enter your choice : ");
	scanf("%d" ,&choice);
	
switch(choice){
		
		case 1 : printf("\n [Sunday : 1st Day Of Week ]\n");
			break;
		
		case 2 : printf("\n [Monday : 2nd Day Of Week]\n");
			break;
				
		case 3: printf("\n [Tuesday : 3rd Day Of Week]\n");
			break;
			
		case 4: printf("\n [Wednesday : 4th Day Of Week]\n");
			break;
			
		case 5: printf("\n [Thursday : 5th Day Of Week]\n");
			break;
			
		case 6: printf("\n [Friday : 6th Day Of Week]\n");
			break;
			
		case 7: printf("\n [Saturday : 7th Day Of Week]\n");
			break;
		
		default : 
			printf("\n Enter The Valid No. Of Week : ");	
			
	}
	
}
