//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentForwardingAction.h>

@class NSString;

@interface INGetIntentParameterOptionsForwardingAction : INIntentForwardingAction
{
    NSString *_parameterName;
    NSString *_searchTerm;
}

+ (_Bool)supportsSecureCoding;
+ (Class)responseClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(readonly, nonatomic) NSString *parameterName; // @synthesize parameterName=_parameterName;
- (CDUnknownBlockType)_completionHandlerWithActionCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithIntent:(id)arg1 parameterName:(id)arg2 searchTerm:(id)arg3;

@end

