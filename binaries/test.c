#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

int fib()
{
  int n = 30, first = 0, second = 1, next, c;
 
  printf("First %d terms of Fibonacci series are:\n", n);
 
  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d\n", next);
  }
 
  return 0;
}

int arith() {
   int first = 5, second = 5, add, subtract, multiply;
   float divide;
 
   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;   //typecasting
 
   printf("Sum = %d\n", add);
   printf("Difference = %d\n", subtract);
   printf("Multiplication = %d\n", multiply);
   printf("Division = %.2f\n", divide);
}

int conv() {
  int n, c, k;
 
  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);
 
  printf("%d in binary number system is:\n", n);
 
  for (c = 31; c >= 0; c--)
  {
    k = n >> c;
 
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
 
  printf("\n");
 
  return 0;
}

int binarySearch() {

   int c, first, last, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d isn't present in the list.\n", search);
 
   return 0;  
}

int stringSort() {
  char ch, input[100], output[100];
  int no[26] = {0}, n, c, t, x;
 
  printf("Enter some text\n");
  scanf("%s", input);
 
  n = strlen(input);
 
  /** Storing how many times characters (a to z)
    appears in input string in an array */
 
  for (c = 0; c < n; c++)
  {
    ch = input[c] - 'a';
    no[ch]++;
  }
 
  t = 0;
 
  /** Insert characters 'a' to 'z' in output string as many times
    as they appear in the input string */
 
  for (ch = 'a'; ch <= 'z'; ch++)
  {
    x = ch - 'a';
 
    for (c = 0; c < no[x]; c++)
    {
      output[t] = ch;
      t++;
    }
  }
  output[t] = '\0';
 
  printf("%s\n", output);
 
  return 0;
}

int heapTest() {
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("String = %s,  Address = %u\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);
   
   return(0);
}

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int structTest() {
   struct Books Book1;        /* Declare Book1 of type Book */
 
   /* book 1 specification */
   strcpy( Book1.title, "C Programming");
   strcpy( Book1.author, "Nuha Ali"); 
   strcpy( Book1.subject, "C Programming Tutorial");
   Book1.book_id = 6495407;
 
   /* print Book1 info */
   printf( "Book 1 title : %s\n", Book1.title);
   printf( "Book 1 author : %s\n", Book1.author);
   printf( "Book 1 subject : %s\n", Book1.subject);
   printf( "Book 1 book_id : %d\n", Book1.book_id);
}

int main() {
  arith();
  fib();
  conv();
  binarySearch();
  stringSort();
  heapTest();
  structTest();
}
