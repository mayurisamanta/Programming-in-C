/* Write a C program, to find transpose of a matrix. */

#include <stdio.h>

int main(){
	int row, col;
	
	scanf("%d", &row);
	scanf("%d", &col);
	
	int matrix[row][col];
	int transposeMatrix[col][row];
	
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			scanf("%d", &matrix[i][j]);
			transposeMatrix[j][i] = matrix[i][j];
		}
	}
	
	for (int i = 0; i < col; i++){
		for (int j = 0; j < row; j++){
			printf("%d ", transposeMatrix[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}