#include "grade.h"
#include <stdio.h>
int det(int rollno){
printf("THE DETAILS OF STUDENT:\n");
//int rollno;
switch(rollno){
case 1:
printf("Name:Abhi\nRoll No.:01\nSem:02\n");
break;
case 2:
printf("Name:Anu\nRoll No.:02\nSem:02\n");
break;
case 3:
printf("Name:Amith\nRoll No.:03\nSem:02\n");
break;
case 4:
printf("Name:Arya\nRoll No.:04\nSem:02\n");
break;
case 5:
printf("Name:Krithi\nRoll No.:05\nSem:02\n");
break;
case 6:
printf("Name:Ritu\nRoll No.:06\nSem:02\n");
break;
case 7:
printf("Name:Raha\nRoll No.:07\nSem:02\n");
break;
case 8:
printf("Name:Roy\nRoll No.:08\nSem:02\n");
break;
case 9:
printf("Name:Riya\nRoll No.:09\nSem:02\n");
case 10:
printf("Name:Smrithi\nRoll No.:10\nSem:02\n");
default:
printf("Sorry strength of the class is 10\n");
}}
int main(){
int choice;
int mar1[10],mar2[10],mar3[10];
int rollno;
printf("the students of Section B are:\n1.Abhi\n2.Anu\n3.Amith\n4.Arya\n5.Krithi\n6.Ritu\n7.Raha\n8.Roy\n9.Riya\n10.Smrithi\n");
printf("Press 1 if you want details of the student\nPress 2 if you want grades of the student \nPress 3 if you want details and Grades of the student\n");
scanf("%d",&choice);
if(choice==1){
printf("enter roll no. of the student");
scanf("%d",&rollno);
return det(rollno);
}
else if(choice==2){
printf("enter roll no. of the student");
scanf("%d",&rollno);
return result(rollno);
}
else if(choice==3){
printf("enter roll no. of the student");
scanf("%d",&rollno);
det(rollno);  
result(rollno);
}
else{
printf("Sorry give the right choice");
}
return 0;
}
