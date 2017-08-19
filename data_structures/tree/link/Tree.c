#include <stdio.h>
#include <stdlib.h>
typedef struct treeNode *ptrToNode;

struct treeNode {
	int num;
	ptrToNode left;
	ptrToNode right;
};
ptrToNode newNode (int num) {
	ptrToNode temp = malloc(sizeof(struct treeNode));
	temp->num   = num;
	temp->left  = NULL;
	temp->right = NULL;
	return temp;
}

int main () {
	ptrToNode test = newNode(5);
	printf("%d\n", test->num);
	return 0;
}
