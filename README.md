
Thank you, **Matthew York and community** for awesome library. You can find  original [repo/docs here](https://github.com/MatthewYork/DateTools). This package was created because I need *Carthage* support and distinguish between Swift and Objective-C implementation.

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

## [How to use with Carthage](https://github.com/Carthage/Carthage#adding-frameworks-to-an-application):

 * Add to your *Cartfile*  ```github "3a4oT/DateToolsObjC" == 1.0.0```
 * Run ```carthage build 3a4oT/DateToolsObjC```
 * Add ```DateToolsObjC.framework``` to your target
 * In your ```*.h/*.m``` just ```#import<DateToolsObjC/DateTools.h>```


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
