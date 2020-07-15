#include <stdio.h>
#include <stdlib.h>

void insert();
void traverse();
void search();
void delete();
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
  printf("Welcome to linked list \n");
   
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  insert(50);

  traverse();

  search(30);

  delete(40);
  
  traverse();


}

void insert(int data){

TEMP=(struct node*)malloc(sizeof(struct node));
TEMP->data=data;
if (HEAD==NULL){

HEAD=TEMP;

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
void delete(int data){
  printf("\n Deleting %d \n",data);
struct node *PREVIOUS;
while(TEMP->data != data){
  PREVIOUS=TEMP;
  TEMP=TEMP->next;
  

  COUNT++;
  if(TEMP == NULL){
    printf("\n Key %d not found \n",data);
    return;
  }
}
PREVIOUS->next=TEMP->next;
free(TEMP);
TEMP=HEAD;
PREVIOUS=TEMP;


}