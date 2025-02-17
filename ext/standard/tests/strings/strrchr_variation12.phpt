--TEST--
Test strrchr() function : usage variations - binary safe
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS failed test"); ?>
--FILE--
<?php
/* Test strrchr() function: with binary values & null terminated strings passed to 'str1' & 'str2' */

echo "*** Test strrchr() function: binary safe ***\n";
$haystacks = array(
  "Hello".chr(0)."World",
  chr(0)."Hello World",
  "Hello World".chr(0),
  chr(0).chr(0).chr(0),
  "Hello\0world",
  "\0Hello",
  "Hello\0"
);

for($index = 0; $index < count($haystacks); $index++ ) {
  //needle as null string
  var_dump( strrchr($haystacks[$index], "\0") );
  //needle as NULL
  var_dump( strrchr($haystacks[$index], NULL) );
}
echo "*** Done ***";
?>
--EXPECT--
*** Test strrchr() function: binary safe ***
string(6) " World"
string(6) " World"
string(12) " Hello World"
string(12) " Hello World"
string(1) " "
string(1) " "
string(1) " "
string(1) " "
string(6) " world"
string(6) " world"
string(6) " Hello"
string(6) " Hello"
string(1) " "
string(1) " "
*** Done ***
