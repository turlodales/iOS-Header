//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteractionContext-Protocol.h>

@class NSString;

@interface _UIPercentDrivenInteractionEffectChangeContext : NSObject <UIInteractionContext>
{
    _Bool _ended;
    double _progress;
    double _maximumProgress;
}

@property(nonatomic) _Bool ended; // @synthesize ended=_ended;
@property(nonatomic) double maximumProgress; // @synthesize maximumProgress=_maximumProgress;
@property(nonatomic) double progress; // @synthesize progress=_progress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

