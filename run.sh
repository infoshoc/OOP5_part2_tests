#!/bin/bash

should_fail() {
	if [[ $? -eq 0 ]]
	then
		echo "failed at line $1";
		exit 1;
	fi
}

should_pass() {
	if [[ $? -ne 0 ]]
	then
		echo "failed at line $1";
		exit 1;
	fi
}
g++ -std=c++11 listTest.cpp -o listTest &> /dev/null
should_pass $LINENO
./listTest
should_pass $LINENO
g++ -std=c++11 listTestEmptyNoHead.cpp -o listTestEmptyNoHead &> /dev/null
should_fail $LINENO;
g++ -std=c++11 listTestEmptyNoHead1.cpp -o listTestEmptyNoHeaad1 &> /dev/null
should_fail $LINENO;
g++ -std=c++11 listTestEmptyNoNext.cpp -o listTestEmptyNoNext &> /dev/null
should_fail $LINENO;
g++ -std=c++11 listTestPrepend.cpp -o listTestPrepend &> /dev/null
should_pass $LINENO;
./listTestPrepend
should_pass $LINENO;
g++ -std=c++11 listTestPrepend1.cpp -o listTestPrepend1 &> /dev/null
should_fail $LINENO;
g++ -std=c++11 listTestGetAt.cpp -o listTestGetAt &> /dev/null
should_pass $LINENO;
./listTestGetAt
should_pass $LINENO;
g++ -std=c++11 listTestSetAt.cpp -o listTestSetAt &> /dev/null
should_pass $LINENO;
./listTestSetAt
should_pass $LINENO;
g++ -std=c++11 utilitiesTest.cpp -o utilitiesTest &> /dev/null
should_pass $LINENO;
./utilitiesTest
should_pass $LINENO;
g++ -std=c++11 compile_basic_ds_test.cpp -o compile_basic_ds_test &> /dev/null
should_pass $LINENO;
#g++ -std=c++11 testMove.cpp -o testMove &> /dev/null
#should_pass $LINENO;
#./testMove.cpp
#should_pass $LINENO;
