
#include <stdio.h>
#include <ctype.h>
#include <string.h>
void inputArray(char *a);
char printArray(char *a);
void letter(char *a,int *length);
void number(char *a,int *length);
void special(char *a,int *length);
int main(int argc, const char * argv[]) {
    char a[100];
    int choice;
    int length;
    do {
        printf("\tMENU\n");
        printf("1. Nhap phan tu vao chuaio\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong so co trong chuoi trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Hay nhap lua chon cua ban:");
        scanf("%d",&choice);
        fflush(stdin);
        switch (choice) {
            case 1:
                inputArray(a);
                break;
            case 2:
                printArray(a);
                break;
            case 3:
                letter(a,&length);
                break;
            case 4:
                number(a,&length);
                break;
            case 5:
                special(a,&length);
                break;
            default:
                break;
        }
    } while (choice!=6);
    
    return 0;
}
void inputArray(char *a){
    printf("Moi ban nhap choi bat ki : ");
    fgets(a, 100, stdin);
}
char printArray(char *a){
    printf("%s",a);
    return *a;
}
void letter(char *a,int *length){
    int count=0;
    *length = (int)strlen(a);
    for(int i=0;i<*length;i++){
        if(isalpha(*(a+i))){
            count++;
        }
    }
    printf("So ky tu trong chuoi la : %d\n",count);
}void number(char *a,int *length){
    int count=0;
    *length = (int)strlen(a);
//    a[*length-1]='\0';
//    *length = (int)strlen(a);
    for(int i=0;i<*length;i++){
        if(isdigit(*(a+i))){
            count++;
        }
    }
    printf("So chu so trong chuoi la : %d\n",count);
}
void special(char *a,int *length){
    int count=0;
    *length = (int)strlen(a);
//    a[*length-1]='\0';
//    *length = (int)strlen(a);
    for(int i=0;i<*length;i++){
        if(!isdigit(*(a+i))&&!isalpha(*(a+i))&&!isspace(*(a+i))){
            count++;
        }
    }
    printf("So ky tu dac biet trong chuoi la : %d\n",count);
}
