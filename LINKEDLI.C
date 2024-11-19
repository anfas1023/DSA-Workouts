#include<conio.h>
#include<stdio.h>

struct node {
 int info;
 struct node *ptr;
}
*top,*top1,*temp;
int topelement();
void empty();
void push();
void pop();
void display();
void destroy();
void stackcount();
void create();
int count=0;
void main()
{
 int no,ch,e;
 clrscr();
 printf("\n 1.push");
 printf("\n 2.pop");
 printf("\n 3.top");
 printf("\n 4.empty");
 printf("\n 5.exit");
 printf("\n 6.dispaly");
 printf("\n 7.stackcount");

 create();

 while(1)
 {
  printf("\n enter a choice");
  scanf("%d",&ch);
  switch (ch){
   case 1:
    printf("enter data \n");
    scanf("%d",&no);
    push(no);
    break;
   case 2:
     pop();
     break;
   case 3:
    if(top==NULL){
    printf("/n no element in stack");
    }else{
    e=topelement();
    printf("/n top element= %d",e);

  }
     break;
    case 4:
     empty();
     break;
    case 5:
     exit(0);
    case 6:
     display();
     break;
    case 7:
     stackcount();
     break;
    default :
    printf("/n wrong choice enter the correct choice");
    break;

 }
}
}
void create(){
 top=NULL;
}
void stackcount(){
 printf("%d",count);
}
void push(int data){
if(top==NULL){
 top=(struct node*)malloc(1*sizeof(struct node));
 top->ptr=NULL;
 top->info=data;

}else{

 temp=(struct node*)malloc(1*sizeof(struct node));
 temp->ptr=top;
 temp->info=data;
 top=temp;

}
count++;
}
void display(){
 top1=top;
 if(top1==NULL){
  printf("/nstack is empty");
  return ;

 }else{
  while(top1!=NULL){
   printf("%d,",top1->info);
   top1=top1->ptr;

  }

 }

}
  void pop(){
   top1=top;
   if(top1==NULL){
     printf(" /n error trying in stack pop");
     return ;
   }else{
   top1=top1->ptr;
   printf("popped value is %d",top ->info);
   free(top);
   top=top1;
   count-- ;
   }

  }
  int topelement(){
   return (top->info);
  }
  void empty(){
   if(top==NULL){
    printf("/n stack is empty");

   }else{
    printf("stack is not empty");
   }
  }
