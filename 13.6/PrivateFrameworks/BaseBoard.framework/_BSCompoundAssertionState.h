//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSCompoundAssertionState-Protocol.h>

@class NSSet;

@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState>
{
    _Bool _active;
    NSSet *_context;
}

- (void).cxx_destruct;
- (id)description;
- (void)setContext:(id)arg1;
@property(readonly) NSSet *context;
- (void)setActive:(_Bool)arg1;
@property(readonly, getter=isActive) _Bool active;

@end

