#pragma once

#include <windows.h>

class AtomicPointer
{
public:
  AtomicPointer() {}

  explicit AtomicPointer(void* p) : rep_(p) {}

  inline void* NoBarrier_Load() const { return rep_; }

  inline void NoBarrier_Store(void* v) { rep_ = v; }

  inline void* Acquire_Load() const 
  {
    void* result = rep_;
    MemoryBarrier();
    return result;
  }

  inline void Release_Store(void* v) 
  {
    MemoryBarrier();
    rep_ = v;
  }

private:
  void* rep_;
};

