/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"
#include <stdio.h>
#include <stdlib.h>

void
programa_calculadora_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	numeros  suma_1_arg;
	int  *result_2;
	numeros  resta_1_arg;
	int  *result_3;
	numeros  multiplicacion_1_arg;
	float  *result_4;
	numeros  division_1_arg;
	int a,b;

#ifndef	DEBUG
	clnt = clnt_create (host, PROGRAMA_CALCULADORA, VERSION_CALCULADORA, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	printf("Dame los dos numeros\n");
	scanf ("%d%d",&a,&b);

	suma_1_arg.numero1 = a;
	suma_1_arg.numero2 = b;
	resta_1_arg.numero1 = a;
	resta_1_arg.numero2 = b;
	multiplicacion_1_arg.numero1 = a;
	multiplicacion_1_arg.numero2 = b;
	division_1_arg.numero1 = a;
	division_1_arg.numero2 = b;

	result_1 = suma_1(&suma_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = resta_1(&resta_1_arg, clnt);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = multiplicacion_1(&multiplicacion_1_arg, clnt);
	if (result_3 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_4 = division_1(&division_1_arg, clnt);
	if (result_4 == (float *) NULL) {
		clnt_perror (clnt, "call failed");
	}

	printf("%d + %d = %d\n",a,b,*result_1);
	printf("%d - %d = %d\n",a,b,*result_2);
	printf("%d * %d = %d\n",a,b,*result_3);
	printf("%d / %d = %f\n",a,b,*result_4);

#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	programa_calculadora_1 (host);
exit (0);
}
