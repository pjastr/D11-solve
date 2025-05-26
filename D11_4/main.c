#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

void printEven(struct node * list){
    struct node * ptr = list;
    int counter = 0;
    while(ptr != NULL){
        if (counter %2 ==0){
            printf("%d\n", ptr->i);
        }
        ptr = ptr->next;
        counter++;
    }
}

int main()
{
    struct node * list = malloc(sizeof(struct node));
    list->i = 4;
    list->next = malloc(sizeof(struct node));
    list->next->i = -5;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->i = 3;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->i = 0;
    list->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->i = 11;
    list->next->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->next->i =-8;
    list->next->next->next->next->next->next = NULL;
    printEven(list);
    return 0;
}
