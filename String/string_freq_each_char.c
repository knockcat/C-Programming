//program to calculate the freq of all the character in the strings
#include<stdio.h>
int freq_of_char(char str[]){
int n,i,j,count;
	for(j=0;str[j];j++);
	 n=j; 
    
	printf(" frequency count character in string:\n");
 
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(str[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(str[i]==str[j])
    	    {
                 count++;
                 str[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",str[i],count);
 
	       
	   
       }
	   
	   
 	} 
	return 0;
}


int main(){
	char str[20];
//	fgets(str,20,stdin);
gets(str);
	
	freq_of_char(str);
	
	return 0;
}
