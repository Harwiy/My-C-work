#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        char grid[n][m+1];
        for (int i = 0; i < n; i++) {
            scanf("%s", grid[i]);
        }
        
        int found = 0;
        // We need at least 4 rows to form a 4x4 sub-rectangle
        if (n >= 4) {
            // Iterate over all possible top left corners of the 4x4 sub-rectangle
            for (int i = 0; i <= n - 4; i++) {
                for (int j = 0; j <= m - 4; j++) {
                    // Check the first and fourth row for all white cells
                    if (grid[i][j] == '0' && grid[i][j+1] == '0' && grid[i][j+2] == '0' && grid[i][j+3] == '0' &&
                        grid[i+3][j] == '0' && grid[i+3][j+1] == '0' && grid[i+3][j+2] == '0' && grid[i+3][j+3] == '0') {
                        // Check the second and third row for specific pattern
                        if (grid[i+1][j] == '0' && grid[i+1][j+3] == '0' &&
                            grid[i+2][j] == '0' && grid[i+2][j+3] == '0' &&
                            grid[i+1][j+1] == '1' && grid[i+1][j+2] == '1' &&
                            grid[i+2][j+1] == '1' && grid[i+2][j+2] == '1') {
                            found = 1;
                            break;
                        }
                    }
                }
                if (found) break;
            }
        }
        
        if (found) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        char grid[n][m+1];
        for (int i = 0; i < n; i++) {
            scanf("%s", grid[i]);
        }
        
        int found = 0;
        // We need at least 4 rows to form a 4x4 sub-rectangle
        if (n >= 4) {
            // Iterate over all possible top left corners of the 4x4 sub-rectangle
            for (int i = 0; i <= n - 4; i++) {
                for (int j = 0; j <= m - 4; j++) {
                    // Check the first and fourth row for all white cells
                    if (grid[i][j] == '0' && grid[i][j+1] == '0' && grid[i][j+2] == '0' && grid[i][j+3] == '0' &&
                        grid[i+3][j] == '0' && grid[i+3][j+1] == '0' && grid[i+3][j+2] == '0' && grid[i+3][j+3] == '0') {
                        // Check the second and third row for specific pattern
                        if (grid[i+1][j] == '0' && grid[i+1][j+3] == '0' &&
                            grid[i+2][j] == '0' && grid[i+2][j+3] == '0' &&
                            grid[i+1][j+1] == '1' && grid[i+1][j+2] == '1' &&
                            grid[i+2][j+1] == '1' && grid[i+2][j+2] == '1') {
                            found = 1;
                            break;
                        }
                    }
                }
                if (found) break;
            }
        }
        
        if (found) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}

