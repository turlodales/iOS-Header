//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _UIFocusLinearMovementSequence : NSObject
{
    _Bool _looping;
    _Bool _restrictEnteringSequence;
    NSArray *_items;
}

+ (id)sequenceWithItems:(id)arg1 loops:(_Bool)arg2;
+ (id)sequenceWithItems:(id)arg1 loops:(_Bool)arg2 restrictEnteringSequence:(_Bool)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=restrictsEnteringSequence) _Bool restrictEnteringSequence; // @synthesize restrictEnteringSequence=_restrictEnteringSequence;
@property(readonly, nonatomic, getter=isLooping) _Bool looping; // @synthesize looping=_looping;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (id)initWithItems:(id)arg1 loops:(_Bool)arg2 restrictEnteringSequence:(_Bool)arg3;
- (id)initWithItems:(id)arg1 loops:(_Bool)arg2;
- (id)init;

@end

