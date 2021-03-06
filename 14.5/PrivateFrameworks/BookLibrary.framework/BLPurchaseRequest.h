//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BookLibrary/BLRequest.h>

#import <BookLibrary/NSCopying-Protocol.h>
#import <BookLibrary/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface BLPurchaseRequest : BLRequest <NSCopying, NSSecureCoding>
{
    _Bool _audiobook;
    _Bool _preOrder;
    _Bool _restore;
    _Bool _suppressNetworkEvaluatorDialogs;
    NSString *_logUUID;
    NSString *_buyParameters;
    NSNumber *_storeIdentifier;
    NSURL *_permlink;
    NSString *_permlinkTitle;
    NSNumber *_accountIdentifier;
    NSDictionary *_analyticsInfo;
}

+ (_Bool)supportsSecureCoding;
+ (id)requestWithPermlink:(id)arg1 title:(id)arg2;
+ (id)requestWithBuyParameters:(id)arg1 storeIdentifier:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic, getter=shouldSuppressNetworkEvaluatorDialogs) _Bool suppressNetworkEvaluatorDialogs; // @synthesize suppressNetworkEvaluatorDialogs=_suppressNetworkEvaluatorDialogs;
@property(nonatomic, getter=isRestore) _Bool restore; // @synthesize restore=_restore;
@property(retain, nonatomic) NSDictionary *analyticsInfo; // @synthesize analyticsInfo=_analyticsInfo;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *permlinkTitle; // @synthesize permlinkTitle=_permlinkTitle;
@property(retain, nonatomic) NSURL *permlink; // @synthesize permlink=_permlink;
@property(retain, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(nonatomic, getter=isPreOrder) _Bool preOrder; // @synthesize preOrder=_preOrder;
@property(nonatomic, getter=isAudiobook) _Bool audiobook; // @synthesize audiobook=_audiobook;
@property(copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property(copy, nonatomic) NSString *logUUID; // @synthesize logUUID=_logUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

