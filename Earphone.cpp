#include "Earphone.h"
#include <stdio.h>

Earphone::Earphone()
{
	name = "�C���z��";
}

Earphone::~Earphone()
{
}

void Earphone::Sound()
{
	printf("%s\n", name);
}
