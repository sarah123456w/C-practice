#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact{
    char * name;
    char * telephone_number;
    struct Contact * next;
};
struct Contact* Insert_information (struct Contact*list);
struct Contact* searching(struct Contact*list);

int main(){
    int people_number,i;
    struct Contact *first,*test,*p;
    scanf("%d",&people_number);
    getchar();
    p=first=malloc(sizeof(struct Contact));
    first->name=malloc(sizeof(char)*100);
    first->telephone_number=malloc(sizeof(char)*100);
    scanf("%s %s",first->name,first->telephone_number);
    for(i=0; i<people_number-1; i++)
        first=Insert_information(first);
    first->next=NULL;
    test=searching(p);
    if(test==NULL)
        printf("NULL");
    else if(test==first)
        printf("Final student");
    else 
        printf("%s",test->next->name);

    return 0;
}
struct Contact* Insert_information (struct Contact*list){
    struct Contact * new_node;
    new_node=malloc(sizeof(struct Contact));
    new_node->name=malloc(sizeof(char)*100);
    new_node->telephone_number=malloc(sizeof(char)*100);
    scanf("%s %s",new_node->name,new_node->telephone_number);
    list->next=new_node;
    return new_node;
}
struct Contact* searching(struct Contact*list){
    char name[100];
    scanf("%s",name);
    for(; list!=NULL; list=list->next)
        if(strcmp(name,list->name)==0)
            return list;
    return NULL;
}