#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        int found = 0;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                if(i > 0) printf(",");
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if(!found) {
            if(i > 0) printf(",");
            printf("-1");
        }
    }
    printf("\n");
    return 0;
}
