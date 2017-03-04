//
// Created by Arseny Tolmachev on 2017/03/04.
//

#include "util/serialization.h"
#include "testing/standalone_test.h"

using namespace jumanpp;
using namespace jumanpp::util::serialization;

struct Test {
  i32 a;
};

template <typename Arch>
void Serialize(Arch& a, Test& o) {
  a& o.a;
}

enum class TestClass { A, B, C };

SERIALIZE_ENUM_CLASS(TestClass, int)

TEST_CASE("serialization works with small object") {
  Test a = {5};
  Saver s;
  s.save(a);
  Loader l{s.result()};
  Test b;
  CHECK(l.load(&b));
  CHECK(a.a == b.a);
}

TEST_CASE("serialization works with vector of strings") {
  std::vector<std::string> data{"a", "b", "c"};
  Saver s;
  s.save(data);
  Loader l{s.result()};
  std::vector<std::string> d2;
  CHECK(l.load(&d2));
  CHECK(d2.size() == 3);
  CHECK(d2[0] == "a");
  CHECK(d2[1] == "b");
  CHECK(d2[2] == "c");
}

TEST_CASE("serialization works with enum classes") {
  auto data = TestClass::C;
  Saver s;
  s.save(data);
  Loader l{s.result()};
  TestClass d2 = TestClass::A;
  CHECK(l.load(&d2));
  CHECK(d2 == TestClass::C);
}