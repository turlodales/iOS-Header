//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface _UIDatePickerLinkedLabelCacheKey : NSObject
{
    NSString *_text;
    UIFont *_font;
    double _height;
    unsigned long long _hash;
}

+ (id)keyWithText:(id)arg1 font:(id)arg2 height:(double)arg3;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithText:(id)arg1 font:(id)arg2 height:(double)arg3;

@end

