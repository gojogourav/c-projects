#include<stdio.h>
#include<math.h>
#define PI 3.14159265132

// int main(){
//     float radius,area,parimeter;
//     printf("Enter the radius of the circle");   
//     scanf("%f",&radius);

//     area = PI * radius*radius;
//     parimeter = 2 * PI*radius;

//     printf("Area of the circle: %.2f\n",area);
//     printf("Parameter of the circle: %.2f\n",parimeter);

//     return 0;
// }


// int main(){
//     int num1,num2;

//     printf("Enter the first number ");
//     scanf("%d",&num1);
//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     num1 = num1 + num2 - (num2 = num1);

//     printf("%d\n",num1);
//     printf("%d\n",num2);

// }




// int isPrime(int n){
//     if(n<=1) return 0;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             return 0;
//         }
//         else return 1;
//     }
// }

// void checkIfSumOfPrime(int num){
//     for(int i=0;i<=sqrt(num);i++){
//         if(isPrime(i)&&isPrime(num-i)){
//             if(i+(num-i)==num){
//                 printf("%d + %d = %d\n",i,num-i,num);
//             }
//         }
//     }
// }

// int main(){
//     checkIfSumOfPrime(10);
// }







// void inputMatrix(int n,int m,int matrix[n][m]){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             scanf("%d ",&matrix[i][j]);
//         }
//         printf("\n");
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// void matrixMultiplication(int m,int n,int p,int q,int matrix1[m][n],int matrix2[p][q]){
//     if(n==p){
//         printf("multiplication of this matrix is not possible");
//     }

//     int matrix3[m][q];

//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             matrix3[i][j]=0;
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<q;j++){
//             for (int k = 0; k < n; k++) {
//                 matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
//             }
//         }
//     }

//     printf("Resultant matrix after multiplication:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < q; j++) {
//             printf("%d ", matrix3[i][j]);
//         }
//         printf("\n");
//     }

// }

// int main(){
//     int matrix1[4][3];
//     int matrix2[3][2];
//     printf("Please enter the matrix 1");
//     inputMatrix(4,3,matrix1);
//     printf("Please enter the matrix 2");
//     inputMatrix(3,2,matrix2);

//     matrixMultiplication(4,3,3,2,matrix1,matrix2);

//     return 0;    
// }


// int main(){
//     int year;
//     printf("Enter the fucking year bitch");
//     scanf("%d",&year);

//     if(year%4==0||year%100!=0||year%400!=0){
//         printf("This is leap year");
//     }else{
//         printf("This is not leap year");
//     }
//     return 0;
// }



// void findUniqueElements(int arr[],int n){
//     int frequency[1000] = {0};

//     for(int i=0;i<n;i++){
//         frequency[arr[i]]++;
//     }

//     printf("Elements with how many times they are repeated are - ");
//     printf("element : count");
//     for(int i=0;i<n;i++){
//         if(frequency[arr[i]]>0){
//             printf("%d : %d\n",arr[i],frequency[arr[i]]);
//         }
//     }
// }

// int main(){
//     int arr[] = {1,2,3,33,2,23,4,2,33,3,14,4};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     findUniqueElements(arr,n);
// }


// void findGreatestandSecondGreatestElemtnt(int arr[],int n){
//     int greatest_first = -99999;
//     int greatest_second = -99999;
//     for(int i=0;i<n;i++){
//         if(arr[i]>greatest_first){
//             greatest_second = greatest_first;
//             greatest_first  = arr[i];
//         }
//     }
//     printf("The greatest number is %d\n",greatest_first);
//     printf("The second greatest number is %d\n",greatest_second);
// }

// int main(){
//     int arr[4] = {3,6,5,2};
//     findGreatestandSecondGreatestElemtnt(arr,4);
// }


// int sumOfSeries(int n){
//     int fact =1;
//     if(n==0) return 0;
//     for(int i=1;i<=n;i++){
//         fact *=i;
//     }
//     return fact;
// }

// int sumOfSeriesUsingFactorial(int n){
//     if (n==1) return 1;
//     return n*sumOfSeriesUsingFactorial(n-1);
// }
// int main(){
//     int sum = 0;
//     int n=5;
//     for(int i=1;i<n;i++){
//         sum = sumOfSeriesUsingFactorial(i)+sum;
//     }
//     printf("%d",sum+1);
// }


void selectionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minIndex = i;
        int temp=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }

    }   

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    } 

}

int main(){
    int arr[4] = {4,2,3,5};
    for(int i=0;i<=3;i++){
        printf("%d\n",arr[i]);
    }
    selectionSort(arr,4);
}






// int fibbonacci(int n){
//     if(n==1||n==0) return n;
//     return fibbonacci(n-1)+fibbonacci(n-2); 
// }

// int main(){
//     for(int i=0;i<10;i++){
//         printf("%d ",fibbonacci(i));
//     }
//     return 0;
// }