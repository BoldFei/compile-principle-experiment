#pragma once
#include "exp1Header.h"

/*
�ʷ�������Ԫ��
�������ö�Ԫ���ֵ�Լ���Ԫ������
*/
class Exp1WordTuple {
private:
    string word;
    int len;
    int typeCode;
public:
    Exp1WordTuple(const string &source, int tc);
    void printWord();
    ~Exp1WordTuple();
};