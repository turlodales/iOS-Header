//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

#import <TouchML/UIImageJSExports-Protocol.h>

@class NSString, TMLRect;

@interface UIImage (TouchML) <UIImageJSExports>
+ (void)initializeJSContext:(id)arg1;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) TMLRect *bounds;
- (id)cropImageToRect:(struct CGRect)arg1;
- (id)resizableImage:(id)arg1:(long long)arg2;
- (id)colorPattern;
- (id)withRenderingMode:(long long)arg1;
@property(readonly, nonatomic) id CGImageRef;

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityHint;
@property(copy, nonatomic) NSString *accessibilityLabel;
@property(retain, nonatomic) NSString *accessibilityLanguage;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(copy, nonatomic) NSString *accessibilityValue;
@property(readonly, nonatomic) double scale;
@end

