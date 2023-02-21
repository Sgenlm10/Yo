#include<stdio.h>
void main()
{
int arry1[50],arry2[50],arry3[100],s1,s2,i,j,k;
printf("Enter the size of first array");
scanf("%d",&s1);
printf("Enter the array elements:");
for(i=0;i<s1;i++)
scanf("%d",&arry1[i]);
printf("Enter the size of second array");
scanf("%d",&s2);
printf("Enter the array elements:");
for(i=0;j<s2;i++)
scanf("%d",&arry2[j]);
i=0;
j=0;
while(i<s1&&j<s2)
{
if(arry1[i]<arry2[j])
{
arry3[k]=arry1[i];
i++;
}
else
{
arry3[k]=arry2[j];
j++;
}
k++;
}
if(i>=s1)
{
while(j<s2)
{
arry3[k]=arry2[j];
j++;
k++;
}
}
if(j>=s2)
{
while(i<s1)
{
arry3[k]=arry2[i];
i++;
k++;
}
}
printf("After merging:\n");
for(i=0;i<(s1+s2);i++)
printf("\n%d",arry3[i]);
}

