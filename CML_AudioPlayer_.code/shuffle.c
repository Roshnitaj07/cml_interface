#include<string.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
extern struct file_path f1[];
void shuffle (struct file_path *f2) 
{ 
   int i,k,n;
   struct file_path temp;
    srand ( time(NULL) ); 
    for (int i = n-1; i > 0; i--) 
    { 
        // Pick a random index from 0 to i 
        int j = rand() % (i+1); 
  
        // Swap arr[i] with the element at random index 
        strcpy(temp.f,f2[i].f);
	 strcpy(f2[i].f,f2[j].f);
	 strcpy(f2[j].f,temp.f);
	
    }
} 
