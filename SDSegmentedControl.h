//
//  SDSegmentedControl.h
//  Created by Olivier Poitrey on 22/09/12.
//  Contributed by Marius Rackwitz on 19/10/12
//

// #define SDSegmentedControlDebug 1

#import <UIKit/UIKit.h>

// Most inherited UI_APPERANCE_SELECTORs are ignored. You can use the following selectors
// to customize appearance:
//  +[SDSegmentedControl appearance]
//  +[SDSegmentView appearance]
//  +[SDStainView appearance]

typedef enum {
    SDSegmentedArrowPositionBottom,
    SDSegmentedArrowPositionTop
} SDSegmentedArrowPosition;

@interface SDSegmentedControl : UISegmentedControl

@property (strong, nonatomic) UIColor *backgroundColor UI_APPEARANCE_SELECTOR;
@property (strong, nonatomic) UIColor *borderColor UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGFloat borderWidth UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGFloat arrowSize UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) SDSegmentedArrowPosition arrowPosition UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGFloat arrowHeightFactor UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CFTimeInterval animationDuration UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CFTimeInterval insertionRemovingAnimationDuration UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGFloat interItemSpace UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) UIEdgeInsets stainEdgeInsets UI_APPEARANCE_SELECTOR;
@property (strong, nonatomic) UIColor *shadowColor UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGFloat shadowRadius UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGFloat shadowOpacity UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGSize shadowOffset UI_APPEARANCE_SELECTOR;
@property (strong, nonatomic) UIFont *titleFont UI_APPEARANCE_SELECTOR;
@property (strong, nonatomic) UIFont *selectedTitleFont UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) BOOL centerSegmentsIfPossible UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGFloat scrollOffset UI_APPEARANCE_SELECTOR;
- (void)insertIsNewAtSegmentIndex:(NSInteger)index;
- (void)removeIsNewAtSegmentIndex:(NSInteger)index;

@end

@interface SDSegmentView : UIButton

@property (assign, nonatomic) CGSize imageSize UI_APPEARANCE_SELECTOR;
@property (strong, nonatomic) UIFont *titleFont;
@property (strong, nonatomic) UIFont *selectedTitleFont;
@property (assign, nonatomic) CGSize titleShadowOffset UI_APPEARANCE_SELECTOR;
@property (strong, nonatomic) UIColor *isNewCircleColor UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) NSInteger isNewCircleDiameter UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) BOOL isNew;

@end

@interface SDStainView : UIView <UIAppearance>

@property (strong, nonatomic) UIColor *backgroundColor UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGFloat cornerRadius UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) UIEdgeInsets edgeInsets UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGSize shadowOffset UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGFloat shadowBlur UI_APPEARANCE_SELECTOR;
@property (strong, nonatomic) UIColor *shadowColor UI_APPEARANCE_SELECTOR;
@property (assign, nonatomic) CGFloat innerStrokeLineWidth UI_APPEARANCE_SELECTOR;
@property (strong, nonatomic) UIColor *innerStrokeColor UI_APPEARANCE_SELECTOR;

@end
