#pragma once
// �ϊ���
class Transducer
{
public:

	Transducer();

	~Transducer();

	virtual void Sound();

protected:
	const char *name;
};

