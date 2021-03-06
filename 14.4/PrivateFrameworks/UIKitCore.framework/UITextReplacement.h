//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface UITextReplacement : NSObject
{
    UITextRange *_range;
    NSString *_originalText;
    NSString *_replacementText;
    NSString *_menuTitle;
    unsigned int _usageTrackingMask;
    CDUnknownBlockType _replacementCompletionBlock;
}

+ (id)replacementWithRange:(id)arg1 original:(id)arg2 replacement:(id)arg3 menuTitle:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) unsigned int usageTrackingMask; // @synthesize usageTrackingMask=_usageTrackingMask;
@property(copy, nonatomic) CDUnknownBlockType replacementCompletionBlock; // @synthesize replacementCompletionBlock=_replacementCompletionBlock;
@property(readonly, nonatomic) NSString *menuTitle; // @synthesize menuTitle=_menuTitle;
@property(readonly, nonatomic) NSString *replacementText; // @synthesize replacementText=_replacementText;
@property(readonly, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(readonly, nonatomic) UITextRange *range; // @synthesize range=_range;
- (void)didReplaceTextWithTarget:(id)arg1;

@end

