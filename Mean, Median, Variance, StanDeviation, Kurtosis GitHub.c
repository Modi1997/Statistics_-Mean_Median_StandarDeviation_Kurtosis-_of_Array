#include <stdio.h>
#include <math.h>

/// TEST 5 Numbers 22.3, 10.5, 60.5, 20.5, 22.5

float StandardDeviation(float numbers[]);

int main(){
/// Creating Variables and during coding always coming on top and adding more if needed
/// Print for user, Scan, Calling Definition for StandardDeviation that also there we created the Variance and Mean
    int i, j, num, nums=5;
    float numbers[100], median, mid, transfer;
    printf("Type 5 numbers \n");

    for(i=0; i<5; i++){
        scanf("%f", &numbers[i]);
    }
    printf("\nThe STANDARD DEVIATION of given numbers rounded up to 2 decimals is: %.2f", StandardDeviation(numbers));


///Sorting the list so we can find the right Median
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(numbers[j]>numbers[j+1]){
                transfer = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = transfer;
            }
        }
    }

///Finding Median/Medians (if even number the elements of the list)
    if(nums%2==0){
        int value=(nums/2)-1;
        for(i=0; i<nums; i++){
           if(value==i || (value+1)==i){
              median=median+numbers[i];
        }
    }
    mid=mid/2;
    printf("\nThe MEDIAN of given numbers is: %.2f ",median);
    }
    else{
        float value=(nums/2);
        for(i=0; i<nums; i++){
            if(value==i){
                median=numbers[i];
                printf("\nThe MEDIAN of given numbers is: %.2f ", median);
            }
        }
    }
    return 0;
}


///Definition of StandardDeviation and inside we create an output for Median that is already calculated to find the SD and Variance (Not part of project but easy to find when we have SD)
float StandardDeviation(float numbers[]){

    float sum=0.0, sd=0.0, mean, variance, standard, m4, kurtosis;
    int x, y;
    for(x=0; x<5; x++){
        sum += numbers[x];
    }
    mean = sum/5;
    for(y=0; y<5; y++){
        sd += pow(numbers[y]-mean, 2);
    }

    for(x=0; x<5; x++){
         m4 = m4 + pow((numbers[x] - mean), 4);
    }

    standard = sqrt(sd/5);
    variance = pow(standard, 2); /// or standard * standard
    kurtosis = (m4/5) / (pow(variance,2));

    printf("\nThe KURTOSIS of given numbers rounded up to 2 decimals is: %.2f", kurtosis);
    printf("\nThe VARIANCE of given numbers rounded up to 2 decimals is: %.2f", variance);
    printf("\nThe MEAN of given numbers rounded up to 2 decimals is: %.2f", mean);

    return standard;
}
