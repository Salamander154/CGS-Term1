#pragma once

template <typename T>
class ResizeableArray
{
private:
	T array[];
	int size;
	int index;
	void resize(int i);
public:

	ResizeableArray();

	~ResizeableArray();

	void insert(T element);

	T remove();
};