#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    
    if(k > n) {
        printf("0\n"); // Assuming no valid subarray if k > n
        return 0;
    }
    
    long long current_sum = 0;
    for(int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    long long max_sum = current_sum;
    
    for(int i = k; i < n; i++) {
        current_sum = current_sum - arr[i - k] + arr[i];
        if(current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    printf("%lld\n", max_sum);
    return 0;
}
