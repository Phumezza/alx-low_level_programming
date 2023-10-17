1 #include <stdlib.h>
2 #include <time.h>
3 #include <stdio.h>
4 /**
5    * main - this is the main function
6    *Return: always o
7    */
8
9 /* more headers goes there */
10
11 /* betty style doc for function main goes there */
12 int main(void)
13 {
14	int n;
15
16	srand(time(0));
17	n = rand() - RAND_MAX / 2;
18	/* your code goes there */
19	if (n > 0)
20	printf("%d is positive\n", n);
21	else if (n < 0)
22	printf("%d is negative\n" n);
23	else
24	printf("%d is zero\n" n);
25	return (0);
26 }
