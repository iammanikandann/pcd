#include<stdio.h>
#include<stdlib.h>
void main()
{
    char stack[20],ip[20],opt[10][10][1],ter[]={"i*+$"};
    int i,j,k,n=4,top=0,col,row;
    for(i=0;i<n;i++)
    {
        stack[i]=NULL;  ip[i]=NULL;
        for(j=0;j<n;j++)
        {
            if(ter[i]=='i'&&ter[j]=='i')
            {
                opt[i][j][0]='e';
            }
            else if(ter[i]=='i')
                opt[i][j][0]='>';
            else if(ter[j]=='i')
                opt[i][j][0]='<';
            else if(ter[i]=='*')
                opt[i][j][0]='>';
            else if(ter[j]=='*')
                opt[i][j][0]='<';
            else if(ter[i]=='$')
                opt[i][j][0]='< ';
            else if(ter[i]=='$'&&ter[j]=='$')
                opt[i][j][0]='a';
            else if(ter[j]=='$')
                opt[i][j][0]='>';
        }
    }
    printf("\n**** OPERATOR PRECEDENCE TABLE ****\n");
    for(i=0;i<n;i++)
    {
        printf("\t%c",ter[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\n%c",ter[i]);
        for(j=0;j<n;j++)
        {
            printf("\t%c",opt[i][j][0]);
        }
    }
    stack[top]='$';
    printf("\nEnter the input string: ");
    scanf("%s",ip);
    i=0;
    printf("\nSTACK\t\t\tINPUT STRING\t\t\tAction\n");
    printf("\n%s\t\t\t%s\t\t\t",stack,ip);
    while(i<=strlen(ip)){
        for(k=0;k<n;k++)
        {
            if(stack[top]==ter[k])
                col=k;
            if(ip[i]==ter[k])
                row=k;
        }
        if((stack[top]=='$')&&(ip[i]=='$')){
            printf("String is Accepted\n");
            break;
        }
        else if((opt[col][row][0]=='<')||(opt[col][row][0]=='='))
        {
            stack[++top]=opt[col][row][0];
            stack[++top]=ip[i];
            printf("Shift %c",ip[i]);
            i++;
        }
        else{
            if(opt[col][row][0]=='>'){
                while(stack[top]!='<'){
                    --top;
                }
                top=top-1;
                printf("Reduce");
            }
            else{
                printf("\nString is not accepted");
                break;
            }
        }
        printf("\n");
        for(k=0;k<=top;k++){
            printf("%c",stack[k]);
        }
        printf("\t\t\t");
        for(k=i;k<strlen(ip);k++){
            printf("%c",ip[k]);
        }
        printf("\t\t\t");
    }
}













