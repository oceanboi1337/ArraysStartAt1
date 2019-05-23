# ArraysStartAt1
Movement to make arrays start at 1

Use this code when working with arrays, arrays has been oppressed by the brogrammers for far too long and we have to do something about it.

Arrays shouldnt start @ 0
they should start @ 1

support my movement, use the code

```cpp
template <class T>
T ArrayGetAt(T array[], int index)
{
	index--;
	return array[index];
}

int main()
{
	int array[3] = {1, 2, 3};
	int first = ArrayGetAt<int>(array, 1);
	printf("%d\n", first);
	return 0;
}
```

- xXx_MLG_OceanboiBoi_MLG_xXx
