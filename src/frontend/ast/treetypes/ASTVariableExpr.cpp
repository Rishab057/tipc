#include "ASTVariableExpr.h"
#include "ASTVisitor.h"

void ASTVariableExpr::accept(ASTVisitor * visitor) {
  visitor->endVisit(this);
}

std::ostream& ASTVariableExpr::print(std::ostream &out) const {
  out << getName();
  return out;
}

