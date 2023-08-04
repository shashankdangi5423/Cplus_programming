#include "monotonic_time.h"

namespace my_time{
namespace time {
MonotonicTimePointFactory* MonotonicTimePointFactory::GetInstance() {
  static MonotonicTimePointFactory factory;

  return &factory;
}
}  // namespace time
}

