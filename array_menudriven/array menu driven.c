#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[50],i,j,k,n,pos,item,search,index,del,temp,p;
printf("Enter the limit : ");
scanf("%d",&n);
printf("Enter the elements : ");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
printf("\n\t\t\t--MENU--\n");
printf("\t\t\t 1.Traversal\n\t\t\t 2.Insertion\n\t\t\t 3.Deletion\n\t\t\t 4.Search\n\t\t\t 5.Sort\n\t\t\t 6.Exit\n");
while(k<=6)
    {
printf("\nEnter your choice : ");
scanf("%d",&k);
switch(k)
{
  case 1:
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  break;
  case 2:
  printf("\nEnter the position to be inserted : ");
  scanf("%d",&pos);
  printf("\nEnter the element : ");
  scanf("%d",&item);
  for(i=n-1;i>=pos-1;i--)
      a[i+1]=a[i];
   a[pos-1]= item;
   printf("\nafter insertion:\n");
   for(i=0;i<n;i++)
      printf("%d \t",a[i]);
  break;
  case 3:
  printf("\nEnter the position of element to be deleted : ");
  scanf("%d",&del);
  if (del>= n+1)
      printf("\nDeletion not possible.\n");
   else
   {
      for (i=del-1;i<n;i++)
         a[i] = a[i+1];
         printf("\nafter deletion:\n");
      for (i=0;i<n-1;i++)
         printf("%d\n",a[i]);
   }
   break;
   case 4:
   printf("\nEnter the element to be search : ");
   scanf("%d",&search);
   for(i=0;i<n;i++)
   {
   if(a[i]=search)
   {
    index=i;
   }p=i;
  }
  printf("%d found in array at position %d",index,p);
break;
 case 5:
for (i=0;i<n;++i)
  {
  for (j=i+1;j<n;++j)
    {
     if (a[i]>a[j])
     {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
     }
  }
 }
 printf("\nArray in ascending order : ");
 for(i=0;i<n;i++)
 {
 printf("%d\t",a[i]);
 }
break;
 case 6:
    exit(0);
    break;
}
}
}
