#include<stdio.h>

struct gst
{
    char name[10];
    int rate;
    int qty;

};
int main()
{
    int amt,bill,gst;
    struct gst person[3];
    for(int i=0;i,3;i++)
    {
        printf("Enter person's name :");
        scanf("%s",&person[i].name);
        printf("Enter Rate :");
        scanf("%d",&person[i].rate);
        printf("Enter quantity :");
        scanf("%d",&person[i].qty);
        amt=(person[i].rate)*(person[i].qty);
        gst=amt*18/100;
        bill=amt+gst;

        printf("Your amount is = %d\n",amt);
        printf("Your gst amount is = %d\n",gst);
        printf("Your Bill is = %d\n",bill);
    }





    return 0;
}
