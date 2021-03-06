//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class ACAccount, AMSProcessInfo, NSString, NSURL;
@protocol AMSBagProtocol;

@interface AMSCampaignAttributionTask : AMSTask <AMSBagConsumer>
{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    NSURL *_URL;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_saveCookies:(id)arg1;
- (id)perform;
- (id)initWithURL:(id)arg1 bag:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

