/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to char to be updated.
 * @to: Pointer to char to update to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
