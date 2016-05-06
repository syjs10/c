#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
    struct node {
        int data;
        struct node *link;
    };
    struct node *p = NULL;
    p = (struct node*)malloc(sizeof(struct node));
    struct node *head = p;
    p = (struct node*)malloc(sizeof(struct node));
    head->link = p;
    scanf("%d", &p->data);
    printf("%d\n", head->link->data);
    return 0;
}
