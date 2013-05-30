char get_rand_letter(){

	switch (rand()%2){
		case 0: return rand()%25 + 'a';
		case 1: return rand()%25 + 'A';
	};

}

char get_rand_number(){

	return rand()%10 + '0';

}

char get_rand_punkt_mark(){

	switch (rand()%4){
		case 0: return rand()%14 + '!';
		case 1: return rand()%6 + ':';
		case 2: return rand()%6 + ':';
		case 3: return rand()%4 + '{';
	};
}

char get_rand(int counter){
	switch (counter){

		case 0: case 5: return get_rand_letter();

		case 7: return get_rand_number();

		case 11: return get_rand_punkt_mark();

		case 12:
			switch(rand()%2){
				case 0: return get_rand_letter();
				case 1: return get_rand_number();
			};
		case 16:
			switch(rand()%2){
				case 0: return get_rand_letter();
				case 1: return get_rand_punkt_mark();
			};
		case 18:
			switch(rand()%2){
				case 0: return get_rand_number();
				case 1: return get_rand_punkt_mark();
			};
		case 23:
			switch(rand()%3){
				case 0: return get_rand_letter();
				case 1: return get_rand_number();
				case 2: return get_rand_punkt_mark();
			};
		default: printf ("Error!");
	};
}
