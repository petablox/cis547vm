#include "DivZeroAnalysis.h"

namespace dataflow {

//===----------------------------------------------------------------------===//
// DivZero Analysis Implementation
//===----------------------------------------------------------------------===//

/**
 * Implement your data-flow analysis.
 * 1. Define "transfer" that computes the semantics of each instruction.
 * 2. Define "check" that checks if a given instruction is erroneous or not.
 */


void DivZeroAnalysis::transfer(Instruction *I, const Memory *In, Memory *NOut) {
  /* Write you code here. */
}

bool DivZeroAnalysis::check(Instruction *I) {
  /* Write your code here. */
  return false;
}

} // namespace dataflow
