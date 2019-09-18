
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Wed, 18 Sep 2019 13:32:48 GMT
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
