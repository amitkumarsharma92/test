#include<stdio.h>
#include<malloc.h>

typedef struct llist {
	int value;
	struct llist *next;
} llist;

llist* get_list(){
	llist *temp;
	llist *head =NULL;
	llist *prev =NULL;
	int a[] = {100, 34, 68, 23, 75, 66};
	int i;
	for (i = 0 ; i < 6 ; i++){
		temp = (llist*)malloc(sizeof(llist));
		temp->value = a[i];
		printf("\npicking %d .", a[i]);
		temp->next = NULL;
		
		if (head == NULL){
			head = temp;
			prev = temp;
		}else{
			prev->next = temp;
			printf("\nThe previous is %d.", prev->value);
			prev = prev->next;
		}
	}
	return head;
}

void main(){
	llist *list = get_list();
	printf("\nGot all values\n Print them:-\n");
	while (list != NULL){
		printf("%d ", list->value);
		list = list->next;
	}
}
