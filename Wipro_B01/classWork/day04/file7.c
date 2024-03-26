/*Demo on Switch Case*/
#include<stdio.h>
int main()
{
	char clr;
	printf("\nEnter the color of the traffic light(R/O/G): ");
	clr = getc(stdin);
	switch(clr)
	{
		case'R':
	     printf("\nStop Untill traffic light turns gree\n");
	     break;
		case'O':
     		printf("\nPlease procees slowly\n");
   	     break;
		case'G':
     			printf("\nPlease Proceed\n");
	     		break;
		case'r':
	 	    printf("\nStop until traffic light turns green\n");
	  		break;
		case'o':
     	    	 printf("\nPlease Proceed\n");
            	 break;
		case'g':
     		     printf("\nPlease proceed\n");
     	      	     break;
		default:
	     printf("\nTraffic Light are off please proceed\n");
	     break;
	}
	printf("\nSpeed Kills\n");
	return 0;
}
