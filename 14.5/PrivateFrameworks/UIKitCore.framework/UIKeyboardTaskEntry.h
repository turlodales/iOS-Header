//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskEntry : NSObject <NSCopying>
{
    CDUnknownBlockType __task;
    NSArray *__creationStack;
}

@property(readonly, retain, nonatomic) NSArray *originatingStack; // @synthesize originatingStack=__creationStack;
- (void)execute:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTask:(CDUnknownBlockType)arg1;

@end

