/*

*/
#include<stdio.h>

int main(){
    enum grade {A, B, C, D, E, F};
    enum subject {phy, chem, math, comp, eng};

    enum subject course;
    enum grade student_grade;
    int roll_no, total_points = 0, total_weight = 0, weight[5], points[6], error_code;
    float grade_point_avge;
    char temp;

    printf("course weight\n");
    //reading data for initialization
    for(course = phy; course <= eng; ++course){
        scanf("%d", &weight[course]);
    }  
    printf("Grade point\n");
    for(student_grade = A;student_grade<= F; ++student_grade){
        scanf("%d", &points[student_grade]);
    }

    //reading student data like 0001AABAA
    printf("Reading Student Data: ");
    scanf("%d", &roll_no);
    printf("%d", roll_no);

    while(roll_no != 0){
        for(course=phy;course<= eng;++course){
            temp = getchar();
            putchar(temp); //printing

            switch(temp){
                case 'A' : 
                    student_grade = A;
                    break;
                case 'B' : 
                    student_grade = B;
                    break;
                case 'C' : 
                    student_grade = C;
                    break;
                case 'D' : 
                    student_grade = D;
                    break;
                    case 'E' : 
                    student_grade = E;
                    break;
                case 'F' : 
                    student_grade = F;
                    break;
                default:
                    printf("Error in grade\n");
                    error_code = 1;
                    break;
            }

            if(error_code == 1){
                continue;
            }

            if(student_grade != F){
                total_points += points[student_grade] * weight[course];
                total_weight += weight[course];
            }
        }

        grade_point_avge = (float) total_points / (float) total_weight;
        printf("GPA = %4.2f\n", grade_point_avge);

        //new start for next student
        printf("Reading Student Data: ");
        scanf("%d", &roll_no);
        total_points = 0;
        total_weight = 0;
    }

    printf("End of Processing all student record\n");


    return 0;
}