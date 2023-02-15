#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int i,j, rows;
   	cout<<"TEKNIK INFORMATIKA"<<endl;
   	cout<<endl;
	printf("Enter the number of rows\n");
	scanf("%d", &rows);

	cout<<"PROGRAM C++"<<endl;
	cout<<endl;
	
	/* printing top semi circular shapes of heart */
	for(i = rows/2; i <= rows; i+=2){
		/* printing spaces */
		for(j = 1; j < rows-i; j+=2) {
			printf(" ");
		}
		/* printing stars for left semi circle */
		for(j = 1; j <= i; j++){
			printf("I");
		}
		/* printing space */
		for(j = 1; j <= rows-i; j++){
			printf(" ");
		}
		/* printing stars for left semi circle */
		for(j = 1; j <= i; j++){
			printf("L");
		}
		printf("\n");
    }
	/* printing inverted start pyramid */
    for(i = rows; i >= 1; i--){
    	for(j = i; j < rows; j++){
    		printf(" ");
    	}
	    for(j = 1; j <= (i*2)-1; j++){
	    	printf("v");
    	}
    	/* move to next row */
    	printf("\n");
    }
	    return 0;
}
