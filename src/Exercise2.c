/*
2.	Write a program to receive integers, the program ends when user input 0. 
Print the minimum (different from 0) and maximum number (different from 0) among the received numbers.
Ex:
 ____________________________________
| Input: -3 5 -2 9 8 10 5 -1 0       |
| Output: Max: 10                    |
|         Min: -3                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[10],i;
	for(i=0; i<argc;i++){
		if(atoi(argv[i+1])==0){
			argc = i;
			break;
		}
		else
			testcase[i] = atoi(argv[i+1]);
	}
	//Your codes here
	int n, max, min;
	printf(" Input: ");
	scanf("%d", &n);
	max = n;
	min = n;
	while (n!=0)
	{
		if (max < n)
			max = n;
		if (min > n)
			min = n;
		scanf("%d", &n);
	}
	printf("max: %d\n", max);
	printf("min: %d\n", min);
	float ave = (max + min)*1.0 / 2;
	printf("ave %f", ave);
	system("pause");

	return 0;
}
