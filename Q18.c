#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int found = 0;
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("-1");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] == -1)
            continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
   if (count > 1) {
         printf("%d ", arr[i]);
        found = 1;
        }
    }
    if (!found)
        printf("-1");
 return 0;
}
