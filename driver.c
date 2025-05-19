#include <stdio.h>
#include "LinkedList.h"

int main(void) {
    printf("Welcome to the Linked List Builder!\n\n");

    struct node *myList = makeList(); // Get list from user input
    printf("\nNow printing your list:\n");
    printList(myList);                // Print the list

    printf("\n All memory successfully freed. Goodbye!\n");
    return 0;
}
