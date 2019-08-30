
[![Build Status](https://travis-ci.org/3a4oT/DateToolsObjC.svg?branch=master)](https://travis-ci.org/3a4oT/DateToolsObjC) [![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage) [![Swift Package Manager compatible](https://img.shields.io/badge/Swift%20Package%20Manager%20-compatible-brightgreen)](https://swift.org/package-manager/)

Thank you, **[Matthew York](https://github.com/MatthewYork) and [community](https://github.com/3a4oT/DateToolsObjC/blob/master/CREDITS.md)** for awesome library. You can find  original [repo/docs here](https://github.com/MatthewYork/DateTools). This package was created because I need *Carthage* support and distinguish between Swift and Objective-C implementation. Swift ABI not stable (yet) and I do not want to spend time to recompile binaries every time new Swift version come. Objective-C API works perfectly fine.


This is hard fork of original repo. This means there is no guarantee that codebase will fully reflect original repo.

* DateTools removes the boilerplate required to access date components, handles more nuanced date comparisons, and serves as the foundation for entirely new concepts like Time Periods and their collections.

### How to check if two date ranges overlaps in Objective-C? With *DateTools* it's really easy.
```objective-C
// Just example.
DTTimePeriod *periodA = [[DTTimePeriod alloc] initWithStartDate:request.startDate endDate:request.endDate];
DTTimePeriod *periodB = [[DTTimePeriod alloc] initWithStartDate:requestB.startDate endDate:requestB.endDate];
//Magic here
if ([periodA overlapsWith:periodB]) {
    NSLog(@"Is it cool?");
}
```  

## Use with Swift Package Manger

```swift

.package(url: "https://github.com/3a4oT/DateToolsObjC", .upToNextMajor(from: "1.0.4"))

```

## [How to use with Carthage](https://github.com/Carthage/Carthage#adding-frameworks-to-an-application):

 * Add to your *Cartfile*  ```github "3a4oT/DateToolsObjC"```
 * Run ```carthage build 3a4oT/DateToolsObjC```
 * Add ```DateToolsObjC.framework``` to your target
 * In your ```*.h/*.m``` just ```@import DateToolsObjC;```


## Can I use it from Swift?
Well, technically yes. But...=) it will work for **NSDate** and not for **Date** out the box. You will ask why? Shorty - *NSDate* and *Date* are two **different types** ([some more food](https://github.com/apple/swift-evolution/blob/master/proposals/0069-swift-mutability-for-foundation.md#new-value-types)). Don't be confused about [other thing you may hear](https://github.com/apple/swift-evolution/blob/master/proposals/0086-drop-foundation-ns.md) that's different. So far you have *3 option to go with*

1. Checkout original repo and use Swift API.
2. Cast Date to NSDate and back:
      ```swift
      import DateToolsObjC

      let today: NSDate = Date() as NSDate
      //usage in DateToolsAPI return NSDate cast back if you need.
      let result: Date = today.timeAgo() as Date
      ```
3. My favorite - just make *Swift Extension* under needed `DateToolsObjC API` which will cast *NSDate* to *Date* for you.

#### MIT License

Copyright (c) 2017 Petro Rovenskyi

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
