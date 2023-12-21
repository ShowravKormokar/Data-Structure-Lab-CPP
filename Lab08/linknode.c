
#include<stdio.h>
#include<stdlib.h>

//#define NULL 0

 main(){

 struct linked_list
 {
     int item;
     struct linked_list *next;
 };

   typedef  struct linked_list node;

   node node1,node2;

   node1.item=10;
   node1.next=&node2;

   node2.item=20;
   node2.next=0;

   printf("%d %d",node1.item,node2.item);
 }
