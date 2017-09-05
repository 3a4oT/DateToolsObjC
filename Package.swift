// swift-tools-version:3.1

import PackageDescription

let package = Package(
    name: "DateToolsObjC",
    exclude: [
        "Sources/DTConstants.h",
        "Sources/DTConstants.m",
        
        "Sources/DTError.h",
        "Sources/DTError.m",
        
        "Sources/NSDate+DateTools.h",
        "Sources/NSDate+DateTools.m",
        
        "Sources/DTTimePeriod.h",
        "Sources/DTTimePeriod.m",
        
        "Sources/DTTimePeriodGroup.h",
        "Sources/DTTimePeriodGroup.m",
        
        "Sources/DTTimePeriodCollection.h",
        "Sources/DTTimePeriodCollection.m",
        
        "Sources/DTTimePeriodChain.h",
        "Sources/DTTimePeriodChain.m",
        
        "Sources/DateTools.bundle"
    ]
)
