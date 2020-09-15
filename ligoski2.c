#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*Importei Time para comparar os tempos em milisegundos, porém não deu tão certo e estou sem paciência para implementar os micro ou nanosegundos"*/
int main()
{
	/*a historia do start stop é auto explicativa*/
	time_t start, stop, tempo;
	start = time(NULL);
	/*int fatorial(int n);*/
	/*codigo do professor*/
	/*int pascal(int n, int k);*/
	/*codigo otimizado com loop*/
	int pascal(double n, double k);
	int x = pascal(30, 15);
	printf("%d\n", x);
	stop = time (0);
	tempo = stop - start;
	printf("%ld\n", tempo);
	return 0;
}

double fatorial_MUDADO(int n) {
	if (n==0){
        return 1;
  }
	return n*fatorial_MUDADO(n-1);
}

/*codigo do berger*/
/*int pascal(int n, int k) {
	if (n < k) {
		printf("erro");
		exit(1);
	}
	if ((k == 0) || (n == k)) return 1;
	return pascal(n - 1, k - 1) + pascal(n - 1, k);
}*/

/*codigo otimizado*/
int pascal(double n, double k) {
	if (n < k) {
		printf("error: n<k");
		exit(1);
	}
	double fatorialN;
	double fatorialK;
	double fatorialNK;
		fatorialN = fatorial_MUDADO(n);
	
		fatorialK = fatorial_MUDADO(k);
	
		fatorialNK = fatorial_MUDADO(n-k);
	double x = fatorialN / (fatorialK * fatorialNK);
	return x;
}
