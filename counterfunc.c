#include<stdio.h>
{/* NAME: Mavuzeeh Devzukakan
COMPS DIV: C
ROLL NO: 60 VIN: 25-2
*/
void counter ()
static int count =0; count++;
printf ("Number of time function is called is &d\n", count);
｝

int main ()
{
counter ();
counter (); 
counter ();
}