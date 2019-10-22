#include <sevencpp_core/test/testing_entrypoint.h>

namespace {{cookiecutter.package_name}}

class {{cookiecutter.class_name_camel_case}}Test : public ::testing::Test {
 protected:
  {{cookiecutter.class_name_camel_case}}() = default;

  //static constexpr double kNullConstant = 0;
};

TEST_F(
    {{cookiecutter.class_name_camel_case}}Test, ExampleTestName) {

  CHECK_EQ(0, kNullConstant);
}

} // namespace {{cookiecutter.package_name}}

SEVENCPP_UNITTEST_ENTRYPOINT
