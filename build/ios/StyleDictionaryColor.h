
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Tue, 17 Sep 2019 20:19:31 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorWhite,
ColorGrey,
ColorBlack,
ColorPrimary,
ColorBlueLight,
ColorBlueMedium,
ColorBlueDark,
ColorRedLight,
ColorRedMedium,
ColorRedDark,
ColorOrangeLight,
ColorOrangeMedium,
ColorOrangeDark,
ColorYellowLight,
ColorYellowMedium,
ColorYellowDark,
ColorGreenLight,
ColorGreenMedium,
ColorGreenDark,
ColorGraphiteLight,
ColorGraphiteMedium,
ColorGraphiteDark,
ColorAdvantage,
ColorAccent
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
