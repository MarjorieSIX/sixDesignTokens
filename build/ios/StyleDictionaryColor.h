
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Mon, 22 Apr 2019 17:31:16 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBlack,
ColorBlue30,
ColorBlue50,
ColorBlue00,
ColorGraphite40,
ColorGraphite50,
ColorGraphite0010,
ColorGreen30,
ColorGreen50,
ColorGreen00,
ColorOrange00,
ColorOrange05,
ColorOrange4550,
ColorRed30,
ColorRed50,
ColorRed00,
ColorWhite,
ColorYellow50,
ColorYellow00,
ColorYellow0010
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
