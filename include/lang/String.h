#include <stdio.h>
#include "Object.h"

class String: public Object {
public:
	String();
	String(String& original);
	String(char *value, int count);
	String(char *value, int offset, int count);
	String(int *code_points, int offset, int count);
	String(char *bytes, int offset, int length, String& charset_name);
	//String(char *bytes, int offset, int length, Charset& charset);
	String(char *bytes, int count, String& charset_name);
	//String(char *bytes, Charset& charset);
	String(char *bytes, int offset, int length);
	String(char *bytes, int length);
	//String(StringBuilder& builder);
	int Length();
	boolean IsEmpty();
	char CharAt(int index);
	int CodePointAt(int index);
	int CodePointBefore(int index);
	int CodePointCount(int begin_index, int end_index);
	int OffsetByCodePoints(int index, int code_point_offset);
	void GetChars(int src_begin, int src_end, char *dst, int dst_begin);
	char* GetBytes(String& charset_name);
	//char* GetBytes(Charset& charset);
	char* GetBytes();
	boolean Equals(Object& object);
	//boolean ContentEquals(StringBuilder& sb);
	//boolean ContentEquals(CharSequence& cs);
	boolean EqualsIgnoreCase(String& str);
	int CompareTo(String& str);
	int CompareToIgnoreCase(String& str);
	boolean RegionMatches(int toffset, String& other, int ooffset, int len);
	boolean RegionMatches(boolean ignore_case, int toffset, String& other,
			int ooffset, int len);
	boolean StartsWith(String& prefix, int toffset);
	boolean StartsWith(String& prefix);
	boolean EndsWith(String& suffix);
	int HashCode();
	int IndexOf(int char);
	int IndexOf(int char, int from_index);
	int LastIndexOf(int char);
	int LastIndexOf(int char, int from_index);
	int IndexOf(String& str);
	int IndexOf(String& str, int from_index);
	int IndexOf(char *source, int source_off, int source_count, char *target,
			int target_off, int target_count);
	int LastIndexOf(String& str);
	int LastIndexOf(String& str, int from_index);
	int LastIndexOf(char* source, int source_off, int source_count,
			char *target, int target_off, int target_count, int from_index);
	String& SubString(int begin_index);
	String& SubString(int begin_index, int end_index);
	//CharSequence SubSequence(int begin_index, int end_index);
	String& ConCat(String& str);
	String& Replace(char old_char, char new_char);
	boolean Matches(String& regex);
	boolean Contains(CharSequence& cs);
	String& ReplaceFirst(String& regex, String& replacement);
	String& ReplaceAll(String& regex, String& replacement);
	//String& Replace(CharSequence target, CharSequence replacement);
	//ArrayList<String&> Split(String& regex, int limit);
	//ArrayList<String&> Split(String& regex);
	//String& ToLowerCase(Locale locale);
	String& ToLowerCase();
	//String& ToUpperCase(Locale locale);
	String& ToUpperCase();
	String& Trim();
	char* ToString();
	char* ToCharArray();
	//static String& Format(String& format, Object ... args);
	//static String& Format(Locale locale, String& format, Object ... args);
	static String& ValueOf(Object object);
	static String& ValueOf(char *data, int count);
	static String& ValueOf(char *data, int offset, int count);
	static String& CopyValueOf(char *data, int offset, int count);
	static String& CopyValueOf(char *data, int count);
	static String& ValueOf(boolean b);
	static String& ValueOf(char c);
	static String& ValueOf(int i);
	static String& ValueOf(long l);
	static String& ValueOf(float f);
	static String& ValueOf(double d);
	String& Intern();
protected:
	String(int offset, int count, char *value);
	void GetChars(char *dst, int dst_begin);
};
