#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();
    while (t--) {
        char a[150], b[150];
        fgets(a, sizeof(a), stdin);
        int len = strlen(a);
        if (a[len - 1] == '\n') {
            a[len - 1] = '\0';
            len--;
        }

        int j = 0;
        for (int i = len - 1; i >= 0; i--) {
            if (a[i] == 'p') {
                b[j] = 'q';
            } else if (a[i] == 'q') {
                b[j] = 'p';
            } else {
                b[j] = a[i];
            }
            j++;
        }
        b[j] = '\0';

        printf("%s\n", b);
    }

    return 0;
}


