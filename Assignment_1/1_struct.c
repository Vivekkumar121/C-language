#include <stdio.h>
typedef struct students{
    int name[20];
    int age;
    int semester;
    int marks[5];
    int total[10];
}p;
int main(){
    p s[10];
    p *ptr=s;
    int y;
    for(int i=0;i<10;i++){
    printf("Enter the name of student%d ",i+1);
    scanf("%s",ptr[i].name);
    // scanf("%d",&s[i].age);
    // scanf("%d",&s[i].semester);
    printf("enter the marks for student%d \n",i+1);
    for(int j=0;j<5;j++)
        {
            //printf("subject%d \n",j+1);
            scanf("%d",&ptr[i].marks[j]);
        }
    fflush(stdin);
    }
    int z=0;
      for(int i=0;i<10;i++)
        {
            
            for(int j=0;j<5;j++)
            {
                z+=ptr[i].marks[j];
            }s[i].total[i]=z;
            z=0;
            
        }
    for(int i=0;i<10;i++){
    printf("%d\n",ptr[i].total[i]);
    }
    int max=s[0].total[0];
    printf("%d\n",max);
    for(int i=0;i<10;i++){
        if(max<ptr[i].total[i]){
            max=ptr[i].total[i];
            y=i;
        }
    }
    printf("the highest marks are %d\nand the student name is %s",max,ptr[y].name);

return 0;
}