//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@class NSDictionary, NSParagraphStyle;

@interface NSAttributedString (TVMLKitAdditions)
@property(copy, nonatomic, setter=tv_setDefaultAttributes:) NSDictionary *tv_defaultAttributes;
- (struct CGRect)boundingRectWithWidth:(double)arg1 lines:(unsigned long long)arg2;
@property(readonly, nonatomic) NSParagraphStyle *tv_currentParagraphStyle;
@end

