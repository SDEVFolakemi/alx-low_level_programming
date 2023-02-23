1 #include <stdlib.h>
2 #include <time.h>
3 #include <stdio.h>
4
5 /**
6 *main -print random numbers to n whenever it is executed
7 *
8*Return: 0
9 */
10
11  int main(void)
12  {
13  int n;
14
15  srand(time(0));
16  n = rand() - RAND_MAX / 2;
17
18  if (n > 0)
19  {
20  printf("%d is negative\n", n);
21  }
22  else if (n == 0)
23  {
24  printf("%d is zero\n", n);
25 }
26  else
27   {
28  printf("%d is positive\n", n);
29  }
30  return (0);
31  }
