//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSPushConfiguration;
@protocol AMSBagProtocol, AMSPushHandlerContract, AMSPushHandlerDelegate;

@interface AMSPushHandler : NSObject
{
    id <AMSBagProtocol> _bag;
    AMSPushConfiguration *_configuration;
    id <AMSPushHandlerContract> _bagContract;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <AMSPushHandlerContract> bagContract; // @synthesize bagContract=_bagContract;
@property(readonly, nonatomic) AMSPushConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (id)initWithConfiguration:(id)arg1 bagContract:(id)arg2;
- (id)_enabledParsables;
- (_Bool)shouldHandleNotification:(id)arg1;
- (void)handleNotification:(id)arg1;
@property(nonatomic) __weak id <AMSPushHandlerDelegate> delegate;
- (id)initWithConfiguration:(id)arg1 bag:(id)arg2;

@end

