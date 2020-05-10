#include "llvm/IR/Constants.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/InstIterator.h"
#include "llvm/IR/Module.h"
#include "llvm/Pass.h"

using namespace llvm;

namespace instrument {

struct CBIInstrument : public FunctionPass {
  static char ID;

  CBIInstrument() : FunctionPass(ID) {}

  bool runOnFunction(Function &F) override;
};
} // namespace instrument
