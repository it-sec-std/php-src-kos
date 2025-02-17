/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

#define CONFIGURE_COMMAND " './configure'  'LIBXML_CFLAGS=-I/opt/KOS-CE-SDK-RPI4-x86-64-QEMU-0.0.0.40/sysroot-x86_64-pc-kos/include/libxml2' 'LIBXML_LIBS=-L/opt/KOS-CE-SDK-RPI4-x86-64-QEMU-0.0.0.40/sysroot-x86_64-pc-kos/lib/ -lxml2' 'OPENSSL_CFLAGS=-I/opt/KOS-CE-SDK-RPI4-x86-64-QEMU-0.0.0.40/sysroot-x86_64-pc-kos/include/openssl' 'OPENSSL_LIBS=-L/opt/KOS-CE-SDK-RPI4-x86-64-QEMU-0.0.0.40/sysroot-x86_64-pc-kos/lib/ -lssl -lcrypto' 'SQLITE_CFLAGS=-I/opt/KOS-CE-SDK-RPI4-x86-64-QEMU-0.0.0.40/sysroot-x86_64-pc-kos/include' 'SQLITE_LIBS=-L/opt/KOS-CE-SDK-RPI4-x86-64-QEMU-0.0.0.40/sysroot-x86_64-pc-kos/lib/ -lsqlite3' '--with-openssl' '--target=x86_64' '--host=x86_64' '--bindir=/opt/KOS-CE-SDK-RPI4-x86-64-QEMU-0.0.0.40/toolchain/bin' '--includedir=/opt/KOS-CE-SDK-RPI4-x86-64-QEMU-0.0.0.40/sysroot-x86_64-pc-kos/include' '--disable-opcache' '--without-valgrind' '--enable-kos' 'host_alias=x86_64' 'target_alias=x86_64' 'CPP=/opt/KOS-CE-SDK-RPI4-x86-64-QEMU-0.0.0.40/toolchain/bin/x86_64-pc-kos-cpp'"
#define PHP_ODBC_CFLAGS	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/usr/local/lib/php/extensions/no-debug-non-zts-20200930"
#define PHP_PREFIX              "/usr/local"
#define PHP_BINDIR              "/opt/KOS-CE-SDK-RPI4-x86-64-QEMU-0.0.0.40/toolchain/bin"
#define PHP_SBINDIR             "/usr/local/sbin"
#define PHP_MANDIR              "/usr/local/php/man"
#define PHP_LIBDIR              "/usr/local/lib/php"
#define PHP_DATADIR             "/usr/local/share/php"
#define PHP_SYSCONFDIR          "/usr/local/etc"
#define PHP_LOCALSTATEDIR       "/usr/local/var"
#define PHP_CONFIG_FILE_PATH    "/usr/local/lib"
#define PHP_CONFIG_FILE_SCAN_DIR    ""
#define PHP_SHLIB_SUFFIX        "so"
#define PHP_SHLIB_EXT_PREFIX    ""
