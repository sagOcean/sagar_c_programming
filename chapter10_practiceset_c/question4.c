/*4. Take name and salary of two employees as input from the user and write them to 
a text file in the following format: 
i. Name1, 3300 
ii. Name2, 7700 */

#include <stdio.h>

struct details{
    char name[50];
    int salary;
};

int main() {
    struct details emp[2];

    int i;
    for(i=0;i<2;i++){
        printf("enter the name:\n");
        scanf("%s",emp[i].name);
        printf("enter the salary:\n");
        scanf("%d",&emp[i].salary);
    }
    FILE *fp;
    fp = fopen("question4file.txt","a");
    for(i=0;i<2;i++){
        fprintf(fp,"%s\t,%d\n",emp[i].name,emp[i].salary);
    }
    fclose(fp);

    return 0;
}