#pragma once
#include "exp2Header.h"
#include "Exp2ProductionRule.h"

/*
�����ķ�
�ķ��ɷ��ս�����ս��������ʽ���
����ʽ�еĦ�ʹ��$����
*/
class Exp2Grammar {
private:
    /*
    �涨����ʽ�ĳ������ֵ
    */
    int ruleMaxLen = 50;
    /*
    ��¼��ʼ��
    */
    char startSymbol;
    /*
    ���в���ʽ
    */
    vector<Exp2ProductionRule> rules;
    /*
    ���ղ���ʽ����˳���¼���з��ս��
    */
    vector<char> nonTerminalVec;
    /*
    �ս������ս������
    */
    set<char> terminal, nonTerminal;
    /*
    FIRST����FOLLOW��
    */
    map<char, set<char>> firstSet, followSet;
    /*
    Ԥ�������
    */
    map<char, map<char, set<Exp2ProductionRule>>> predictTable;
    /*
    �ս������ս���ĸ����Լ�����ʽ�ĸ���
    */
    int symbolNumber, ruleNumber;
    /*
    �Ƿ���LL(1)�ķ�
    */
    bool isll1 = true;
    /*
    ���������
    */
    istringstream scin;
    ostringstream scout;
public:
    /*
    �����ķ�

    ��ȡ�ķ�
    ����FIRST��
    ����FOLLOW��
    ����Ԥ�������
    ����
    */
    Exp2Grammar(string &data);

    /*
    ������м���
    */
    void clear();
    /*
    ȷ���ս������ս��
    ��ÿ������ʽ������Ϊһ�����ս��������Ӧ�ļ�����
    ȷ�����ս���󣬽�ÿ���Ƿ��ս�������ս��������
    */
    void getTerminalAndNon();
    /*
    �ӱ�׼���������ȡ�ķ��Ĳ���ʽ

    �����ķ���ʽ��left right
    ������ʽ���Цţ���ʹ��$����
    Ĭ��������ķ�ΪLL(1)�ķ�
    */
    void readRules();
    /*
    ����ķ�

    �������ʽ���ս���Լ����ս��
    */
    void printGrammar();
    /*
    ����first��
    */
    void generateFirst();
    /*
    ����follow��
    */
    void generateFollow();
    /*
    ����Ԥ�������
    */
    void generatePredictTable();
    /*
    ��ʼ����
    */
    bool startParse(const string &str);
    string getOutputStr();
    /*
    ����
    */
    ~Exp2Grammar();
};
