#include <stdio.h>
#include <stdlib.h>

double max(double * array, int n) {
  double max = array[0];
  for(int i = 1; i < n; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

double min(double * array, int n) {
  double min = array[0];
  for(int i = 1; i < n; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

double avg(double * array, int n) {
  double sum = 0;
  for(int i = 1; i < n; i++) {
    sum += array[i];
  }
  return sum/n;
}

int main() {
  int n;
  printf("n>");
  scanf("%d", &n);
  double *array = malloc(sizeof(double) * n);

  for(int i = 0; i < n; i++) {
    printf("array[%d]>", i);
    scanf("%lf", &array[i]);
  }

  double (*fn[])(double*, int) = {min, max, avg};
  free(array);
}
