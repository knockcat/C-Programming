//program to find second largest element in the array, using dynamic memory location
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, sec_lar;
  double *data;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);

  // Allocating memory for n elements
  data = (double *)calloc(n, sizeof(double));
  if (data == NULL) {
  printf("Error!!! memory not allocated.");
  exit(0);
  }
int i;
  // Storing numbers entered by the user.
  for (int i = 0; i < n; ++i) {
  printf("Enter number%d: ", i + 1);
  scanf("%lf", data + i);
  }

  // Finding the largest number
  for (int i = 1; i < n; ++i) {
  if (*data < *(data + i))
    *data = *(data + i);
    sec_lar=*(data + i);
  }
  if(*data)
  printf("Largest number = %.2lf", *data);
printf("Largest number = %.2lf", *(data + i));
  free(data);

  return 0;
}
