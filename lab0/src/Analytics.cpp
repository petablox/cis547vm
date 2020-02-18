#include "Analytics.h"

using namespace llvm;

namespace analytics {
Analytics::Analytics() : ModulePass(ID) {}

void Analytics::print(Module &M) {
  outs() << "Analytics of Module " << M.getName() << "\n";
  outs() << "  # Functions    : " << NumOfFunctions << "\n";
  outs() << "  # Instructions : " << NumOfInstructions << "\n";
  outs() << "Instruction count of each kind:\n";
  outs() << "  # Binary       : " << NumOfBinaryInstrs << "\n";
  outs() << "  # Branch       : " << NumOfBranchInstrs << "\n";
  outs() << "  # Store/Load   : " << NumOfStoreLoadInstrs << "\n";
}

bool Analytics::runOnModule(Module &M) {
  /* Add your code here */

  /* DO NOT EDIT BELOW THIS LINE */
  print(M);
  return false;
}

char Analytics::ID = 1;
static RegisterPass<Analytics> X("Analytics", "Analytics", false, false);
} // namespace analytics
