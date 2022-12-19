#include <stdio.h>

#define MAX_N 105
#define INT_MIN (-2147483647 - 1)

int matrix[MAX_N][MAX_N];
int prefix_sum[MAX_N][MAX_N];

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Calculate prefix sum of the matrix
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      prefix_sum[i][j] = prefix_sum[i][j - 1] + matrix[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      prefix_sum[i][j] += prefix_sum[i - 1][j];
    }
  }

  // Find the maximal sub-rectangle
  int max_sum = INT_MIN;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = i; k <= n; k++) {
        for (int l = j; l <= n; l++) {
          int sum = prefix_sum[k][l] - prefix_sum[i - 1][l] - prefix_sum[k][j - 1] + prefix_sum[i - 1][j - 1];
          if (sum > max_sum) {
            max_sum = sum;
          }
        }
      }
    }
  }

  printf("%d\n", max_sum);

  return 0;
}

