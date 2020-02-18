#include "llvm/IR/Module.h"

using namespace llvm;

namespace analytics {
struct Analytics : public ModulePass {
  static char ID;
  Analytics();

  bool runOnModule(Module &M);
  void print(Module &M);

  int NumOfFunctions = 0;
  int NumOfInstructions = 0;

  int NumOfBranchInstrs = 0;
  int NumOfBinaryInstrs = 0;
  int NumOfStoreLoadInstrs = 0;
};
} // namespace analytics
