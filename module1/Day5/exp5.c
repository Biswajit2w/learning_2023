//Write a program to demonstrate the swapping the fields of two structures using pointers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Watch
{
    int Watch_price;
    char Watch_name[50];
};
void swap_fields(struct Watch *Biswa,struct Watch *Amit)
{
    char temp[50];
    strcpy(temp, Biswa->Watch_name);
    strcpy(Biswa->Watch_name, Amit->Watch_name);
    strcpy(Amit->Watch_name, temp);

    int var = Biswa->Watch_price;
    Biswa->Watch_price = Amit->Watch_price;
    Amit->Watch_price = var;


}
int main()
{
    struct Watch Biswa,Amit;
    Biswa.Watch_price=328000;
    strcpy(Biswa.Watch_name, "Rolex");
    Amit.Watch_price = 497000;
    strcpy(Amit.Watch_name, "Cartier Santos");
    printf("Biswa Watch price :%d\n",Biswa.Watch_price);
    printf("Biswa Watch name :%s\n",Biswa.Watch_name);
    printf("Amit Watch price :%d\n",Amit.Watch_price);
    printf("Amit Watch name:%s\n",Amit.Watch_name);
    swap_fields(&Biswa,&Amit);
    printf("after swapping\n");
    printf("Biswa Watch price :%d\n",Biswa.Watch_price);
    printf("Biswa Watch name :%s\n",Biswa.Watch_name);
    printf("Amit Watch price :%d\n",Amit.Watch_price);
    printf("Amit Watch name:%s",Amit.Watch_name);
    
}
