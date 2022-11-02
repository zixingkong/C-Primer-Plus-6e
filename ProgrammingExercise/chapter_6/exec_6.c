#include <stdio.h>
int main(void)
{
    long upper = -1,lower = 0;
    int reads;

	printf("This program prints a table of integers with their "
		   "squares and cubes.\n");
    do
    {
        printf("Enter the lower and upper :");
        reads = scanf("%ld %ld",&lower,&upper);
        if(2 != reads)
        {
            while((getchar()) != '\n');// if read fails, clear input buffer
        }
    }while(lower > upper);
    printf("\n");
    	// table header
	printf(" Integer       | Square        | Cube          \n");
	printf("---------------|---------------|---------------\n");
	for(long int i=lower;i<=upper;i++)
    {
        printf(" %-14ld| %-14ld| %-14ld\n",i,i*i,i*i*i);
    }
    printf("\n");
    return 0;
}
