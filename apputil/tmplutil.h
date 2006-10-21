/*
 *  tmplutil.h
 *  icuapps
 *
 *  Created by Steven R. Loomis on 28/07/2006.
 *  Copyright 2006 IBM. All rights reserved.
 *
 */

#ifndef TMPLUTIL_H
#define TMPLUTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unicode/utypes.h>
#include <unicode/uclean.h>
#include <unicode/unistr.h>
#include <unicode/normlzr.h>
#include <unicode/uchar.h>
#include <unicode/ustdio.h>
#include <unicode/resbund.h>

#include "demo_settings.h"


// Function gets one parameter by name out of the string of data POSTed by
//   the html form.
//
//    parameters:
//       pdata    - char * pointer to the original POST data.
//       name     - char * name of the parameter to fetch.
//    return
//       UnicodeString containing the parameter, with
//             - the html form escaping removed
//             - converted from utf-8
//       If the parameter does not exist in the POST data, return
//          a BOGUS string.
//
UnicodeString  getParam(const char *pdata, const char *name);


void storeField(const char *fieldName, const UnicodeString &val, UnicodeString &content);


//
//  StringToHex    Create a Hex representation of a UnicodeString.
//                  Example:  "ABC" goes to "\u0041 \u0042 \u0043"
//
void toHex(UnicodeString &dest, const UnicodeString &src);


//
//  insertTemplateFile   Insert the contents of one of the html template
//                       files into a UnicodeString in which we are building up
//                       the html for the page.
//
void insertTemplateFile(UnicodeString &dest,        // Target UnicodeString
                        char *templateFileName,     //  File name of template.
                        char *insertPointMarker);    //  A string dest that marks the
                                                    //    desired insertion point


// insert a string
void insertTemplateString(UnicodeString &dest,        // Target UnicodeString
                        const UnicodeString& str,     //  string to replace.
                        const char *insertPointMarker);    //  A string dest that marks the
                                                    //    desired insertion point

void insertTemplateString(UnicodeString &dest,        // Target UnicodeString
                        const char *str,     //  string to replace.
                        const char *insertPointMarker);    //  A string dest that marks the

void insertTemplateResource(UnicodeString &dest, ResourceBundle& res, const char *str, UErrorCode &status);


void writeUnicodeStringCGI(const UnicodeString& outputputString);


/**
 * substitute the DEMO_* macros into the string
 */
void insertDemoStrings(UnicodeString& outputText, UErrorCode& status);


#endif