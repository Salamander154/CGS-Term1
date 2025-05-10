#include "ResizeableArray.h"


template <typename T>
void ResizeableArray<T>::resize(int i)
{
	T newArray[i];
	for (int r = 0; r < size; r++;)
	{
		newArray[r] = array[r];
	}
	array = newArray;
	size = i;
}
template <typename T>
ResizeableArray<T>::ResizeableArray()
	:size(2)
	,array[2]
	,index(0)
{
	
}
template <typename T>
ResizeableArray<T>::~ResizeableArray()
{

}
template <typename T>
void ResizeableArray<T>::insert(T element)
{
	array[index] = element;
	index += 1;
	if (index >= size)
	{
		resize(size * 2);
	}
}
template <typename T>
T ResizeableArray<T>::remove()
{
	T t = array[index - 1];
	index -= 1;
	if (index <= size / 4)
	{
		resize(size / 2);
	}
	return t;
}