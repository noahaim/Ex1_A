#include "doctest.h"
#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

TEST_CASE("check snowman 11111111")
{
    CHECK( ariel::snowman(11111111) == string("\n _===_ \n (.,.) \n<( : )>\n ( : ) \n"));
}
TEST_CASE("check the hat")
{
    CHECK( ariel::snowman(21111111) == string("  ___  \n ..... \n (.,.) \n<( : )>\n ( : ) \n"));
    CHECK( ariel::snowman(31111111) == string("   _   \n  /_\\  \n (.,.) \n<( : )>\n ( : ) \n"));
    CHECK( ariel::snowman(41111111) == string("  ___  \n (_*_) \n (.,.) \n<( : )>\n ( : ) \n"));
}
TEST_CASE("check the nose")
{
    CHECK( ariel::snowman(12111111) == string("\n _===_ \n (...) \n<( : )>\n ( : ) \n"));
    CHECK( ariel::snowman(13111111) == string("\n _===_ \n (._.) \n<( : )>\n ( : ) \n"));
    CHECK( ariel::snowman(14111111) == string("\n _===_ \n (. .) \n<( : )>\n ( : ) \n"));
}
TEST_CASE("check the Left Eye")
{
    CHECK( ariel::snowman(11211111) == string("\n _===_ \n (o,.) \n<( : )>\n ( : ) \n"));
    CHECK( ariel::snowman(11311111) == string("\n _===_ \n (O,.) \n<( : )>\n ( : ) \n"));
    CHECK( ariel::snowman(11411111) == string("\n _===_ \n (-,.) \n<( : )>\n ( : ) \n"));
}
TEST_CASE("check the Right Eye")
{
    CHECK( ariel::snowman(11121111) == string("\n _===_ \n (.,o) \n<( : )>\n ( : ) \n"));
    CHECK( ariel::snowman(11131111) == string("\n _===_ \n (.,O) \n<( : )>\n ( : ) \n"));
    CHECK( ariel::snowman(11141111) == string("\n _===_ \n (.,-) \n<( : )>\n ( : ) \n"));
}
TEST_CASE("check  the Left Arm")
{
    CHECK( ariel::snowman(11112111) == string("\n _===_ \n\\(.,.) \n ( : )>\n ( : ) \n"));
    CHECK( ariel::snowman(11113111) == string("\n _===_ \n (.,.) \n/( : )>\n ( : ) \n"));
    CHECK( ariel::snowman(11114111) == string("\n _===_ \n (.,.) \n ( : )>\n ( : ) \n"));
}
TEST_CASE("check the Right Arm")
{
    CHECK( ariel::snowman(11111211) == string("\n _===_ \n (.,.)/\n<( : ) \n ( : ) \n"));
    CHECK( ariel::snowman(11111311) == string("\n _===_ \n (.,.) \n<( : )\\\n ( : ) \n"));
    CHECK( ariel::snowman(11111411) == string("\n _===_ \n (.,.) \n<( : ) \n ( : ) \n"));
}
TEST_CASE("check the Torso")
{
    CHECK( ariel::snowman(11111121) == string("\n _===_ \n (.,.) \n<(] [)>\n ( : ) \n"));
    CHECK( ariel::snowman(11111131) == string("\n _===_ \n (.,.) \n<(> <)>\n ( : ) \n"));
    CHECK( ariel::snowman(11111141) == string("\n _===_ \n (.,.) \n<(   )>\n ( : ) \n"));
}
TEST_CASE("check the Base")
{
    CHECK( ariel::snowman(11111112) == string("\n _===_ \n (.,.) \n<( : )>\n (\" \") \n"));
    CHECK( ariel::snowman(11111113) == string("\n _===_ \n (.,.) \n<( : )>\n (___) \n"));
    CHECK( ariel::snowman(11111114) == string("\n _===_ \n (.,.) \n<( : )>\n (   ) \n"));
}
TEST_CASE("Check some snowmens")
{
    CHECK( ariel::snowman(11114411) == string("\n _===_ \n (.,.) \n ( : ) \n ( : ) \n"));
    CHECK( ariel::snowman(33232124) == string("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) \n"));
    CHECK( ariel::snowman(12312423) == string("\n _===_ \n\\(O..) \n (] [) \n (___) \n"));
    CHECK( ariel::snowman(31423131) == string("   _   \n  /_\\  \n (-,o) \n/(> <)>\n ( : ) \n"));
    CHECK( ariel::snowman(44332412) == string("  ___  \n (_*_) \n\\(O O) \n ( : ) \n (\" \") \n"));
}
TEST_CASE("too many digits")
{
	CHECK_THROWS(ariel::snowman(123412341));
    CHECK_THROWS(ariel::snowman(111144111));
	CHECK_THROWS(ariel::snowman(143122312));
    CHECK_THROWS(ariel::snowman(1112121214));
    CHECK_THROWS(ariel::snowman(1213242112));
    CHECK_THROWS(ariel::snowman(2132423122));
}
TEST_CASE("Missing digits")
{
    CHECK_THROWS(ariel::snowman(1));
    CHECK_THROWS(ariel::snowman(12));
    CHECK_THROWS(ariel::snowman(123));
    CHECK_THROWS(ariel::snowman(1234));
    CHECK_THROWS(ariel::snowman(12341));
    CHECK_THROWS(ariel::snowman(123412));
    CHECK_THROWS(ariel::snowman(1234123)); 
}
TEST_CASE("illegal digits")
{
    CHECK_THROWS(ariel::snowman(52342132));
    CHECK_THROWS(ariel::snowman(16231232));
    CHECK_THROWS(ariel::snowman(13732412));
    CHECK_THROWS(ariel::snowman(21382123));
    CHECK_THROWS(ariel::snowman(12319312));
    CHECK_THROWS(ariel::snowman(12311011));
    CHECK_THROWS(ariel::snowman(43231151));
    CHECK_THROWS(ariel::snowman(23423210));
}
TEST_CASE("Not a positive number number")
{
    CHECK_THROWS(ariel::snowman(-12122111));
    CHECK_THROWS(ariel::snowman(-11111111));
    CHECK_THROWS(ariel::snowman(0));
    CHECK_THROWS(ariel::snowman(-22114411));
    
}

