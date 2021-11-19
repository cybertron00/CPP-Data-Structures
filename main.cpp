#include <stdio.h>

int main() {

    int option;
    char choice;

    while(1)
    {
        printf("\nPress 1 for Basic Coco Model ");
        printf("\nPress 2 for Intermediate Coco Model ");
        printf("\nPress 3 for Detail Coco Model \n");
        scanf("%d", &option);

        printf("\nYou have entered: %d", option);
        printf("\nEnter y for confirm or n for retry: ");
        scanf(" %c", &choice);
        if (choice == 'y')
            break;
        //printf("\n");
    }

    printf("Your entered choice is: %d", option);

    return 0;
}