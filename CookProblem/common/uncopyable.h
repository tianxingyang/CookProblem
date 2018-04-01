#pragma once
class Uncopyable
{
public:
  Uncopyable() {}
  ~Uncopyable() {}

private:
  Uncopyable(const Uncopyable&);
  Uncopyable& operator=(const Uncopyable&);
};
