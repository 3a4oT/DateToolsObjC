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

#pragma mark - Domain

NS_ASSUME_NONNULL_BEGIN
extern NSString *const DTErrorDomain;
NS_ASSUME_NONNULL_END

#pragma mark - Status Codes
static const NSUInteger DTInsertOutOfBoundsException = 0;
static const NSUInteger DTRemoveOutOfBoundsException = 1;
static const NSUInteger DTBadTypeException = 2;

@interface DTError : NSObject

+(void)throwInsertOutOfBoundsException:(NSInteger)index array:(nonnull NSArray *)array;
+(void)throwRemoveOutOfBoundsException:(NSInteger)index array:(nonnull NSArray *)array;
+(void)throwBadTypeException:(nonnull id)obj expectedClass:(nonnull Class)classType;
@end
