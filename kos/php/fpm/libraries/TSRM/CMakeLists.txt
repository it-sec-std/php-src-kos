set(TARGET_NAME TSRM)

set(TARGET_SRC
        ${PHP_SRC_ROOT}/TSRM/TSRM.c
)

add_library(
        ${TARGET_NAME}
        STATIC
        ${TARGET_SRC}
)

target_compile_definitions(
        ${TARGET_NAME}
        PRIVATE
        ZEND_ENABLE_STATIC_TSRMLS_CACHE=1
        ZEND_SIGNALS
)
