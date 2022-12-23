#include <stdio.h>
#include <string.h>

#define MAX_LEN 256

int main() {
  char s[MAX_LEN], t[MAX_LEN];

  while (scanf("%s %s", s, t) != EOF) {
    int s_len = strlen(s), t_len = strlen(t); // set strlen

    int s_idx = 0, t_idx = 0; // refresh

    while (s_idx < s_len && t_idx < t_len) {
      
	  if (s[s_idx] == t[t_idx]) s_idx++;
      
      t_idx++;
    }

    if (s_idx == s_len) printf("Yes\n");
    else printf("No\n");
  }

  return 0;
}

