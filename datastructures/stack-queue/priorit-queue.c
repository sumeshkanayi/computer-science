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
  int priority;
};

struct node *HEAD;
struct node *TEMP;
struct node *TEMPR;
struct node *REAR;
struct node *CURRENT;
struct node *PREVIOUS;
int COUNT=0;

int main(){
  HEAD=NULL;
  printf("Welcome to Queue \n");
    enqueue(0,0);
  enqueue(60,60);
  enqueue(20000,20000);
   enqueue(50000,50000);
    enqueue(50,50);
 
   
 enqueue(3000,3000);

  
 
   
 
 



  //traverse();

  //search(30);

  //dequeue();
//dequeue();
  
 traverse();

free(HEAD);
free(TEMP);
free(CURRENT);
free(PREVIOUS);
free(TEMP);
}

void enqueue(int data,int priority){
 // printf("\n Enquing %d %d \n",data,priority);


//PRIORITY_TEMP;
TEMP=(struct node*)malloc(sizeof(struct node));
TEMP->data=data;
TEMP->priority=priority;
TEMP->next=NULL;
if (HEAD==NULL){


HEAD=TEMP;
CURRENT=HEAD;
PREVIOUS=CURRENT;



//traverse();

printf("\n Head is NULL Current HEAD %d \n",HEAD->data);

}
else{


if (priority > HEAD->priority){
printf("\n First scenario \n");

TEMP->next=HEAD;

HEAD=TEMP;
CURRENT=HEAD;
//printf("Head %d HEAD Nexts %s",HEAD->priority,HEAD->next->);




traverse();


}
else{

CURRENT=HEAD;
printf(" \n inside this loop %d \n",priority);
printf("\n CURRENT priority: %d %d \n ",CURRENT->priority,HEAD->priority);





 while (CURRENT != NULL ) {
   if(CURRENT->priority > priority){
            PREVIOUS= CURRENT;  
            CURRENT = CURRENT->next;
   }
   else{
     TEMP->next=CURRENT;
     break;
   }
   
   
        } 
  printf("Out of while");
   
  
   PREVIOUS->next=TEMP; 



}


}

TEMP=HEAD;

}
void traverse(){
  TEMPR=HEAD;
  printf("\n Lets traverse the list \n");
while(TEMPR != NULL){
  printf("\n Node data is %d \n",TEMPR->data);
  TEMPR=TEMPR->next;
}

printf("\n traversal completed\n");
TEMPR=HEAD;


}

void search(int data){

while(TEMP->data != data){
  TEMP=TEMP->next;
  COUNT++;
  if(TEMP == NULL){
    printf("\n Key %d not found \n",data);
   
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