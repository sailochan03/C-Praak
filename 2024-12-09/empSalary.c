#include <stdio.h>

int main () {
    int workExMoreThan3Years;
    printf("Work experience more than 3 years ? (1 or 0) : ");
    scanf("%d", &workExMoreThan3Years);

    int qualification;
    printf("\nEnter 0 for graduation or 1 for Post-Graduation : ");
    scanf("%d", &qualification);
    
    float salary = 0;

    switch (qualification) {
    case 0: 
    	 
    	 switch (workExMoreThan3Years) {
    	 	case 0: salary = 40000 + (40000 * 0.25) + (40000 * 0.70); break;
    	 	case 1: salary = (40000 + (40000 * 0.25) + (40000 * 0.70)) + 25000; break;
    	 	default: printf("Enter valid input");
    	 }
    	 
         break;
         
    case 1: 
    
    	switch (workExMoreThan3Years) {
    	 	case 0: salary = 50000 + (50000 * 0.40) + (50000 * 0.90); break;
    	 	case 1: salary = (50000 + (50000 * 0.40) + (50000 * 0.90)) + 25000; break;
    	 	printf("Enter valid input");
    	 }
    	 
         break;
    	
    
    default: printf("Enter valid input.");
        break;
    }
    
    printf("\nSalary is : Rs.%.2f\n\n\n", salary);
    
    return 0;
}
