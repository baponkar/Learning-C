#include<stdio.h>
#include<string.h>


typedef struct {
    int roll_no;
    char name [20];
    char department[20];
    char course[20];
    int year_of_joining;
} Student;

Student students[500]; //dynamic array

void printAllStudentsNames(){
    int len = sizeof(students) / sizeof(students[0]);
    for(int i=0;i<len;i++){
        printf("%s\n",students[i].name);
    }
}


int main(){
    
    int no_of_students;
    int student_no = 0;
    printf("No of Students: ");
    scanf("%d", &no_of_students);
    printf("Roll Name Department Course Year\n");
    while(no_of_students > 0){
        scanf("%d %s %s %s %d", &students[student_no].roll_no, students[student_no].name, students[student_no].department, students[student_no].course, &students[student_no].year_of_joining);
        student_no++;
        no_of_students--;
    }
    
    printAllStudentsNames();
    //Student raghavan;
    // raghavan.roll_no = 1456;
    // strcpy(raghavan.name, "S. Raghavan");
    // strcpy(raghavan.department, "C.S.");
    // strcpy( raghavan.course, "B.E");
    // raghavan.year_of_joining = 1991;
    // printf("Student %s", raghavan.name);

    return 0;
}