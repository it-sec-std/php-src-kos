--TEST--
Test fputcsv() : usage variations - with enclosure & delimiter of two chars
--SKIPIF--
<?php if (PHP_OS_FAMILY == "KOS") die("skip KOS failed test"); ?>
--FILE--
<?php

/* Testing fputcsv() to write to a file when default enclosure value and delimiter
   of two chars is provided and file is opened in read only mode */

echo "*** Testing fputcsv() : with enclosure & delimiter of two chars and file opened in read mode ***\n";

$fo = new SplFileObject(__DIR__ . '/SplFileObject_fputcsv_variation14.csv', 'w');

try {
    var_dump($fo->fputcsv(array('water', 'fruit'), ',,', '""'));
} catch (ValueError $e) {
    echo $e->getMessage(), "\n";
}

unset($fo);

echo "Done\n";
?>
--CLEAN--
<?php
$file = __DIR__ . '/SplFileObject_fputcsv_variation14.csv';
unlink($file);
?>
--EXPECT--
*** Testing fputcsv() : with enclosure & delimiter of two chars and file opened in read mode ***
SplFileObject::fputcsv(): Argument #3 ($enclosure) must be a single character
Done
