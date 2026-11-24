#include<stdio.h>

void addition(int row, int column,int A[row][column],int B[row][column],int C[row][column]){

    int i,j;

    /*Taking input in A*/

    printf("Enter 1st matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("array[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    /*Taking input in B*/

    printf("Enter 2nd matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("array[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}

void subtraction(int row, int column,int A[row][column],int B[row][column],int C[row][column]){

    int i,j;

    printf("Enter 1st matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("array[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    /*Taking input in B*/

    printf("Enter 2nd matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("array[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            C[i][j]=A[i][j]-B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}

void transpose(int row, int column,int A[row][column],int C[column][row]){

    int i,j;

    /*Taking input in A*/

    printf("Enter 1st matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("array[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            C[j][i]=A[i][j];
        }
    }
        for(i=0;i<column;i++){
            for(j=0;j<row;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");

    }
}


int main(){

    //Taking row and column input for matrices

    int row,column,option;


    printf("Enter size of matrix(row column): ");
    scanf("%d %d",&row,&column);

    printf("Choose an option:\n1. addition of two matrices\n2. subtraction of two matrices\n3. transpose of a matrix\n");
    printf("Your choice: ");
    scanf("%d",&option);

    switch(option){

        case 1: {
                int A[row][column];                             //Assigning row and column number to A Array
                int B[row][column];                             //Assigning row and column number to B Array
                int C[row][column];
                addition(row,column,A,B,C);
                break;
                }
        case 2: {
                int A[row][column];                             //Assigning row and column number to A Array
                int B[row][column];                             //Assigning row and column number to B Array
                int C[row][column];
                subtraction(row,column,A,B,C);
                break;
                }
        case 3: {
                int A[row][column];
                int C[column][row];
                transpose(row,column,A,C);
                break;
                }

        default:printf("Invalid input.\n");
                break;

    }


    //int A[row][column];                             //Assigning row and column number to A Array

 /*   Taking input in A

    printf("Enter 1st matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("array[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }*/

   // int B[row][column];                             //Assigning row and column number to B Array

    /*Taking input in B

    printf("Enter 2nd matrix: ");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("array[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
    }*/

 /*   int C[row][column];     //Assigning same row and column to resultant C matrix


    addition(row,column,A,B,C);         //Calling addition function
    subtraction(row,column,A,B,C);      //Calling subtraction function
    transpose(row,column,A,C);*/          //Calling transpose function

return 0;
}
