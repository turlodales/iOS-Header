//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface BKSSecureModeViolation : NSObject <BSDescriptionProviding>
{
    NSNumber *_processId;
    NSArray *_contextIds;
    NSDictionary *_layerNamesByContext;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *layerNamesByContext; // @synthesize layerNamesByContext=_layerNamesByContext;
@property(copy, nonatomic) NSArray *contextIds; // @synthesize contextIds=_contextIds;
@property(retain, nonatomic) NSNumber *processId; // @synthesize processId=_processId;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)initWithProcessId:(id)arg1 contextIds:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

