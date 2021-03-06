//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDBagConsumer-Protocol.h"

@class AIMPurchaseEvent, AMSProcessInfo, NSString;
@protocol AMSBagProtocol;

@interface ClipAdditionalDataTask : NSObject <ASDBagConsumer>
{
    id <AMSBagProtocol> _bag;
    unsigned long long _signpostID;
    NSString *_adamID;
    NSString *_assetToken;
    NSString *_bundleID;
    AMSProcessInfo *_clientInfo;
    NSString *_externalVersionID;
    NSString *_logKey;
    AIMPurchaseEvent *_purchaseEvent;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(retain) AIMPurchaseEvent *purchaseEvent; // @synthesize purchaseEvent=_purchaseEvent;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) NSString *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSString *assetToken; // @synthesize assetToken=_assetToken;
@property(retain) NSString *adamID; // @synthesize adamID=_adamID;
- (id)_requestParameters;
- (id)perform;
- (id)initWithBag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

