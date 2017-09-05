import XCTest
@testable import DateToolsObjC

class DateToolsObjCTests: XCTestCase {
    func testOriginal() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct results.
        XCTAssertEqual(DateToolsObjC().originalOwner, "Matthew York")
        XCTAssertEqual(DateToolsObjC().originalRepo, "https://github.com/MatthewYork/DateTools")
    }


    static var allTests = [
        ("testOriginal", testOriginal),
    ]
}
