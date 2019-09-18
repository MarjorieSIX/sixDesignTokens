
//
// StyleDictionaryColor.m
//
// Do not edit directly
// Generated on Wed, 18 Sep 2019 13:32:48 GMT
//

#import "StyleDictionaryColor.h"


@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
[UIColor colorWithRed:1.00f green:1.00f blue:1.00f alpha:1.00f],
[UIColor colorWithRed:0.67f green:0.67f blue:0.67f alpha:1.00f],
[UIColor colorWithRed:0.00f green:0.00f blue:0.00f alpha:1.00f],
[UIColor colorWithRed:0.00f green:0.53f blue:0.31f alpha:1.00f],
[UIColor colorWithRed:0.89f green:0.87f blue:0.95f alpha:1.00f],
[UIColor colorWithRed:0.25f green:0.26f blue:0.86f alpha:1.00f],
[UIColor colorWithRed:0.09f green:0.11f blue:0.44f alpha:1.00f],
[UIColor colorWithRed:1.00f green:0.87f blue:0.87f alpha:1.00f],
[UIColor colorWithRed:0.82f green:0.00f blue:0.14f alpha:1.00f],
[UIColor colorWithRed:0.47f green:0.01f blue:0.09f alpha:1.00f],
[UIColor colorWithRed:0.96f green:0.92f blue:0.85f alpha:1.00f],
[UIColor colorWithRed:0.93f green:0.57f blue:0.04f alpha:1.00f],
[UIColor colorWithRed:0.25f green:0.16f blue:0.01f alpha:1.00f],
[UIColor colorWithRed:0.95f green:0.96f blue:0.85f alpha:1.00f],
[UIColor colorWithRed:0.96f green:0.96f blue:0.07f alpha:1.00f],
[UIColor colorWithRed:0.25f green:0.25f blue:0.01f alpha:1.00f],
[UIColor colorWithRed:0.80f green:0.91f blue:0.86f alpha:1.00f],
[UIColor colorWithRed:0.00f green:0.53f blue:0.31f alpha:1.00f],
[UIColor colorWithRed:0.02f green:0.29f blue:0.18f alpha:1.00f],
[UIColor colorWithRed:0.90f green:0.91f blue:0.91f alpha:1.00f],
[UIColor colorWithRed:0.40f green:0.40f blue:0.40f alpha:1.00f],
[UIColor colorWithRed:0.22f green:0.22f blue:0.22f alpha:1.00f],
[UIColor colorWithRed:1.00f green:0.79f blue:0.05f alpha:1.00f],
[UIColor colorWithRed:0.40f green:0.18f blue:0.62f alpha:1.00f]
    ];
  });

  return colorArray;
}

@end
