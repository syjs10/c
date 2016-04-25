#include <stdio.h>
#include <stdlib.h>
//定义结构体
struct node {
    int num;
    struct node *next;
};
struct node *creat(struct node *head);
void print(struct node *head);
int main(int argc, char const *argv[]) {
    struct node *head;
    head = NULL;
    head = creat(head);
    print(head);
    return 0;
}
//延长链表长度
struct node *creat(struct node *head) {
    int i = 1;
    struct node *p1, *p2;
    p1 = p2 = (struct node*)malloc(sizeof(struct node));
    printf("Please input a number bigger than 0, p%d_address is %p\n", i, p1);
    scanf ("%d", &p1->num);
    p1->next = NULL;
    while (p1->num > 0){
        if (head == NULL){
            head = p1;//表头地址为空
        }else{
            p2->next = p1;//表头非空
        }
        p2 = p1;
        p1 = (struct node*)malloc(sizeof(struct node));
        i++;
        printf("Please input a number bigger than 0, p%d_address is %p\n", i, p2);
        scanf("%d", &p1->num);
    }
    free(p1);//释放未赋值的指针
    p1 = NULL;
    p2->next = NULL;//把结尾链表赋值为空
    printf(" input END\n");
    return head;
}
// 打印链表
void print(struct node *head) {
    struct node *temp;
    temp = head;
    printf("\nThe value is :\n");
    while (temp != NULL) {
        printf("%d\n", temp->num);
        struct node *p;
        p = temp;
        temp = temp->next;
        free(p);
    }
    printf("Over\n");
}
