#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// random number generator
void randomNumber(float min, float max, int count)
{
    // srand((unsigned int)time(NULL));
    // for (int i = 0; i < count; i++){
    //     float num  = ((float)rand()/(float)(RAND_MAX)) * max;
    //     return num;
    // }
    // create an array of the elements
    float items[10] = {
        0,
    };
    printf("The Random numbers are \n");
    float num2;
    for (int i = 0; i < count; i++)
    {
        float num = rand() / (float)RAND_MAX;
        num2 = min + num * (max - min);
        // add item to array
        items[i] = num2;
        printf(": %.2f \n", num2);
    }
    // printf("arrayy %f", items[2]);
    // calculate mean
    float sum = 0;
    float avg = 0;
    int j = 0;
    for (j = 0; j < 5; j++)
    {
        sum = sum + items[j];
    }
    // avg
    avg = sum / j;
    printf("The mean is : %.2f \n", avg);
    // calculate standard deviation
    float sd = 0.0;
    int k = 0;
    for (k = 0; k < 5; k++)
    {
        sd += pow(items[k] - avg, 2);
    }
    float sdf = sqrt(sd / 10);
    printf("The standard deviation is: %.2f \n", sdf);
    // maximum sum of two consequtive numbers
    float maxsum = 0;
    int l = 0;
    for (l = 0; l < 5; l++)
    {
        if (items[l] + items[l + 1] > maxsum)
        {
            maxsum = items[l] + items[l + 1];
        }
    }
    // print largest found no(s)
    printf("The maximum sum of two consequtive numbers is: %.2f \n", maxsum);
}

int main()
{
    randomNumber(2.0, 10.0, 5);

    return 0;
}