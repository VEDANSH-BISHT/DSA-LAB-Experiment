#include <stdio.h>

struct student {
    int roll_no;
    char fname[30];
    char lname[30];
};

int main() {
    int n;
    printf("enter no. entries:");
    scanf("%d",&n);
    struct student s[n], temp;
    int i, j;

   
    printf("Enter details of %d students:\n",n);
    for(i = 0; i < n; i=i+1) {
        printf("\nStudent %d\n", i+1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("First Name: ");
        scanf("%s", s[i].fname);

        printf("Last Name: ");
        scanf("%s", s[i].lname);
    }

  
    for(i = 0; i < n; i=i+1) {
        for(j = i + 1; j < n-i-1; j=j+1) {
            if(s[j].roll_no > s[j+1].roll_no) {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    printf("\nStudents in Ascending Roll No Order\n");
    for(i = 0; i < n; i=i+1) {
        printf("%d  %s %s\n",
               s[i].roll_no,
               s[i].fname,
               s[i].lname);
    }

    return 0;
}
