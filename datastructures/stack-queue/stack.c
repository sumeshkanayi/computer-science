#include <stdio.h>
#include <stdlib.h>

void push();
void traverse();
void search();
void pop();
void traverse();
struct node {
  int data ;
  struct node *next;
};

struct node *HEAD;
struct node *TEMP;
int COUNT=0;

int main(){
  HEAD=NULL;
  printf("Welcome to Stack \n");
   
  push(10);
  push(20);
  push(30);
  push(40);
  push(50);

  traverse();

  search(30);

  pop();
  pop();
  
  traverse();


}

void push(int data){

TEMP=(struct node*)malloc(sizeof(struct node));
TEMP->data=data;
if (HEAD==NULL){

HEAD=TEMP;
HEAD->next=NULL;

}
else{

TEMP->next=HEAD;
HEAD=TEMP;

}

TEMP=HEAD;

}
void traverse(){
  printf("\n Lets traverse the list \n");
while(TEMP != NULL){
  printf("\n Node data is %d \n",TEMP->data);
  TEMP=TEMP->next;
}

printf("\n traversal completed\n");
TEMP=HEAD;


}

void search(int data){

while(TEMP->data != data){
  TEMP=TEMP->next;
  COUNT++;
  if(TEMP == NULL){
    printf("\n Key %d not found \n",data);
    return;
  }
}
printf("\n Found key at position %d",COUNT);
COUNT=0;
TEMP=HEAD;


}
void pop(){
  printf("\n Popping \n");
  TEMP=HEAD;
  printf("\n Popped %d\n",TEMP->data);
  free(HEAD);
  HEAD=TEMP->next;
  TEMP=HEAD;



}