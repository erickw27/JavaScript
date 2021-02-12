# include <stdio.h>
# include <stdlib.h>

void main()

{
	int x,y;
	
	for (x=1;x<=4;x++)
	{
		for (y=1; y<=4; y++)
	{
	if (y<4)
	printf("%d \t", x*y);
	else
	printf("%d \n", x*y);
	}
	}

}
