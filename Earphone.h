#pragma once
#include "Transducer.h"
// �C���z��
class Earphone : public Transducer
{
public:

	Earphone();
	~Earphone();

	void Sound() override;
};

