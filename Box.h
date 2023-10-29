#pragma once

template <typename Type>

class Box
{
public:
	Type n1;
	Type n2;

	Box(Type n1, Type n2) :n1(n1), n2(n2) {};

	Type Min() {
		if (n1 < n2) {
			return static_cast<Type>(n1);
		}

		if (n1 > n2) {
			return static_cast<Type>(n2);
		}
	}
};