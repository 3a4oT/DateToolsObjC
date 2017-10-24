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

#import <Foundation/Foundation.h>


typedef NS_ENUM(NSUInteger, DTTimePeriodRelation){
    DTTimePeriodRelationAfter,
    DTTimePeriodRelationStartTouching,
    DTTimePeriodRelationStartInside,
    DTTimePeriodRelationInsideStartTouching,
    DTTimePeriodRelationEnclosingStartTouching,
    DTTimePeriodRelationEnclosing,
    DTTimePeriodRelationEnclosingEndTouching,
    DTTimePeriodRelationExactMatch,
    DTTimePeriodRelationInside,
    DTTimePeriodRelationInsideEndTouching,
    DTTimePeriodRelationEndInside,
    DTTimePeriodRelationEndTouching,
    DTTimePeriodRelationBefore,
    DTTimePeriodRelationNone //One or more of the dates does not exist
};

typedef NS_ENUM(NSUInteger, DTTimePeriodSize) {
    DTTimePeriodSizeSecond,
    DTTimePeriodSizeMinute,
    DTTimePeriodSizeHour,
    DTTimePeriodSizeDay,
    DTTimePeriodSizeWeek,
    DTTimePeriodSizeMonth,
    DTTimePeriodSizeYear
};

typedef NS_ENUM(NSUInteger, DTTimePeriodInterval) {
    DTTimePeriodIntervalOpen,
    DTTimePeriodIntervalClosed
};

typedef NS_ENUM(NSUInteger, DTTimePeriodAnchor) {
    DTTimePeriodAnchorStart,
    DTTimePeriodAnchorCenter,
    DTTimePeriodAnchorEnd
};

@interface DTTimePeriod : NSObject

/**
 *  The start date for a DTTimePeriod representing the starting boundary of the time period
 */
@property (nonnull,nonatomic,strong) NSDate *StartDate;

/**
 *  The end date for a DTTimePeriod representing the ending boundary of the time period
 */
@property (nonnull,nonatomic,strong) NSDate *EndDate;

#pragma mark - Custom Init / Factory Methods
-(nonnull instancetype)initWithStartDate:(nullable NSDate *)startDate endDate:(nullable NSDate *)endDate;
+(nonnull instancetype)timePeriodWithStartDate:(nullable NSDate *)startDate endDate:(nullable NSDate *)endDate;
+(nonnull instancetype)timePeriodWithSize:(DTTimePeriodSize)size startingAt:(nonnull NSDate *)date;
+(nonnull instancetype)timePeriodWithSize:(DTTimePeriodSize)size amount:(NSInteger)amount startingAt:(nonnull NSDate *)date;
+(nonnull instancetype)timePeriodWithSize:(DTTimePeriodSize)size endingAt:(nonnull NSDate *)date;
+(nonnull instancetype)timePeriodWithSize:(DTTimePeriodSize)size amount:(NSInteger)amount endingAt:(nonnull NSDate *)date;
+(nonnull instancetype)timePeriodWithAllTime;

#pragma mark - Time Period Information
-(BOOL)hasStartDate;
-(BOOL)hasEndDate;
-(BOOL)isMoment;
-(double)durationInYears;
-(double)durationInWeeks;
-(double)durationInDays;
-(double)durationInHours;
-(double)durationInMinutes;
-(double)durationInSeconds;

#pragma mark - Time Period Relationship
-(BOOL)isEqualToPeriod:(nullable DTTimePeriod *)period;
-(BOOL)isInside:(nullable DTTimePeriod *)period;
-(BOOL)contains:(nullable DTTimePeriod *)period;
-(BOOL)overlapsWith:(nullable DTTimePeriod *)period;
-(BOOL)intersects:(nullable DTTimePeriod *)period;
-(DTTimePeriodRelation)relationToPeriod:(nullable DTTimePeriod *)period;
-(NSTimeInterval)gapBetween:(nullable DTTimePeriod *)period;

#pragma mark - Date Relationships
-(BOOL)containsDate:(nullable NSDate *)date interval:(DTTimePeriodInterval)interval;

#pragma mark - Period Manipulation
#pragma mark Shifts
-(void)shiftEarlierWithSize:(DTTimePeriodSize)size;
-(void)shiftEarlierWithSize:(DTTimePeriodSize)size amount:(NSInteger)amount;
-(void)shiftLaterWithSize:(DTTimePeriodSize)size;
-(void)shiftLaterWithSize:(DTTimePeriodSize)size amount:(NSInteger)amount;

#pragma mark Lengthen / Shorten
-(void)lengthenWithAnchorDate:(DTTimePeriodAnchor)anchor size:(DTTimePeriodSize)size;
-(void)lengthenWithAnchorDate:(DTTimePeriodAnchor)anchor size:(DTTimePeriodSize)size amount:(NSInteger)amount;
-(void)shortenWithAnchorDate:(DTTimePeriodAnchor)anchor size:(DTTimePeriodSize)size;
-(void)shortenWithAnchorDate:(DTTimePeriodAnchor)anchor size:(DTTimePeriodSize)size amount:(NSInteger)amount;

#pragma mark - Helper Methods
-(nonnull DTTimePeriod *)copy;
@end
