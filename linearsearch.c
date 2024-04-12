# Ds
/*C Program that implements Linear Search*/

#include<stdio.h>

int LinearSearch(int [], int, int);

int main()

{

   int a[20], i, n, key, pos;

   clrscr();

   printf("Enter n:");

   scanf("%d",&n);

   printf("Enter %d elements:\n",n);

   for(i=0;i<n;i++)

   scanf("%d",&a[i]);
 
   printf("Enter the element to be searched:");

   scanf("%d",&key);

   pos = LinearSearch(a, n, key);

   if(pos==-1) 
   
   printf("Search is unsuccessful");

   else 
   
   printf("Key is found at index: %d", pos);

   getch();

   return 0;
}
int LinearSearch(int a[], int n, int key)

{

   int i;

   for(i=0;i<n;i++)

{ 

  if(a[i]==key) return i;
}
return -1;

}
