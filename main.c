#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
  struct node *b;
  for(int i = 0; i < 10; i++){
    b = insert_front(b, i);
    print_list(b);
  }
  print_list(free_list(b));
  print_list(b);
}
