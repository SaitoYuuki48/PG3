#include "Headphone.h"
#include <stdio.h>

Headphone::Headphone()
{
	name = "�w�b�h�z��";
}

Headphone::~Headphone()
{
}

void Headphone::Sound()
{
	printf("%s\n", name);
}
