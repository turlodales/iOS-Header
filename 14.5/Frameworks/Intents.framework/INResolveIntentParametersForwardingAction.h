//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentForwardingAction.h>

@class NSArray;

@interface INResolveIntentParametersForwardingAction : INIntentForwardingAction
{
    _Bool _resolvesAllParameters;
    NSArray *_parameterNames;
}

+ (_Bool)supportsSecureCoding;
+ (Class)responseClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *parameterNames; // @synthesize parameterNames=_parameterNames;
@property(readonly, nonatomic) _Bool resolvesAllParameters; // @synthesize resolvesAllParameters=_resolvesAllParameters;
- (CDUnknownBlockType)_completionHandlerForSingleParameterNamed:(id)arg1 withActionCompletionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_completionHandlerForMultipleParametersWithActionCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithIntent:(id)arg1 parameterName:(id)arg2;
- (id)initWithIntent:(id)arg1 parameterNames:(id)arg2;

@end

