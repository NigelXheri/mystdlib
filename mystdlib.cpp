#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mystdlib.h"


void printArr(char arr[], int size){
	for(int i = 0; i < size; i++){
		printf("Char %d: %c\n", i, arr[i]);
	}
}
void printArr(int arr[], int size){
	for(int i = 0; i < size; i++){
		printf("Int %d: %d\n", i, arr[i]);
	}
}

int* getNum(int size){
	int *ptr = (int *) malloc(size*sizeof(int));
	populateNumList( ptr, size);
	return ptr;
}

void populateNumList(int *list, int size){
	for(int i = 0; i < size; i++){
		scanf("%d", list+i);		
	}
}

void cpyarr(int *src, int *dst, int size){
	for(int i = 0; i < size; i++){
		*(dst+i)=*(src+i);
	}
}

void sort(int *src, int size){
	int temp;
	
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if(src[j]<src[i]){
				swap(&src[j], &src[i]);
			}
		}	
	}
		
}

void sort(int *src, int size, int selector){
	
	int temp;
	if( selector == 1){
		for(int i = 0; i < size; i++){
			for(int j = i+1; j < size; j++){
				if(src[j]<src[i]){
					swap(&src[j], &src[i]);
				}
			}	
		}
	}
	else {
		for(int i = 0; i < size; i++){
			for(int j = i+1; j < size; j++){
				if(src[j]>src[i]){
					swap(&src[j], &src[i]);
				}
			}	
		}
	}
	
}

void sort(int *src, int *dst, int size){
	
	cpyarr(src, dst, size);
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if(dst[j]<dst[i]){
				swap(&dst[i], &dst[j]);
			}
		}	
	}
}

void sort(int *src, int *dst, int size, int selector){
	cpyarr(src, dst, size);
	if( selector == 1){
		for(int i = 0; i < size; i++){
			for(int j = i+1; j < size; j++){
				if(dst[j]<dst[i]){
					swap(&dst[i], &dst[j]);
				}
			}	
		}
	}
	else {
		for(int i = 0; i < size; i++){
			for(int j = i+1; j < size; j++){
				if(dst[j]>dst[i]){
					swap(&dst[i], &dst[j]);
				}
			}	
		}	
	}
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;	
}

int sum(int numbers[], int size){
	int sum = 0;
	for( int i = 0; i < size; i++){
		sum += numbers[i];
	}
	return sum;
}

float average(int numbers[], int size){

	float average = float(sum(numbers, size)) / size;
	return average;
}

int min(int numbers[], int size){
	int min = numbers[0];
	for(int i = 0; i < size; i++){
		if(min>numbers[i]){
			min = numbers[i];
		}
	}
	return min;
}

int max(int numbers[], int size){
	int max = numbers[0];
	for(int i = 0; i < size; i++){
		if(max<numbers[i]){
			max = numbers[i];
		}
	}
	return max;
}

void reverseChar(char *src) {
    int len = strlen(src);

	printf("String Length: %d\n",len);
    for (int i = 0; i < (len / 2); i++) {
    	char temp = *(src+i);
        src[i] = src[len - 1 - i];
        src[len - 1 - i] = temp;
    }

}

void reverseChar(char *src, char *dst) {
    int len = strlen(src);

    for (int i = 0; i < len; i++) {
        dst[i] = src[len - 1 - i];
    }
}


void reverseInt(int *src, int size){

	for(int i = 0; i < size / 2; i++){
		int temp = *(src+i);
        src[i] = src[size - 1 - i];
        src[size - 1 - i] = temp;
	}
}
void reverseInt(int *src, int *dst, int size){
	
	for(int i = 0; i < size; i++){
        dst[i] = src[size - 1 - i];
	}
	
}

int primeNum(int list[], int size){
	int count = 0;
	int isPrime = 0;
	for(int i = 0; i < size; i++){
		if(list[i]>1){
			for(int j = list[i]-1; j>1 ; j--){
				printf("Value %d:%d\n", i, j);
				if(list[i]%j == 0){
					printf("Breaking Value %d:%d\n", i, j);
					isPrime = 0;
					break;
				}
				else{
					isPrime = 1;
				}
			}		
		}
		else{
			isPrime = 0;
			continue;
		}
			
		if(isPrime == 1){
			printf("Eshte prim %d\n", list[i]);
			count++;
		}
	}
	printf("count at the end = %d", count);
	return count;
}

