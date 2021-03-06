//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChronoUIServices/BSInvalidatable-Protocol.h>

@class NSArray, NSString;

@interface CHUISAvocadoHostCancelTouchesAssertion : NSObject <BSInvalidatable>
{
    _Bool _invalidated;
    NSArray *_assertions;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, copy, nonatomic) NSArray *assertions; // @synthesize assertions=_assertions;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithAssertions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

