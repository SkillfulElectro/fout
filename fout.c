#include <stdio.h>

int main(int argc , char* argv[]){
	switch(argc){
		case 1:
			printf("call syntax : app filename out\n");
			break;
		case 2:
			FILE* file_p = fopen(argv[1] , "r");
			if (file_p == NULL){
				printf("failed to open the file\n");
				fclose(file_p);
				return -1;
			}
			char buffer[100];
			while(fgets(buffer , 100 , file_p) != NULL){
				printf("%s" , buffer);
			}
			printf("\n");
			fclose(file_p);
			break;
		case 3:
			FILE *f_read = fopen(argv[1], "r");
   			if (f_read == NULL) {
        			printf("Unable to open the file.\n");
				fclose(f_read);
        			return -1;
    			}
			FILE* f_write = fopen(argv[2],"a");
			if (f_write == NULL){
				printf("Unable to write a file\n");
				fclose(f_read);
				fclose(f_write);
				return -1;
			}
			char buffer_copy[1024];
			while(fgets(buffer_copy , 1024 , f_read) != NULL){
				fputs(buffer_copy , f_write);
			}
			fclose(f_read);
			fclose(f_write);
			printf("finished copying the file\n");
			break;
		default:
			printf("too many arg\n");
	}
	return 0;
}


