include(${QT_USE_FILE})

set(PRINT_PAGE_SRCS
print_page.cc
page_printer.cc)

qt4_automoc(${PRINT_PAGE_SRCS})

add_executable(print-page ${PRINT_PAGE_SRCS})

target_link_libraries(print-page ${QT_LIBRARIES})
