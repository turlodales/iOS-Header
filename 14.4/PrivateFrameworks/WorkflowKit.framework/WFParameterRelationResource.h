//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFResource.h>

#import <WorkflowKit/WFActionEventObserver-Protocol.h>

@class NSString, WFAction;

@interface WFParameterRelationResource : WFResource <WFActionEventObserver>
{
    WFAction *_action;
}

+ (_Bool)mustBeAvailableForDisplay;
- (void).cxx_destruct;
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)refreshAvailability;
- (void)setupWithAction:(id)arg1;
@property(readonly, nonatomic) NSString *parameterKey;
- (id)comparedValues;
- (id)initWithParameterKey:(id)arg1 parameterValues:(id)arg2 relation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

