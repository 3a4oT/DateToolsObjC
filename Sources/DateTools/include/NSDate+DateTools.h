// Copyright (C) 2014 by Matthew York
//
// Permission is hereby granted, free of charge, to any
// person obtaining a copy of this software and
// associated documentation files (the "Software"), to
// deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge,
// publish, distribute, sublicense, and/or sell copies of the
// Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall
// be included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
// BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
// ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#ifndef DateToolsLocalizedStrings
#define DateToolsLocalizedStrings(key) \
NSLocalizedStringFromTableInBundle(key, @"DateTools", [NSBundle bundleWithPath:[[[NSBundle bundleForClass:[DTError class]] resourcePath] stringByAppendingPathComponent:@"DateTools.bundle"]], nil)
#endif

#import <Foundation/Foundation.h>
#import "DTConstants.h"

@interface NSDate (DateTools)

#pragma mark - Time Ago
+ (nonnull NSString*)timeAgoSinceDate:(nonnull NSDate*)date;
+ (nonnull NSString*)shortTimeAgoSinceDate:(nonnull NSDate*)date;
+ (nonnull NSString *)weekTimeAgoSinceDate:(nonnull NSDate *)date;

- (nonnull NSString*)timeAgoSinceNow;
- (nonnull NSString *)shortTimeAgoSinceNow;
- (nonnull NSString *)weekTimeAgoSinceNow;

- (nonnull NSString *)timeAgoSinceDate:(nonnull NSDate *)date;
- (nonnull NSString *)timeAgoSinceDate:(nonnull NSDate *)date numericDates:(BOOL)useNumericDates;
- (nonnull NSString *)timeAgoSinceDate:(nonnull NSDate *)date numericDates:(BOOL)useNumericDates numericTimes:(BOOL)useNumericTimes;


- (nonnull NSString *)shortTimeAgoSinceDate:(nonnull NSDate *)date;
- (nonnull NSString *)weekTimeAgoSinceDate:(nonnull NSDate *)date;


#pragma mark - Date Components Without Calendar
- (NSInteger)era;
- (NSInteger)year;
- (NSInteger)month;
- (NSInteger)day;
- (NSInteger)hour;
- (NSInteger)minute;
- (NSInteger)second;
- (NSInteger)weekday;
- (NSInteger)weekdayOrdinal;
- (NSInteger)quarter;
- (NSInteger)weekOfMonth;
- (NSInteger)weekOfYear;
- (NSInteger)yearForWeekOfYear;
- (NSInteger)daysInMonth;
- (NSInteger)dayOfYear;
-(NSInteger)daysInYear;
-(BOOL)isInLeapYear;
- (BOOL)isToday;
- (BOOL)isTomorrow;
-(BOOL)isYesterday;
- (BOOL)isWeekend;
-(BOOL)isSameDay:(nonnull NSDate *)date;
+ (BOOL)isSameDay:(nonnull NSDate *)date asDate:(nonnull NSDate *)compareDate;

#pragma mark - Date Components With Calendar


- (NSInteger)eraWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)yearWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)monthWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)dayWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)hourWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)minuteWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)secondWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)weekdayWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)weekdayOrdinalWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)quarterWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)weekOfMonthWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)weekOfYearWithCalendar:(nonnull NSCalendar *)calendar;
- (NSInteger)yearForWeekOfYearWithCalendar:(nonnull NSCalendar *)calendar;


#pragma mark - Date Creating
+ (nonnull NSDate *)dateWithYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day;
+ (nonnull NSDate *)dateWithYear:(NSInteger)year month:(NSInteger)month day:(NSInteger)day hour:(NSInteger)hour minute:(NSInteger)minute second:(NSInteger)second;
+ (nonnull NSDate *)dateWithString:(nonnull NSString *)dateString formatString:(nonnull NSString *)formatString;
+ (nonnull NSDate *)dateWithString:(nonnull NSString *)dateString formatString:(nonnull NSString *)formatString timeZone:(nullable NSTimeZone *)timeZone;


#pragma mark - Date Editing
#pragma mark Date By Adding
- (nonnull NSDate *)dateByAddingYears:(NSInteger)years;
- (nonnull NSDate *)dateByAddingMonths:(NSInteger)months;
- (nonnull NSDate *)dateByAddingWeeks:(NSInteger)weeks;
- (nonnull NSDate *)dateByAddingDays:(NSInteger)days;
- (nonnull NSDate *)dateByAddingHours:(NSInteger)hours;
- (nonnull NSDate *)dateByAddingMinutes:(NSInteger)minutes;
- (nonnull NSDate *)dateByAddingSeconds:(NSInteger)seconds;
#pragma mark Date By Subtracting
- (nonnull NSDate *)dateBySubtractingYears:(NSInteger)years;
- (nonnull NSDate *)dateBySubtractingMonths:(NSInteger)months;
- (nonnull NSDate *)dateBySubtractingWeeks:(NSInteger)weeks;
- (nonnull NSDate *)dateBySubtractingDays:(NSInteger)days;
- (nonnull NSDate *)dateBySubtractingHours:(NSInteger)hours;
- (nonnull NSDate *)dateBySubtractingMinutes:(NSInteger)minutes;
- (nonnull NSDate *)dateBySubtractingSeconds:(NSInteger)seconds;

#pragma mark - Date Comparison
#pragma mark Time From
-(NSInteger)yearsFrom:(nonnull NSDate *)date;
-(NSInteger)monthsFrom:(nonnull NSDate *)date;
-(NSInteger)weeksFrom:(nonnull NSDate *)date;
-(NSInteger)daysFrom:(nonnull NSDate *)date;
-(double)hoursFrom:(nonnull NSDate *)date;
-(double)minutesFrom:(nonnull NSDate *)date;
-(double)secondsFrom:(nonnull NSDate *)date;
#pragma mark Time From With Calendar
-(NSInteger)yearsFrom:(nonnull NSDate *)date calendar:(nullable NSCalendar *)calendar;
-(NSInteger)monthsFrom:(nonnull NSDate *)date calendar:(nullable NSCalendar *)calendar;
-(NSInteger)weeksFrom:(nonnull NSDate *)date calendar:(nullable NSCalendar *)calendar;
-(NSInteger)daysFrom:(nonnull NSDate *)date calendar:(nullable NSCalendar *)calendar;

#pragma mark Time Until
-(NSInteger)yearsUntil;
-(NSInteger)monthsUntil;
-(NSInteger)weeksUntil;
-(NSInteger)daysUntil;
-(double)hoursUntil;
-(double)minutesUntil;
-(double)secondsUntil;
#pragma mark Time Ago
-(NSInteger)yearsAgo;
-(NSInteger)monthsAgo;
-(NSInteger)weeksAgo;
-(NSInteger)daysAgo;
-(double)hoursAgo;
-(double)minutesAgo;
-(double)secondsAgo;
#pragma mark Earlier Than
-(NSInteger)yearsEarlierThan:(nonnull NSDate *)date;
-(NSInteger)monthsEarlierThan:(nonnull NSDate *)date;
-(NSInteger)weeksEarlierThan:(nonnull NSDate *)date;
-(NSInteger)daysEarlierThan:(nonnull NSDate *)date;
-(double)hoursEarlierThan:(nonnull NSDate *)date;
-(double)minutesEarlierThan:(nonnull NSDate *)date;
-(double)secondsEarlierThan:(nonnull NSDate *)date;
#pragma mark Later Than
-(NSInteger)yearsLaterThan:(nonnull NSDate *)date;
-(NSInteger)monthsLaterThan:(nonnull NSDate *)date;
-(NSInteger)weeksLaterThan:(nonnull NSDate *)date;
-(NSInteger)daysLaterThan:(nonnull NSDate *)date;
-(double)hoursLaterThan:(nonnull NSDate *)date;
-(double)minutesLaterThan:(nonnull NSDate *)date;
-(double)secondsLaterThan:(nonnull NSDate *)date;
#pragma mark Comparators
-(BOOL)isEarlierThan:(nonnull NSDate *)date;
-(BOOL)isLaterThan:(nonnull NSDate *)date;
-(BOOL)isEarlierThanOrEqualTo:(nonnull NSDate *)date;
-(BOOL)isLaterThanOrEqualTo:(nonnull NSDate *)date;

#pragma mark - Formatted Dates
#pragma mark Formatted With Style
-(nonnull NSString *)formattedDateWithStyle:(NSDateFormatterStyle)style;
-(nonnull NSString *)formattedDateWithStyle:(NSDateFormatterStyle)style timeZone:(nonnull NSTimeZone *)timeZone;
-(nonnull NSString *)formattedDateWithStyle:(NSDateFormatterStyle)style locale:(nonnull NSLocale *)locale;
-(nonnull NSString *)formattedDateWithStyle:(NSDateFormatterStyle)style timeZone:(nonnull NSTimeZone *)timeZone locale:(nonnull NSLocale *)locale;
#pragma mark Formatted With Format
-(nonnull NSString *)formattedDateWithFormat:(nonnull NSString *)format;
-(nonnull NSString *)formattedDateWithFormat:(nonnull NSString *)format timeZone:(nonnull NSTimeZone *)timeZone;
-(nonnull NSString *)formattedDateWithFormat:(nonnull NSString *)format locale:(nonnull NSLocale *)locale;
-(nonnull NSString *)formattedDateWithFormat:(nonnull NSString *)format timeZone:(nonnull NSTimeZone *)timeZone locale:(nonnull NSLocale *)locale;

#pragma mark - Helpers
+(nonnull NSString *)defaultCalendarIdentifier;
+ (void)setDefaultCalendarIdentifier:(nonnull NSString *)identifier;
@end
