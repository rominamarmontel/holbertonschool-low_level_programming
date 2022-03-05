#include "main.h"
#include "stdio.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: param
 * @n: param
 * Return: rien
 */
void reverse_array(int *a, int n)/*SEE 0x05 Q5*/
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)/* i wa n no hanbun yori chiisai*/
	{
		temp = a[i];/*temp ni 0 wo dainyu */
		a[i] = a[n - i - 1];/*14 - 0 - 1 = 13 wo 0 ni dainyu*/
		a[n - i - 1] = temp;
	}
}
