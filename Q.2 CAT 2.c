#include <stdio.h>
int main() {
	int scores[2][2][2]={{{65,92},{84,72}},{{35,70},{59,67}}};
	for(int i=0;i<2;i++){
	    for(int j=0;j<2;j++){
	        for(int k=0;k<2;k++){
	            printf("scores[%d][%d][%d]=%d\n", i,j,k, scores[i][j][k]);
	        }
	    }
	}
	return 0;
}