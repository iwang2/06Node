#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//probably have to malloc stuff for this 
struct node* insert_front(struct node *n, int num){
  struct node *new;
  new = (struct node *)malloc(sizeof(struct node));
  new->i = num;
  new->next = n;
  return new; 
}

struct node * free_list(struct node *n){
  struct node * temp;
  while(n){
    temp = n->next;
    free(n);
    n = temp; 
  }
  return temp;
}

void print_list(struct node *n){
  while(n){
    printf("%d ", n->i);
    n = n->next;
  }
  printf("\n");
}
