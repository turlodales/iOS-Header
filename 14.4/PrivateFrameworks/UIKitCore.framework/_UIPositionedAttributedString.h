//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, UITextPosition;

__attribute__((visibility("hidden")))
@interface _UIPositionedAttributedString : NSObject
{
    NSAttributedString *_string;
    UITextPosition *_position;
}

+ (id)attributedString:(id)arg1 atPosition:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITextPosition *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSAttributedString *string; // @synthesize string=_string;
- (id)description;

@end

