//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSString, PKPaymentTransaction;

@interface PKDashboardTransactionMapItem : NSObject <PKDashboardItem>
{
    PKPaymentTransaction *_transaction;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

