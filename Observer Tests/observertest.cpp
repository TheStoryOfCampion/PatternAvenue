#include <iostream>
#include <string>
#include <vector>
#include "Census.h"
#include "Civilians.h"
#include "SubjectCivilians.h"
#include "Summary.h"
#include <gtest/gtest.h>
#include <limits.h>
#include <stdexcept>

namespace 
{
TEST( Censusclass ,censusUpdateobject)
	{
		 Census* censusUpdate = new Census(450,"me",3);
	    string answer=censusUpdate->threatReport(2);
		
		EXPECT_EQ(censusUpdate->threatReport(2),answer);
		
	}
    TEST( Censusclass2 ,censusUpdateobject)
	{
		 Census* censusUpdate = new Census(4340,"mher",4);
	    string answers=censusUpdate->threatReport(2);
		
		EXPECT_EQ(censusUpdate->threatReport(2),answers);
		
		
	}
}