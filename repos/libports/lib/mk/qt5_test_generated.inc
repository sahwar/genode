QT_DEFINES += -DQT_NO_CAST_TO_ASCII -DQT_NO_CAST_FROM_ASCII -DQT_NO_FOREACH -DQT_NO_DATASTREAM -DQT_NO_NARROWING_CONVERSIONS_IN_CONNECT -DQT_BUILD_TESTLIB_LIB -DQT_BUILDING_QT -DQT_ASCII_CAST_WARNINGS -DQT_MOC_COMPAT -DQT_USE_QSTRINGBUILDER -DQT_DEPRECATED_WARNINGS -DQT_DISABLE_DEPRECATED_BEFORE=0x050000 -D_LARGEFILE64_SOURCE -D_LARGEFILE_SOURCE -DQT_NO_DEBUG -DQT_CORE_LIB

QT_INCPATH += \
  qtbase/src/testlib \
  qtbase/include \
  qtbase/include/QtTest \
  qtbase/include/QtTest/5.13.0 \
  qtbase/include/QtTest/5.13.0/QtTest \
  qtbase/include/QtCore/5.13.0 \
  qtbase/include/QtCore/5.13.0/QtCore \
  qtbase/include/QtCore \
  qtbase/mkspecs/genode-g++

QT_SOURCES += \
  qtestcase.cpp \
  qtestlog.cpp \
  qtesttable.cpp \
  qtestdata.cpp \
  qtestresult.cpp \
  qasciikey.cpp \
  qplaintestlogger.cpp \
  qxmltestlogger.cpp \
  qsignaldumper.cpp \
  qabstracttestlogger.cpp \
  qbenchmark.cpp \
  qbenchmarkmeasurement.cpp \
  qbenchmarkvalgrind.cpp \
  qbenchmarkevent.cpp \
  qbenchmarkperfevents.cpp \
  qbenchmarkmetric.cpp \
  qcsvbenchmarklogger.cpp \
  qteamcitylogger.cpp \
  qtestelement.cpp \
  qtestelementattribute.cpp \
  qtestmouse.cpp \
  qtestxunitstreamer.cpp \
  qxunittestlogger.cpp \
  qtestblacklist.cpp \
  qtaptestlogger.cpp \
  qabstractitemmodeltester.cpp \
  moc_qtesteventloop.cpp \
  moc_qabstractitemmodeltester.cpp

QT_VPATH += \
  qtbase/src/testlib \

# some source files need to be generated by moc from other source/header files before
# they get #included again by the original source file in the compiling stage

# source files generated from existing header files ('moc_%.cpp: %.h' rule in import-qt5.inc)
# extracted from 'compiler_moc_header_make_all' target

COMPILER_MOC_HEADER_MAKE_ALL_FILES = \
  moc_qtesteventloop.cpp \
  moc_qabstractitemmodeltester.cpp

# source files generated from existing source files ('%.moc: %.cpp' rule in import-qt5.inc)
# extracted from 'compiler_moc_source_make_all' rule

COMPILER_MOC_SOURCE_MAKE_ALL_FILES = \
 

