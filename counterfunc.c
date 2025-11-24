#include<stdio.h>
{/* NAME: Mavuresh Devrukhkar
COMPS DIV: C
ROLL NO: 60 VIN: 251P071
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
