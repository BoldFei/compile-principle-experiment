#pragma once
#include "exp1Header.h"
#include "Exp1WordTuple.h"

/*
�ʷ�������
����
*/
class Exp1WordAnalyzer {
public:
    /*
    ���������

    ����Դ����
    Ԥ�����������
    �����ʷ�
    �����������
    */
    Exp1WordAnalyzer(string &data);
    /*
    Ԥ����ɾ������Ŀո񣬻��У��س����Ʊ����ע��

    spaceGot���Ѿ�������һ�����ո����ַ����������������С��ո��ࡱ�ַ����ᱻ����
    lineCommentGot���Ѿ������ˡ�//�������������ַ����ᱻ���ԣ�ֱ�������س��ַ�
    blockCommentGot���Ѿ������ˡ�/*�������������ַ����ᱻ���ԣ�ֱ��������*#(ȥ��#)/��
    stringGot��Ӧ�����ˡ�"�������������ַ����ᱻ���ԣ�ֱ��������һ����"��

    ��ǰ�����ַ�λ��
    1.�ַ�����ʱ�����Կո�ע�͵�Ӱ��
    2.ע����ʱ�������ַ������ո���һ��ע�͵�Ӱ��

    input: ������Ĵ�������󳤶���ȫ�ֱ���maxnָ��
    output: ��������λ�ã�����󳤶���ȫ�ֱ���maxnָ��
    */
    void preprocess(const string &input, string &output);
    /*
    �Ƿ�����ĸ
    */
    bool isLetter(char ch);
    /*
    �Ƿ�������
    */
    bool isDigit(char ch);
    /*
    �ʷ���������ʶ����ĵ��ʷ���һ����Ԫ��������

    input: ��������봮
    output: ����������λ��
    return: ������õ���Ԫ����Ŀ
    */
    int wordParse(const string &input, vector<Exp1WordTuple> &output);
    string getOutputStr();
    ~Exp1WordAnalyzer();
private:
    ostringstream scout;
};