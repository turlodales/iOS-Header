//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextPlaceholder.h>

@class NSArray;

@interface PKTextInputTextPlaceholder : UITextPlaceholder
{
    _Bool _shouldIgnoreOrigin;
    id _placeholder;
    NSArray *__rects;
}

+ (id)placeholderWithText:(id)arg1 rects:(id)arg2;
+ (id)placeholderWithToken:(id)arg1 frame:(struct CGRect)arg2;
+ (id)placeholderWithWebTextPlaceholder:(id)arg1;
+ (id)placeholderWithTextPlaceholder:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *_rects; // @synthesize _rects=__rects;
@property(nonatomic) _Bool shouldIgnoreOrigin; // @synthesize shouldIgnoreOrigin=_shouldIgnoreOrigin;
@property(retain, nonatomic) id placeholder; // @synthesize placeholder=_placeholder;
- (id)rects;

@end

