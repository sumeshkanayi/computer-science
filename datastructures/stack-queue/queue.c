#include <stdio.h>
#include <stdlib.h>

void enqueue();
void traverse();
void search();
void dequeue();
void traverse();
struct node {
  int data ;
  struct node *next;
};

struct node *HEAD;
struct node *TEMP;
struct node *REAR;
int COUNT=0;

int main(){
  HEAD=NULL;
  printf("Welcome to Queue \n");
   
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  enqueue(50);

  traverse();

  search(30);

  dequeue();
dequeue();
  
  traverse();


}

void enqueue(int data){

TEMP=(struct node*)malloc(sizeof(struct node));
TEMP->data=data;
if (HEAD==NULL){
TEMP->next=NULL;
HEAD=TEMP;
REAR=TEMP;

}
else{

REAR->next=TEMP;
REAR=TEMP;

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
void dequeue(){

  TEMP=HEAD;
  printf("\n dequed %d\n",TEMP->data);
  free(HEAD);
  HEAD=TEMP->next;
  TEMP=HEAD;



}