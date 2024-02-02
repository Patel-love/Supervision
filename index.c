// ============ Q-1 ===========


// #include <stdio.h>
// int main(){
//     FILE *m;
//     m=fopen("manav.txt","r");
//     char data[100];
//     if(m==NULL){
//         printf("file does not exist");
//     }else{
//         while(fgets(data,50,m)!=NULL){
//             printf("%s",data);
//             fclose(m);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     FILE *m;
//     m=fopen("manav.txt","w");
//     char data[100];
//     if(m==NULL){
//         printf("no");
//     }else{
//            fputs("hello world",m);
//             fclose(m);
//         }
    
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     FILE *m;
//     m=fopen("manav.txt","a");
//     char data[100];
//     if(m==NULL){
//         printf("no");
//     }else{
//            fputs("\n jay shree ram",m);
//             fclose(m);
//         }
    
//     return 0;
// }



// ============ Q-2 ===========

#include <stdio.h>
#include <string.h>
struct Employee
{
    char name[100];
    int age;
    char gender[20];
    char from[100];
    char to[100];
    int payment;
};
int main()
{
    struct Employee m[10];
    int employeeN;
    printf("Enter TRAIN Number :- ");
    scanf("%d",&employeeN);
    for(int i=0; i<=employeeN; i++){
        printf("ENTER THE NAME :- ");
        scanf("%s",&m[i].name);

         printf("ENTER THE AGE :- ");
        scanf("%d",&m[i].age);

         printf("ENTER THE GENDER :- ");
        scanf("%s",&m[i].gender);

        printf("ENTER THE FROM :- ");
        scanf("%s",&m[i].from);

         printf("ENTER THE TO :- ");
        scanf("%s",&m[i].to);

         printf("ENTER THE PAYMENT :-");
        scanf("%d",&m[i].payment);
    }
    for(int i=0; i<=employeeN; i++){
        printf("%s\n",m[i].name);
        printf("%d\n",m[i].age);
        printf("%s\n",m[i].gender);
        printf("%s\n",m[i].from);
        printf("%s\n",m[i].to);
        printf("%d\n",m[i].payment);
    }
    return 0;
}