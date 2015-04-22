#include <iostream>

#include "llSeqOrd.h"
#include "llSeqReg.h"

static std::string boolToString(int val);
static void print(std::string command);

int main(int argc, char const *argv[])
{
    { // Testes para LLSeqOrd
        print("LLSeqOrd *llseqord = new LLSeqOrd()");
        LLSeqOrd *llseqord = new LLSeqOrd();

        print("llseqord->insercao(1, \"foo\")");
        std::cout << boolToString(llseqord->insercao(1, "foo")) << std::endl;

        print("std::string info");
        std::string info;

        print("llseqord->busca(1, info)");
        std::cout << boolToString(llseqord->busca(1, info)) << std::endl;

        print("info");
        std::cout << info << std::endl;

        print("llseqord->length()");
        std::cout << llseqord->length() << std::endl;
    }

    std::cout << "\n--------------------------------------------------------\n\n";

    { // Testes para LLSeqReg
        print("LLSeqReg *llseqreq = new LLSeqReg()");
        LLSeqReg *llseqreq = new LLSeqReg();

        print("llseqreq->insercao(1, \"foo\")");
        std::cout << llseqreq->insercao(1, "foo") << std::endl;

        print("std::string info");
        std::string info;

        print("llseqreq->busca(1, info)");
        std::cout << boolToString(llseqreq->busca(1, info)) << std::endl;

        print("info");
        std::cout << info << std::endl;

        print("info = \"\"");
        info = "";

        print("llseqreq->remocao(1, info)");
        std::cout << boolToString(llseqreq->remocao(1, info)) << std::endl;

        print("info");
        std::cout << info << std::endl;
    }

    return 0;
}

static std::string boolToString(int val)
{
    return val ? "true" : "false";
}

static void print(std::string command)
{
    std::cout << ">>> " << command << std::endl;
}
