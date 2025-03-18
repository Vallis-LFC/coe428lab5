#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int  pop();
extern void push(int);
extern int isEmpty();

int main(int argc, char * argv[])
{
  int ch;
  int prev;
  while ((ch = getchar()) != EOF) {
    printf("here");
    if(ch == '<' || ch == '/'){
      prev = ch;
    }
    else if(isalpha(ch)){
      if(prev != '/'){
        push(ch);
      }
      else if(pop()!=ch){
        printf("NOT valid");
        exit(1);
      }
    }

  }
  printf("here");
  if(isEmpty()>0){
    printf("not valid");
    exit(1);
  }
  else
    printf("valid");
  
  exit(0);
}