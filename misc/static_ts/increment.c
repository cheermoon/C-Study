int increment(int i)
{	
	static int j = 0;
	j++;
	return i + j;
}
