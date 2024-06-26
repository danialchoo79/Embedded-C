#include <stdio.h>
#include <stdint.h>

void wait_for_user_input(void);

int main(void)
{
    int32_t temp_height = 0;  // Temporary signed integer to read user input
    uint32_t height = 0;

    printf("Enter height of pyramid: ");
    fflush(stdout);

    scanf("%d", &temp_height);  // Read input as a signed integer

    if(temp_height < 1)
    {
        printf("Negative values are not allowed.\n");
        fflush(stdout);
    }
    else
    {
        height = (uint32_t)temp_height;  // Cast to unsigned integer
        for(uint32_t i = 1; i <= height; i++)
        {
            for(uint32_t j = i; j > 0; j--)
            {
                printf("%d ", j);
                fflush(stdout);
            }
            printf("\n");
            fflush(stdout);
        }
    }

    wait_for_user_input();

    return 0;
}

void wait_for_user_input(void)
{
    while(getchar() != '\n')
    {
        // just read the input buffer and do nothing
    }
    getchar();
}
