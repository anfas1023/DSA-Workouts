#include<conio.h>
#include<stdio.h>
struct node {
 int data;
 struct node*next;
 struct node*prev;
}

*head=NULL,*temp=NULL,*prev=NULL,*newNode=NULL;
void insert();
void deleteNode();
void display();
void createNode();
void main(){
int ch,i;
clrscr();
while(1){
 printf("\n 1.Insert,\n 2. Delete,\n 3.Display,\n 4.Exit");
 printf("\n Enter The choice");
 scanf("%d",&ch);

 switch(ch){
 case 1 :
 insert();
 break;


 case 2:
 deleteNode();
 break;

 case 3:
 display();
 break;

 case 4:
 exit(0);



 default:
 printf("Enter a valid choice");
 break;

 }
}
}



void insert(){
 if(head==NULL){
  createNode();
  head=newNode;
 }else{
  createNode();
  head->prev=newNode;
  newNode->next=head;
  head=newNode;
 }
}

void createNode(){
 newNode=(struct node*)malloc(sizeof(struct node));
 printf("Enter the value");
 scanf("%d",&newNode->data);
 newNode->prev=NULL;
 newNode->next=NULL;
}


void deleteNode(){
 if(head==NULL){
  printf("List is Empty please Insert Some values");
  return;
 } else{
  temp=head;
  head=head->next;
  head->prev=NULL;
  printf("%d Deleted value is --> ",temp->data);
  free(temp);

 }

}

void display(){
 if(head==NULL){

 printf("List is empty");

 }else{
  temp=head;

  while(temp!=NULL){
   printf("%d --> ",temp->data);
   temp=temp->next;
  }
 }
}