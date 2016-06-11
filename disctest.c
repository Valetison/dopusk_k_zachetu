#include "disc.h"
#include "ctest.h"

CTEST(quad_suite, test_quad_equation1) 
{
	const double a = 4, b = 16, c = 12;

        double x1, x2;

 	urav (a, b, c, &x1, &x2);
 
	const double expected_x1 = -3;
	const double expected_x2 = -1;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}

CTEST(quad_suite, test_quad_equation2) 
{
	const double a = 8, b = 32, c = 24;

        double x1, x2;

 	urav (a, b, c, &x1, &x2);
 
	const double expected_x1 = -3;
	const double expected_x2 =  -1;

	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}
