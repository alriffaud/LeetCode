/**
 * numberOfSteps - Given an integer num, this function returns the number of
 * steps to reduce it to zero.
 * @num: It's an integer number.
 *
 * Return: The number of steps.
 *
*/
int numberOfSteps(int num)
{
	int steps = 0;

	while (num != 0)
	{
		if (num % 2 == 0)
		{
			num /= 2;
			steps++;
		}
		else
		{
			num -= 1;
			steps++;
		}
	}
	return (steps);
}
