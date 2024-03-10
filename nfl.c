#include <stdio.h>

int main() {
    int score;
    printf("Enter a score: "); scanf("%d", &score);

        while (score < 2) {
            printf("Enter a score (must be at least 2): "); scanf("%d", &score);

        }

        int curScore = 0;
        printf("Possible combinations of scoring plays:\n");

        for (int td_2p = 0; curScore < score; td_2p++) {
            for (int td_fg = 0; curScore < score; td_fg++) {
                for (int td = 0; curScore < score; td++) {
                    for (int fg = 0; curScore < score; fg++) {
                        for (int safety = 0; curScore < score; safety++) {
                            curScore = 8*td_2p + 7*td_fg + 6*td + 3*fg + 2*safety;

                            if (curScore == score) {
                                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td_2p, td_fg, td, fg, safety);
                            }
                        }
                        curScore = 8*td_2p + 7*td_fg + 6*td + 3*fg;
                    }
                    curScore = 8*td_2p + 7*td_fg + 6*td;
                }
                curScore = 8*td_2p + 7*td_fg;
            }
            curScore = 8*td_2p;
        }
        return 0;
}
