#include <utility>
#include <memory>
#include <string>


class ExprAST {
public:
    virtual ~ExprAST() = default;
    std::string Repr(){ //Not as useful as I would like
        return "Not Implemented";
    }
};

static std::unique_ptr<ExprAST> ParseExpression();
static std::unique_ptr<ExprAST> ParseBinOpRHS(int ExprPrec, std::unique_ptr<ExprAST> LHS);