# integer overflow example

Based on the example on p 68, code for understanding the intrger overflow when calculating 200 * 300 * 400 * 500 in C. Output is

```
Max values:
	INT_MAX:	2147483647
	LONG_MAX:	9223372036854775807

Results from calculating '200 * 300 * 400 * 500' in different datatypes:
	int:		-884901888
	long		12000000000
```
