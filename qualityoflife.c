#include <stdio.h>

float qualityOfLife(float purchasingPowerInclRentIndex, float safetyIndex,
                    float healthIndex, float climateIndex,
                    float costOfLivingIndex, float housePriceToIncomeRatio,
                    float trafficTimeIndex, float pollutionIndex) {
  return 100 + purchasingPowerInclRentIndex / 2.5 -
         (housePriceToIncomeRatio * 1.0) - costOfLivingIndex / 10 +
         safetyIndex / 2.0 + healthIndex / 2.5 - trafficTimeIndex / 2.0 -
         pollutionIndex * 2.0 / 3.0 + climateIndex / 3.0;
}

int main() {

  float srbrkn =
      qualityOfLife(85.21, 50.56, 91.67, 81.91, 68.84, 4.19, 28.5, 25.86);

  float frbrg =
      qualityOfLife(88.16, 66.19, 72.14, 85.86, 68.09, 12.04, 25.88, 15.53);

  printf("\nSaar: %f\n", srbrkn);
  printf("\nFrei: %f\n", frbrg);
}