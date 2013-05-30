#include "pass_generator.h"


int main (int argc, char** argv){
	srand( time( NULL ) );
	int rez = 0;
	int N = 8;
	int M = 1;
	int i=0;
	int j=0;
	int counter=0;
printf (" For help use command '-h' \n");

while ( (rez = getopt(argc,argv,"hl:Anpc:")) != -1){
	switch (rez){
		case 'l':
			if (atoi(optarg) > 0) N = atoi(optarg);
			else printf ("Error! Enter password length. Please, try again!");
			break;
		case 'A': counter += 5; break;
		case 'n': counter += 7; break;
		case 'p': counter += 11; break;
		case 'c':
			if (atoi(optarg) > 0) M = atoi(optarg);
			else printf ("Error! Please, try again!");
			break;
		case '?': {
			printf("Error found !\n");
			M=0;
			N=0;
			}
			break;
		case 'h':
			printf ("Please, if you want to get password(-s), please enter:\n"
				"-l N ~ length of password\n"
				"-A ~ uppercase characters\n"
				"-n ~ numbers\n"
				"-p ~ punctuation marks\n"
				"-c N ~ number of passwords\n"
				" If you want any password enter 'enter' and you get password a password of 8 characters. For example: \n");
        	};
};


if ((M != 0) && (N != 0)) {
	char mas[N][M];
	printf ("Your password(s): \n");
	for (i=0; i<M; i++){
		printf("%d) ",i+1);
		for (j=0; j<N; j++)
		printf("%c",mas[i][j] = get_rand(counter));
		printf ("\n");
	};
};
}







