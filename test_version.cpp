#define BOOST_TEST_MODULE helloworld_test_module

#include "gogot.h"

#include "test_version.cpp"

BOOST_AUTO_TEST_SUITE(helloworld_test_suite)

BOOST_AUTO_TEST_CASE(helloworld_test_version)
{
    BOOST_CHECK(version() > 0);
}

BOOST_AUTO_TEST_SUITE_END()
