/* Program to store the names of any number of students*/
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("How many students are there: ");
    scanf("%d",&n);
    char names[n][50];
    for (int i=0; i<n+1; i++){
        printf("Student %d\n......\n",i);
        printf("Enter your name: ");
        if(fgets(names[i],50,stdin)!=NULL){
            names[i][strcspn(names[i],"\n")]='\0';
        }
    }
    printf("The names are: \n");
    for(int i=0; i<n; i++){
        printf("%s\n",names[i]);
    }
    return 0;
}