#include <stdio.h>
#define CHANNELS  3
#define INTERVALS 4
#define TOTAL     (CHANNELS * INTERVALS)

int readData(double ber[CHANNELS][INTERVALS]) {
    int count;
    printf("How many readings will you enter? ");
    if (scanf("%d", &count) != 1 || count != TOTAL) {
        printf("Error: invalid record count (12 required).\n");
        return 0;
    }
    for (int i = 0; i < CHANNELS; i++) {
        for (int j = 0; j < INTERVALS; j++) {
            printf("Channel %d, Interval %d BER: ", i + 1, j + 1);
            if (scanf("%lf", &ber[i][j]) != 1) {
                printf("Error: non-numeric value entered.\n");
                return 0;
            }
            if (ber[i][j] < 0.0 || ber[i][j] > 1.0) {
                printf("Error: BER must be between 0 and 1.\n");
                return 0;
            }
        }
    }
    return 1;
}
void channelAverages(double ber[CHANNELS][INTERVALS], double avg[CHANNELS]) {
    for (int i = 0; i < CHANNELS; i++) {
        double sum = 0.0;
        for (int j = 0; j < INTERVALS; j++)
            sum += ber[i][j];
        avg[i] = sum / INTERVALS;
    }
}
int peakInterval(double ber[CHANNELS][INTERVALS], double *peakSum) {
    int peak = 0;
    *peakSum = -1.0;
    for (int j = 0; j < INTERVALS; j++) {
        double sum = 0.0;
        for (int i = 0; i < CHANNELS; i++)
            sum += ber[i][j];
        if (sum > *peakSum) { *peakSum = sum; peak = j; }
    }
    return peak;
}
int main(void) {
    double ber[CHANNELS][INTERVALS], avg[CHANNELS], peakSum;
    if (!readData(ber)) return 1;
    channelAverages(ber, avg);
    int peak = peakInterval(ber, &peakSum);
    for (int i = 0; i < CHANNELS; i++)
        printf("Channel %d Average BER: %.3e\n", i + 1, avg[i]);
    printf("Peak Interval: Interval %d (Combined BER: %.3e)\n", peak + 1, peakSum);
    return 0;
}
