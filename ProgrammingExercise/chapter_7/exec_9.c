#include <stdio.h>
#include <stdbool.h>
void flush_input_buffer();
int main(void)
{
	bool prime_flag;
	int limit;

	printf("Primes: this program prints all primes less than or equal to any positive integer.\n");
	printf("Enter a positive integer: \n");
	while(scanf("%d",&limit) != 1 || limit < 1)
    {
        flush_input_buffer();
        printf("Enter a positive integer: \n");
    }
    for(int i=2;i<=limit;i++)
    {
        prime_flag = true;
        for(int j=2;j<i;j++) // for all j less than i ...
        {
            if (i % j ==0) // if i is divisible by j ...
            {
                prime_flag = false;// then i is not prime
                break;// break out of inner loop
            }
        }
        if(prime_flag)
            printf("%d is prime.\n", i);
    }
}
void flush_input_buffer()
{
    while(getchar() != '\n')
        ;
}
