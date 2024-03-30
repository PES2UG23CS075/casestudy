cm#include <stdio.h> 
#ifndef GRADE_DOT_H
#define GRADE_DOT_H
int result(int rollno){
int i; 
int r1=0;
int r2=0;
int r3=0;
int CGPA=0;
int m1[6];
int m2[6];
int m3[6];
char array[][20] = { "Physics", "Chemi", "EVS","Mech","CS","Math" };
printf("THE GRADE OF STUDENT IS:\n");
printf("SUBJECT\t\tISA1\tISA2\tESA\n\n");
if(rollno==1){
  int m1[6]={35,35,24,29,38,29};
  int m2[6]={34,39,27,37,39,20};
  int m3[6]={90,98,96,94,95,94};
  for (i = 0; i < 6; i++) {
     printf("%s\t\t%d\t%d\t%d\n", array[i],m1[i],m2[i],m3[i]);
     r1=r1+m1[i];
     r2=r2+m2[i];
     r3=r3+m3[i];
}
    CGPA=(r1+r2+r3)/100;
        printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",r1,r2,r3,CGPA);
   
}
else if(rollno==2){
       int m1[10]={35,27,26,28,39,26};
    int m2[10]={34,22,28,20,39,25};
    int m3[10]={89,98,80,86,79,87};
    for (i = 0; i < 6; i++) {
        printf("%s\t\t%d\t%d\t%d\n", array[i],m1[i],m2[i],m3[i]);
        r1=r1+m1[i];
        r2=r2+m2[i];
        r3=r3+m3[i];
}
    CGPA=(r1+r2+r3)/100;
        printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",r1,r2,r3,CGPA);
    
    }
else if(rollno==3){
       int m1[10]={39,38,37,36,35,34};
    int m2[10]=	{39,35,38,34,40,37};
    int m3[10]={90,98,96,94,95,94};
for (i = 0; i < 6; i++) {
        printf("%s\t\t%d\t%d\t%d\n", array[i],m1[i],m2[i],m3[i]);
        r1=r1+m1[i];
        r2=r2+m2[i];
        r3=r3+m3[i];
}
    CGPA=(r1+r2+r3)/100;
        printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",r1,r2,r3,CGPA);
    
    }

else if(rollno==4){
       int m1[10]={35,35,24,29,38,29};
    int m2[10]={20,29,28,20,27,29};
    int m3[10]={90,98,96,94,95,94};
for (i = 0; i < 6; i++) {
        printf("%s\t\t%d\t%d\t%d\n", array[i],m1[i],m2[i],m3[i]);
        r1=r1+m1[i];
        r2=r2+m2[i];
        r3=r3+m3[i];
}
    CGPA=(r1+r2+r3)/100;
        printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",r1,r2,r3,CGPA);
    
    }
else if(rollno==5){
       int m1[10]={28,27,26,20,28,29};
    int m2[10]={34,39,27,37,39,20};
    int m3[10]={90,98,96,94,95,94};
for (i = 0; i < 6; i++) {
        printf("%s\t\t%d\t%d\t%d\n", array[i],m1[i],m2[i],m3[i]);
        r1=r1+m1[i];
        r2=r2+m2[i];
        r3=r3+m3[i];
}
    CGPA=(r1+r2+r3)/100;
        printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",r1,r2,r3,CGPA);
    
    }
else if(rollno==6){
       int m1[10]={35,35,24,29,38,29};
    int m2[10]={34,39,27,37,39,20};
    int m3[10]={89,88,83,90,96,99};
    for (i = 0; i < 6; i++) {
        printf("%s\t\t%d\t%d\t%d\n", array[i],m1[i],m2[i],m3[i]);
        r1=r1+m1[i];
        r2=r2+m2[i];
        r3=r3+m3[i];
}
    CGPA=(r1+r2+r3)/100;
        printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",r1,r2,r3,CGPA);
    
    }

else if(rollno==7){
       int m1[10]={35,35,24,29,38,29};
    int m2[10]={34,39,27,37,39,20};
    int m3[10]={90,98,96,94,95,94};
   for (i = 0; i < 6; i++) {
        printf("%s\t\t%d\t%d\t%d\n", array[i],m1[i],m2[i],m3[i]);
        r1=r1+m1[i];
        r2=r2+m2[i];
        r3=r3+m3[i];
}
    CGPA=(r1+r2+r3)/100;
        printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",r1,r2,r3,CGPA);
    
    }
else if(rollno==8){
       int m1[10]={35,35,24,29,38,29};
    int m2[10]={34,39,27,37,39,20};
    int m3[10]={90,98,96,94,95,94};
for (i = 0; i < 6; i++) {
        printf("%s\t\t%d\t%d\t%d\n", array[i],m1[i],m2[i],m3[i]);
        r1=r1+m1[i];
        r2=r2+m2[i];
        r3=r3+m3[i];
}
    CGPA=(r1+r2+r3)/100;
        printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",r1,r2,r3,CGPA);
    
    }

else if(rollno==9){
       int m1[10]={35,35,24,29,38,29};
    int m2[10]={34,39,27,37,39,20};
    int m3[10]={89,95,89,79,86,80};
for (i = 0; i < 6; i++) {
        printf("%s\t\t%d\t%d\t%d\n", array[i],m1[i],m2[i],m3[i]);
        r1=r1+m1[i];
        r2=r2+m2[i];
        r3=r3+m3[i];
}
    CGPA=(r1+r2+r3)/100;
        printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",r1,r2,r3,CGPA);
    
    }
else if(rollno==10){
       int m1[10]={35,35,24,29,38,29};
    int m2[10]={34,39,27,37,39,20};
    int m3[10]={28,38,49,27,28,69};
    for (i = 0; i < 6; i++) {
        printf("%s\t\t%d\t%d\t%d\n", array[i],m1[i],m2[i],m3[i]);
        r1=r1+m1[i];
        r2=r2+m2[i];
        r3=r3+m3[i];
}
    CGPA=(r1+r2+r3)/100;
        printf("Total\t\t%d\t%d\t%d\nCGPA:%d\n",r1,r2,r3,CGPA);
    
    }
else{
printf("Roll No. doesnt exist \n");
}
switch (CGPA){
case 10:
 printf("Grade S");
break;
case 9:
printf("Grade A");
break; 
case 8:
printf("Grade B");
break;
case 7:
printf("Grade C");
break;
case 6:
printf("Grade D");
break;
case 5:
printf("Grade E");
break;
case 4:
case 3:
case 2:
case 1:
printf("Fail");
break;
default:
printf("Give the right choice");
break;
}
}
#endif